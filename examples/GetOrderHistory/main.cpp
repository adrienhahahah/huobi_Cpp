/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Huobi/HuobiClient.h"
#include<iostream>

using namespace Huobi;
using namespace std;

int main(int argc, char** argv) {


    RequestClient* client = createRequestClient("xxx", "xxx");
    OrdersHistoryRequest ordersHistoryReq;
    vector<Order> orders = client->getOrderHistory(ordersHistoryReq);
    cout << "Symbol: " << orders[0].symbol << endl;
    cout << "OrderId: " << orders[0].orderId << endl;
    cout << "Amount: " << orders[0].amount << endl;

}
