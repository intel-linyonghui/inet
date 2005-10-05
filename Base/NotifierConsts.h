//
// Copyright (C) 2005 Andras Varga
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//


#ifndef __NOTIFIERCONSTS_H
#define __NOTIFIERCONSTS_H

#include "INETDefs.h"


/**
 * Category constants for NotificationBoard
 */
// TODO consider: use allocated IDs, like: const int NF_FOO = registerCategory("FOO");
enum
{
    // - host
    NF_HOSTPOSITION_UPDATED,
    NF_HOST_FAILURE,
    NF_HOST_RECOVERY,

    // - layer 1 (physical)
    NF_RADIOSTATE_CHANGED,

    // - layer 2 (data-link)
    NF_PP_TX_BEGIN,   // point-to-point transmission begins (currently PPP)
    NF_PP_TX_END,     // point-to-point transmission ends (currently PPP)
    NF_PP_RX_END,     // point-to-point reception ends (currently PPP)
    NF_L2_Q_DROP,
    NF_MAC_BECAME_IDLE,
    NF_LAYER2_HANDOVER_OCCURRED,

    // - layer 3 (network)
    NF_INTERFACE_STATE_CHANGED,
    NF_INTERFACE_CONFIG_CHANGED,

    // layer 3 - IPv4
    NF_IPv4_INTERFACECONFIG_CHANGED,
    NF_IPv4_ROUTINGTABLE_CHANGED,

    // layer 3 - IPv6
    NF_IPv6_INTERFACECONFIG_CHANGED,
    NF_IPv6_ROUTINGTABLE_CHANGED,
    NF_IPv6_HANDOVER_OCCURRED,

    // - layer 4 (transport)
    //...

    // - layer 7 (application)
    //...
};

/**
 * Utility function
 */
const char *notificationCategoryName(int category);

#endif




