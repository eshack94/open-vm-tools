/*********************************************************
 * Copyright (C) 1999-2016 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation version 2.1 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the Lesser GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA.
 *
 *********************************************************/

/*********************************************************
 * The contents of this file are subject to the terms of the Common
 * Development and Distribution License (the "License") version 1.0
 * and no later version.  You may not use this file except in
 * compliance with the License.
 *
 * You can obtain a copy of the License at
 *         http://www.opensource.org/licenses/cddl1.php
 *
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 *********************************************************/

/*
 * backdoor.h --
 *
 *    First layer of the internal communication channel between guest
 *    applications and vmware
 */

#ifndef _BACKDOOR_H_
#define _BACKDOOR_H_

#include "vm_basic_types.h"
#include "vm_assert.h"

#include "backdoor_types.h"

void
Backdoor(Backdoor_proto *bp); // IN/OUT

void 
Backdoor_InOut(Backdoor_proto *bp); // IN/OUT

void
Backdoor_HbOut(Backdoor_proto_hb *bp); // IN/OUT

void
Backdoor_HbIn(Backdoor_proto_hb *bp); // IN/OUT

#endif /* _BACKDOOR_H_ */
