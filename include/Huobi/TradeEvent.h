#ifndef TRADEEVENT_H
#define TRADEEVENT_H

#include <string>
#include <vector>
#include "Huobi/Trade.h"

namespace Huobi {

    /**
     * The trade received by subscription of trade.
     */
    struct TradeEvent {
        
        /**
         * The symbol you subscribed.
         */
        std::string symbol;
        
        /**
         * The UNIX formatted timestamp generated by server in UTC.
         */
        long timestamp;
        
        /**
         * The trade list. The content is Trade class.
         */
        std::vector<Trade> tradeList;
    };
}

#endif /* TRADEEVENT_H */

