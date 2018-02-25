// Copyright (c) 2014-2018 The Dash Core Developers
// Copyright (c) 2016-2018 Duality Blockchain Solutions Developers
// Copyright (c) 2017-2018 Credits Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CREDITS_PSNOTIFICATIONINTERFACE_H
#define CREDITS_PSNOTIFICATIONINTERFACE_H

#include "validationinterface.h"

class CPSNotificationInterface : public CValidationInterface
{
public:
    // virtual CPSNotificationInterface();
    CPSNotificationInterface();
    virtual ~CPSNotificationInterface();

protected:
    // CValidationInterface
    void UpdatedBlockTip(const CBlockIndex *pindex);
    void SyncTransaction(const CTransaction &tx, const CBlock *pblock);

private:
};

#endif // CREDITS_PSNOTIFICATIONINTERFACE_H
