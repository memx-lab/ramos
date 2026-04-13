/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Written by Pat Gaughen (gone@us.ibm.com) Mar 2002
 *
 */

#ifndef _ASM_X86_MMZONE_32_H
#define _ASM_X86_MMZONE_32_H

#include <asm/smp.h>

#ifdef CONFIG_NUMA
extern struct pglist_data *node_data[];
#define NODE_DATA(nid)	(node_data[nid])

#ifdef CONFIG_RAMOS_NUMA
extern struct vnuma_node_data vnuma_nodes[];
#define VNUMA_NODE_DATA(vnode_id) (vnuma_nodes[vnode_id])
#endif /* CONFIG_RAMOS_NUMA */

#endif /* CONFIG_NUMA */

#endif /* _ASM_X86_MMZONE_32_H */
