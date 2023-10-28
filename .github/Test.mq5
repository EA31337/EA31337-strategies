//+------------------------------------------------------------------+
//|                  EA31337 - multi-strategy advanced trading robot |
//|                                 Copyright 2016-2023, EA31337 Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

/*
 *  This file is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// Includes EA framework.
#include <EA31337-classes/EA.mqh>
#include <EA31337-classes/Pattern.mqh>

// Includes indicator classes.
#include <EA31337-classes/Indicators/Bitwise/indicators.h>
#include <EA31337-classes/Indicators/OHLC/indicators.h>
#include <EA31337-classes/Indicators/Price/indicators.h>
#include <EA31337-classes/Indicators/Special/indicators.h>
#include <EA31337-classes/Indicators/indicators.h>

// Local includes.
#include "../enum.h"
#include "../includes.h"
#include "../manager.h"

// Adds Demo strategy.
#include "../Demo/Stg_Demo.mqh"

int OnInit() { return INIT_SUCCEEDED; }
