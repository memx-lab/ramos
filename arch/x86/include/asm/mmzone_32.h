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
extern struct s_numa_node_data s_numa_nodes[];
#define S_NUMA_NODE_DATA(snode_id) (s_numa_nodes[snode_id])
#endif /* CONFIG_RAMOS_NUMA */

#endif /* CONFIG_NUMA */

#endif /* _ASM_X86_MMZONE_32_H */
