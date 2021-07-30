// Copyright (c) 2016-2021 The Espers developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include "nftui.h"
#include "ui_nftui.h"

#include "clientmodel.h"
#include "walletmodel.h"
#include "main.h"
#include "wallet.h"
#include "base58.h"
#include "transactionrecord.h"
#include "optionsmodel.h"
#include "guiutil.h"
#include "guiconstants.h"
#include "init.h"
#include "rpcserver.h"

using namespace json_spirit;

#include <sstream>
#include <string>

#include <QAbstractItemDelegate>
#include <QPainter>

NftUI::NftUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NftUI)
{
    ui->setupUi(this);

    setFixedSize(880, 500);
}

void NftUI::setModel(WalletModel *model)
{
    if(model) {
        this->model = model;
        setWindowTitle(QString("Launch an NFT"));
    }
}

NftUI::~NftUI()
{
    delete ui;
}
