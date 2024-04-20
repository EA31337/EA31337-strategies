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
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// Includes strategy classes.
#include "AC/Stg_AC.mqh"
#include "AD/Stg_AD.mqh"
#include "ADX/Stg_ADX.mqh"
#include "AMA/Stg_AMA.mqh"
#include "ASI/Stg_ASI.mqh"
#include "ATR/Stg_ATR.mqh"
#include "ATR_MA_Trend/Stg_ATR_MA_Trend.mqh"
#include "Alligator/Stg_Alligator.mqh"
#include "Arrows/Stg_Arrows.mqh"
#include "Awesome/Stg_Awesome.mqh"
#include "BWMFI/Stg_BWMFI.mqh"
#include "Bands/Stg_Bands.mqh"
#include "BearsPower/Stg_BearsPower.mqh"
#include "BullsPower/Stg_BullsPower.mqh"
#include "CCI/Stg_CCI.mqh"
#include "Chaikin/Stg_Chaikin.mqh"
#include "DEMA/Stg_DEMA.mqh"
#include "DPO/Stg_DPO.mqh"
#include "DeMarker/Stg_DeMarker.mqh"
#include "ElliottWave/Stg_ElliottWave.mqh"
#include "Envelopes/Stg_Envelopes.mqh"
#include "Force/Stg_Force.mqh"
#include "Fractals/Stg_Fractals.mqh"
#include "Gator/Stg_Gator.mqh"
#include "HeikenAshi/Stg_HeikenAshi.mqh"
#include "Ichimoku/Stg_Ichimoku.mqh"
#include "Indicator/Stg_Indicator.mqh"
#include "MA/Stg_MA.mqh"
#include "MACD/Stg_MACD.mqh"
#include "MA_Breakout/Stg_MA_Breakout.mqh"
#include "MA_Cross_Candle/Stg_MA_Cross_Candle.mqh"
#include "MA_Cross_Pivot/Stg_MA_Cross_Pivot.mqh"
#include "MA_Cross_Shift/Stg_MA_Cross_Shift.mqh"
#include "MA_Cross_Sup_Res/Stg_MA_Cross_Sup_Res.mqh"
#include "MA_Cross_Timeframe/Stg_MA_Cross_Timeframe.mqh"
#include "MA_Trend/Stg_MA_Trend.mqh"
#include "MFI/Stg_MFI.mqh"
#include "Momentum/Stg_Momentum.mqh"
#include "OBV/Stg_OBV.mqh"
#include "OSMA/Stg_OSMA.mqh"
#include "Oscillator/Stg_Oscillator.mqh"
#include "Oscillator_Cross/Oscillator_Cross/Stg_Oscillator_Cross.mqh"
#include "Oscillator_Cross_Shift/Stg_Oscillator_Cross_Shift.mqh"
#include "Oscillator_Cross_Timeframe/Stg_Oscillator_Cross_Timeframe.mqh"
#include "Oscillator_Cross_Zero/Stg_Oscillator_Cross_Zero.mqh"
#include "Oscillator_Divergence/Stg_Oscillator_Divergence.mqh"
#include "Oscillator_Martingale/Stg_Oscillator_Martingale.mqh"
#include "Oscillator_Multi/Stg_Oscillator_Multi.mqh"
#include "Oscillator_Overlay/Stg_Oscillator_Overlay.mqh"
#include "Oscillator_Range/Stg_Oscillator_Range.mqh"
#include "Oscillator_Trend/Stg_Oscillator_Trend.mqh"
#include "Pattern/Stg_Pattern.mqh"
#include "Pinbar/Stg_Pinbar.mqh"
#include "Pivot/Stg_Pivot.mqh"
#include "RSI/Stg_RSI.mqh"
#include "RVI/Stg_RVI.mqh"
#include "Retracement/Stg_Retracement.mqh"
#include "SAR/Stg_SAR.mqh"
#include "SAWA/Stg_SAWA.mqh"
#include "SVE_Bollinger_Bands/Stg_SVE_Bollinger_Bands.mqh"
#include "StdDev/Stg_StdDev.mqh"
#include "Stochastic/Stg_Stochastic.mqh"
#include "SuperTrend/Stg_SuperTrend.mqh"
#include "TMAT_SVEBB/Stg_TMAT_SVEBB.mqh"
#include "TMA_CG/Stg_TMA_CG.mqh"
#include "TMA_True/Stg_TMA_True.mqh"
#include "WPR/Stg_WPR.mqh"
#include "ZigZag/Stg_ZigZag.mqh"
