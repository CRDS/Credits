// Copyright (c) 2009-2018 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Developers
// Copyright (c) 2014-2018 The Dash Core Developers
// Copyright (c) 2016-2018 Duality Blockchain Solutions Developers
// Copyright (c) 2017-2018 Credits Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CREDITS_QT_CREDITSADDRESSVALIDATOR_H
#define CREDITS_QT_CREDITSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CreditsAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CreditsAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Credits address widget validator, checks for a valid Credits address.
 */
class CreditsAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CreditsAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // CREDITS_QT_CREDITSADDRESSVALIDATOR_H
