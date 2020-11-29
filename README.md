# EA31337 strategies

<!--[![Release][github-release-image]][github-release-link]-->
[![License][license-image]][license-link]
[![Status][gha-image-check-master]][gha-link-check-master]
[![Status][gha-image-compile-master]][gha-link-compile-master]
[![Status][gha-image-lint-master]][gha-link-lint-master]
[![Channel][tg-channel-image]][tg-channel-link]
[![Chat][tg-chat-image]][tg-chat-link]
[![Edit][gitpod-image]][gitpod-link]

EA31337 strategies.

## Status

| Strategy | Check | Lint | Compile | Backtest |
| --------:|:-----:|:----:|:-------:|:--------:|
| AC | [![check][ghi_s_ac_check]][ghl_s_ac_check] | [![check][ghi_s_ac_lint]][ghl_s_ac_lint] | [![check][ghi_s_ac_compile]][ghl_s_ac_compile] | [![check][ghi_s_ac_bt]][ghl_s_ac_bt] |
| AD | [![check][ghi_s_ad_check]][ghl_s_ad_check] | [![check][ghi_s_ad_lint]][ghl_s_ad_lint] | [![check][ghi_s_ad_compile]][ghl_s_ad_compile] | [![check][ghi_s_ad_bt]][ghl_s_ad_bt] |
| ADX | [![check][ghi_s_adx_check]][ghl_s_adx_check] | [![check][ghi_s_adx_lint]][ghl_s_adx_lint] | [![check][ghi_s_adx_compile]][ghl_s_adx_compile] | [![check][ghi_s_adx_bt]][ghl_s_adx_bt] |
| ATR | [![check][ghi_s_atr_check]][ghl_s_atr_check] | [![check][ghi_s_atr_lint]][ghl_s_atr_lint] | [![check][ghi_s_atr_compile]][ghl_s_atr_compile] | [![check][ghi_s_atr_bt]][ghl_s_atr_bt] |
| Alligator | [![check][ghi_s_alli_check]][ghl_s_alli_check] | [![check][ghi_s_alli_lint]][ghl_s_alli_lint] | [![check][ghi_s_alli_compile]][ghl_s_alli_compile] | [![check][ghi_s_alli_bt]][ghl_s_alli_bt] |
| Awesome | [![check][ghi_s_ao_check]][ghl_s_ao_check] | [![check][ghi_s_ao_lint]][ghl_s_ao_lint] | [![check][ghi_s_ao_compile]][ghl_s_ao_compile] | [![check][ghi_s_ao_bt]][ghl_s_ao_bt] |
| BWMFI | [![check][ghi_s_bwmfi_check]][ghl_s_bwmfi_check] | [![check][ghi_s_bwmfi_lint]][ghl_s_bwmfi_lint] | [![check][ghi_s_bwmfi_compile]][ghl_s_bwmfi_compile] | [![check][ghi_s_bwmfi_bt]][ghl_s_bwmfi_bt] |
| Bands | [![check][ghi_s_bands_check]][ghl_s_bands_check] | [![check][ghi_s_bands_lint]][ghl_s_bands_lint] | [![check][ghi_s_bands_compile]][ghl_s_bands_compile] | [![check][ghi_s_bands_bt]][ghl_s_bands_bt] |
| BearsPower | [![check][ghi_s_bears_check]][ghl_s_bears_check] | [![check][ghi_s_bears_lint]][ghl_s_bears_lint] | [![check][ghi_s_bears_compile]][ghl_s_bears_compile] | [![check][ghi_s_bears_bt]][ghl_s_bears_bt] |
| BullsPower | [![check][ghi_s_bulls_check]][ghl_s_bulls_check] | [![check][ghi_s_bulls_lint]][ghl_s_bulls_lint] | [![check][ghi_s_bulls_compile]][ghl_s_bulls_compile] | [![check][ghi_s_bulls_bt]][ghl_s_bulls_bt] |
| CCI | [![check][ghi_s_cci_check]][ghl_s_cci_check] | [![check][ghi_s_cci_lint]][ghl_s_cci_lint] | [![check][ghi_s_cci_compile]][ghl_s_cci_compile] | [![check][ghi_s_cci_bt]][ghl_s_cci_bt] |
| DeMarker | [![check][ghi_s_dm_check]][ghl_s_dm_check] | [![check][ghi_s_dm_lint]][ghl_s_dm_lint] | [![check][ghi_s_dm_compile]][ghl_s_dm_compile] | [![check][ghi_s_dm_bt]][ghl_s_dm_bt] |
| ElliottWave | [![check][ghi_s_elliott_check]][ghl_s_elliott_check] | [![check][ghi_s_elliott_lint]][ghl_s_elliott_lint] | [![check][ghi_s_elliott_compile]][ghl_s_elliott_compile] | [![check][ghi_s_elliott_bt]][ghl_s_elliott_bt] |
| Envelopes | [![check][ghi_s_env_check]][ghl_s_env_check] | [![check][ghi_s_env_lint]][ghl_s_env_lint] | [![check][ghi_s_env_compile]][ghl_s_env_compile] | [![check][ghi_s_env_bt]][ghl_s_env_bt] |
| Force | [![check][ghi_s_force_check]][ghl_s_force_check] | [![check][ghi_s_force_lint]][ghl_s_force_lint] | [![check][ghi_s_force_compile]][ghl_s_force_compile] | [![check][ghi_s_force_bt]][ghl_s_force_bt] |
| Fractals | [![check][ghi_s_fractals_check]][ghl_s_fractals_check] | [![check][ghi_s_fractals_lint]][ghl_s_fractals_lint] | [![check][ghi_s_fractals_compile]][ghl_s_fractals_compile] | [![check][ghi_s_fractals_bt]][ghl_s_fractals_bt] |
| Gator | [![check][ghi_s_gator_check]][ghl_s_gator_check] | [![check][ghi_s_gator_lint]][ghl_s_gator_lint] | [![check][ghi_s_gator_compile]][ghl_s_gator_compile] | [![check][ghi_s_gator_bt]][ghl_s_gator_bt] |
| HeikenAshi | [![check][ghi_s_ha_check]][ghl_s_ha_check] | [![check][ghi_s_ha_lint]][ghl_s_ha_lint] | [![check][ghi_s_ha_compile]][ghl_s_ha_compile] | [![check][ghi_s_ha_bt]][ghl_s_ha_bt] |
| Ichimoku | [![check][ghi_s_ichi_check]][ghl_s_ichi_check] | [![check][ghi_s_ichi_lint]][ghl_s_ichi_lint] | [![check][ghi_s_ichi_compile]][ghl_s_ichi_compile] | [![check][ghi_s_ichi_bt]][ghl_s_ichi_bt] |
| MA | [![check][ghi_s_ma_check]][ghl_s_ma_check] | [![check][ghi_s_ma_lint]][ghl_s_ma_lint] | [![check][ghi_s_ma_compile]][ghl_s_ma_compile] | [![check][ghi_s_ma_bt]][ghl_s_ma_bt] |
| MACD | [![check][ghi_s_macd_check]][ghl_s_macd_check] | [![check][ghi_s_macd_lint]][ghl_s_macd_lint] | [![check][ghi_s_macd_compile]][ghl_s_macd_compile] | [![check][ghi_s_macd_bt]][ghl_s_macd_bt] |
| MFI | [![check][ghi_s_mfi_check]][ghl_s_mfi_check] | [![check][ghi_s_mfi_lint]][ghl_s_mfi_lint] | [![check][ghi_s_mfi_compile]][ghl_s_mfi_compile] | [![check][ghi_s_mfi_bt]][ghl_s_mfi_bt] |
| Momentum | [![check][ghi_s_mom_check]][ghl_s_mom_check] | [![check][ghi_s_mom_lint]][ghl_s_mom_lint] | [![check][ghi_s_mom_compile]][ghl_s_mom_compile] | [![check][ghi_s_mom_bt]][ghl_s_mom_bt] |
| OBV | [![check][ghi_s_obv_check]][ghl_s_obv_check] | [![check][ghi_s_obv_lint]][ghl_s_obv_lint] | [![check][ghi_s_obv_compile]][ghl_s_obv_compile] | [![check][ghi_s_obv_bt]][ghl_s_obv_bt] |
| OsMA | [![check][ghi_s_osma_check]][ghl_s_osma_check] | [![check][ghi_s_osma_lint]][ghl_s_osma_lint] | [![check][ghi_s_osma_compile]][ghl_s_osma_compile] | [![check][ghi_s_osma_bt]][ghl_s_osma_bt] |
| RSI | [![check][ghi_s_rsi_check]][ghl_s_rsi_check] | [![check][ghi_s_rsi_lint]][ghl_s_rsi_lint] | [![check][ghi_s_rsi_compile]][ghl_s_rsi_compile] | [![check][ghi_s_rsi_bt]][ghl_s_rsi_bt] |
| RVI | [![check][ghi_s_rvi_check]][ghl_s_rvi_check] | [![check][ghi_s_rvi_lint]][ghl_s_rvi_lint] | [![check][ghi_s_rvi_compile]][ghl_s_rvi_compile] | [![check][ghi_s_rvi_bt]][ghl_s_rvi_bt] |
| SAR | [![check][ghi_s_sar_check]][ghl_s_sar_check] | [![check][ghi_s_sar_lint]][ghl_s_sar_lint] | [![check][ghi_s_sar_compile]][ghl_s_sar_compile] | [![check][ghi_s_sar_bt]][ghl_s_sar_bt] |
| SVE BB | [![check][ghi_s_svebb_check]][ghl_s_svebb_check] | [![check][ghi_s_svebb_lint]][ghl_s_svebb_lint] | [![check][ghi_s_svebb_compile]][ghl_s_svebb_compile] | [![check][ghi_s_svebb_bt]][ghl_s_svebb_bt] |
| StdDev | [![check][ghi_s_stddev_check]][ghl_s_stddev_check] | [![check][ghi_s_stddev_lint]][ghl_s_stddev_lint] | [![check][ghi_s_stddev_compile]][ghl_s_stddev_compile] | [![check][ghi_s_stddev_bt]][ghl_s_stddev_bt] |
| Stochastic | [![check][ghi_s_stoch_check]][ghl_s_stoch_check] | [![check][ghi_s_stoch_lint]][ghl_s_stoch_lint] | [![check][ghi_s_stoch_compile]][ghl_s_stoch_compile] | [![check][ghi_s_stoch_bt]][ghl_s_stoch_bt] |
| TMA Band SVE True | [![check][ghi_s_tmabsvet_check]][ghl_s_tmabsvet_check] | [![check][ghi_s_tmabsvet_lint]][ghl_s_tmabsvet_lint] | [![check][ghi_s_tmabsvet_compile]][ghl_s_tmabsvet_compile] | [![check][ghi_s_tmabsvet_bt]][ghl_s_tmabsvet_bt] |
| TMA True | [![check][ghi_s_tmatrue_check]][ghl_s_tmatrue_check] | [![check][ghi_s_tmatrue_lint]][ghl_s_tmatrue_lint] | [![check][ghi_s_tmatrue_compile]][ghl_s_tmatrue_compile] | [![check][ghi_s_tmatrue_bt]][ghl_s_tmatrue_bt] |
| WPR | [![check][ghi_s_wpr_check]][ghl_s_wpr_check] | [![check][ghi_s_wpr_lint]][ghl_s_wpr_lint] | [![check][ghi_s_wpr_compile]][ghl_s_wpr_compile] | [![check][ghi_s_wpr_bt]][ghl_s_wpr_bt] |
| ZigZag | [![check][ghi_s_zigzag_check]][ghl_s_zigzag_check] | [![check][ghi_s_zigzag_lint]][ghl_s_zigzag_lint] | [![check][ghi_s_zigzag_compile]][ghl_s_zigzag_compile] | [![check][ghi_s_zigzag_bt]][ghl_s_zigzag_bt] |
| eSAWA | [![check][ghi_s_esawa_check]][ghl_s_esawa_check] | [![check][ghi_s_esawa_lint]][ghl_s_esawa_lint] | [![check][ghi_s_esawa_compile]][ghl_s_esawa_compile] | [![check][ghi_s_esawa_bt]][ghl_s_esawa_bt] |

## Legal

### License

The project is released under [GNU GPLv3 licence](https://www.gnu.org/licenses/quick-guide-gplv3.html),
so that means the software is copyrighted, however you have the freedom to use, change or share the software
for any purpose as long as the modified version stays free. See: [GNU FAQ](https://www.gnu.org/licenses/gpl-faq.html).

You should have received a copy of the GNU General Public License along with this program
(check the [LICENSE](https://github.com/EA31337/EA31337/blob/master/LICENSE) file).
If not, please read <http://www.gnu.org/licenses/>.
For simplified version, please read <https://tldrlegal.com/license/gnu-general-public-license-v3-(gpl-3)>.

## Terms of Use

By using this code, you understand and agree that we (company and author)
are not be liable or responsible for any loss or damage due to any reason.
Although every attempt has been made to assure accuracy,
we do not give any express or implied warranty as to its accuracy.
We do not accept any liability for error or omission.

You acknowledge that you are familiar with these risks
and that you are solely responsible for the outcomes of your decisions.
We accept no liability whatsoever for any direct or consequential loss arising from the use of this product.
You understand and agree that past results are not necessarily indicative of future performance.

Use of this code serves as your acknowledgement and representation that you have read and understand
these TERMS OF USE and that you agree to be bound by such Terms of Use ("License Agreement").

### Copyright information

Copyright © 2016-2020 – 31337 Investments Ltd - All Rights Reserved

Author & Publisher: kenorb at 31337 Investments Ltd.

### Disclaimer and Risk Warnings

Trading any financial market involves risk.
All forms of trading carry a high level of risk so you should only speculate with money you can afford to lose.
You can lose more than your initial deposit and stake.
Please ensure your chosen method matches your investment objectives,
familiarize yourself with the risks involved and if necessary seek independent advice.

NFA and CTFC Required Disclaimers:
Trading in the Foreign Exchange market as well as in Futures Market and Options or in the Stock Market
is a challenging opportunity where above average returns are available for educated and experienced investors
who are willing to take above average risk.
However, before deciding to participate in Foreign Exchange (FX) trading or in Trading Futures, Options or stocks,
you should carefully consider your investment objectives, level of experience and risk appetite.
**Do not invest money you cannot afford to lose**.

CFTC RULE 4.41 - HYPOTHETICAL OR SIMULATED PERFORMANCE RESULTS HAVE CERTAIN LIMITATIONS.
UNLIKE AN ACTUAL PERFORMANCE RECORD, SIMULATED RESULTS DO NOT REPRESENT ACTUAL TRADING.
ALSO, SINCE THE TRADES HAVE NOT BEEN EXECUTED, THE RESULTS MAY HAVE UNDER-OR-OVER COMPENSATED FOR THE IMPACT,
IF ANY, OF CERTAIN MARKET FACTORS, SUCH AS LACK OF LIQUIDITY. SIMULATED TRADING PROGRAMS IN GENERAL
ARE ALSO SUBJECT TO THE FACT THAT THEY ARE DESIGNED WITH THE BENEFIT OF HINDSIGHT.
NO REPRESENTATION IS BEING MADE THAN ANY ACCOUNT WILL OR IS LIKELY TO ACHIEVE PROFIT OR LOSSES SIMILAR TO THOSE SHOWN.

<!-- Named links -->

[github-release-image]: https://img.shields.io/github/release/EA31337/EA31337-Strategies.svg?logo=github
[github-release-link]: https://github.com/EA31337/EA31337-Strategies/releases

[license-image]: https://img.shields.io/github/license/EA31337/EA31337-Strategies.svg
[license-link]: https://tldrlegal.com/license/gnu-general-public-license-v3-(gpl-3)

[gha-link-check-master]: https://github.com/EA31337/EA31337-Strategies/actions?query=workflow:Check+branch%3Amaster
[gha-image-check-master]: https://github.com/EA31337/EA31337-Strategies/workflows/Check/badge.svg?branch=master
[gha-link-compile-master]: https://github.com/EA31337/EA31337-Strategies/actions?query=workflow:Compile+branch%3Amaster
[gha-image-compile-master]: https://github.com/EA31337/EA31337-Strategies/workflows/Compile/badge.svg?branch=master
[gha-link-lint-master]: https://github.com/EA31337/EA31337-Strategies/actions?query=workflow:Lint+branch%3Amaster
[gha-image-lint-master]: https://github.com/EA31337/EA31337-Strategies/workflows/Lint/badge.svg?branch=master

[tg-channel-image]: https://img.shields.io/badge/Telegram-news-0088CC.svg?logo=telegram
[tg-channel-link]: https://t.me/EA31337_News
[tg-chat-image]: https://img.shields.io/badge/Telegram-chat-0088CC.svg?logo=telegram
[tg-chat-link]: https://t.me/EA31337

[gitpod-image]: https://img.shields.io/badge/Gitpod-ready--to--code-blue?logo=gitpod
[gitpod-link]: https://gitpod.io/#https://github.com/EA31337/EA31337-Strategies

[ghl_s_ac_check]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Check+branch:master
[ghi_s_ac_check]: https://github.com/EA31337/Strategy-AC/workflows/Check/badge.svg
[ghl_s_ac_lint]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Lint+branch:master
[ghi_s_ac_lint]: https://github.com/EA31337/Strategy-AC/workflows/Lint/badge.svg
[ghl_s_ac_compile]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Compile+branch:master
[ghi_s_ac_compile]: https://github.com/EA31337/Strategy-AC/workflows/Compile/badge.svg
[ghl_s_ac_bt]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Backtest+branch:master
[ghi_s_ac_bt]: https://github.com/EA31337/Strategy-AC/workflows/Backtest/badge.svg

[ghl_s_ad_check]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Check+branch:master
[ghi_s_ad_check]: https://github.com/EA31337/Strategy-AD/workflows/Check/badge.svg
[ghl_s_ad_lint]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Lint+branch:master
[ghi_s_ad_lint]: https://github.com/EA31337/Strategy-AD/workflows/Lint/badge.svg
[ghl_s_ad_compile]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Compile+branch:master
[ghi_s_ad_compile]: https://github.com/EA31337/Strategy-AD/workflows/Compile/badge.svg
[ghl_s_ad_bt]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Backtest+branch:master
[ghi_s_ad_bt]: https://github.com/EA31337/Strategy-AD/workflows/Backtest/badge.svg

[ghl_s_adx_check]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Check+branch:master
[ghi_s_adx_check]: https://github.com/EA31337/Strategy-ADX/workflows/Check/badge.svg
[ghl_s_adx_lint]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Lint+branch:master
[ghi_s_adx_lint]: https://github.com/EA31337/Strategy-ADX/workflows/Lint/badge.svg
[ghl_s_adx_compile]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Compile+branch:master
[ghi_s_adx_compile]: https://github.com/EA31337/Strategy-ADX/workflows/Compile/badge.svg
[ghl_s_adx_bt]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Backtest+branch:master
[ghi_s_adx_bt]: https://github.com/EA31337/Strategy-ADX/workflows/Backtest/badge.svg

[ghl_s_atr_check]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Check+branch:master
[ghi_s_atr_check]: https://github.com/EA31337/Strategy-ATR/workflows/Check/badge.svg
[ghl_s_atr_lint]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Lint+branch:master
[ghi_s_atr_lint]: https://github.com/EA31337/Strategy-ATR/workflows/Lint/badge.svg
[ghl_s_atr_compile]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Compile+branch:master
[ghi_s_atr_compile]: https://github.com/EA31337/Strategy-ATR/workflows/Compile/badge.svg
[ghl_s_atr_bt]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Backtest+branch:master
[ghi_s_atr_bt]: https://github.com/EA31337/Strategy-ATR/workflows/Backtest/badge.svg

[ghl_s_alli_check]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Check+branch:master
[ghi_s_alli_check]: https://github.com/EA31337/Strategy-Alligator/workflows/Check/badge.svg
[ghl_s_alli_lint]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Lint+branch:master
[ghi_s_alli_lint]: https://github.com/EA31337/Strategy-Alligator/workflows/Lint/badge.svg
[ghl_s_alli_compile]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Compile+branch:master
[ghi_s_alli_compile]: https://github.com/EA31337/Strategy-Alligator/workflows/Compile/badge.svg
[ghl_s_alli_bt]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Backtest+branch:master
[ghi_s_alli_bt]: https://github.com/EA31337/Strategy-Alligator/workflows/Backtest/badge.svg

[ghl_s_ao_check]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Check+branch:master
[ghi_s_ao_check]: https://github.com/EA31337/Strategy-Awesome/workflows/Check/badge.svg
[ghl_s_ao_lint]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Lint+branch:master
[ghi_s_ao_lint]: https://github.com/EA31337/Strategy-Awesome/workflows/Lint/badge.svg
[ghl_s_ao_compile]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Compile+branch:master
[ghi_s_ao_compile]: https://github.com/EA31337/Strategy-Awesome/workflows/Compile/badge.svg
[ghl_s_ao_bt]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Backtest+branch:master
[ghi_s_ao_bt]: https://github.com/EA31337/Strategy-Awesome/workflows/Backtest/badge.svg

[ghl_s_bwmfi_check]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Check+branch:master
[ghi_s_bwmfi_check]: https://github.com/EA31337/Strategy-BWMFI/workflows/Check/badge.svg
[ghl_s_bwmfi_lint]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Lint+branch:master
[ghi_s_bwmfi_lint]: https://github.com/EA31337/Strategy-BWMFI/workflows/Lint/badge.svg
[ghl_s_bwmfi_compile]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Compile+branch:master
[ghi_s_bwmfi_compile]: https://github.com/EA31337/Strategy-BWMFI/workflows/Compile/badge.svg
[ghl_s_bwmfi_bt]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Backtest+branch:master
[ghi_s_bwmfi_bt]: https://github.com/EA31337/Strategy-BWMFI/workflows/Backtest/badge.svg

[ghl_s_bands_check]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Check+branch:master
[ghi_s_bands_check]: https://github.com/EA31337/Strategy-Bands/workflows/Check/badge.svg
[ghl_s_bands_lint]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Lint+branch:master
[ghi_s_bands_lint]: https://github.com/EA31337/Strategy-Bands/workflows/Lint/badge.svg
[ghl_s_bands_compile]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Compile+branch:master
[ghi_s_bands_compile]: https://github.com/EA31337/Strategy-Bands/workflows/Compile/badge.svg
[ghl_s_bands_bt]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Backtest+branch:master
[ghi_s_bands_bt]: https://github.com/EA31337/Strategy-Bands/workflows/Backtest/badge.svg

[ghl_s_bears_check]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Check+branch:master
[ghi_s_bears_check]: https://github.com/EA31337/Strategy-BearsPower/workflows/Check/badge.svg
[ghl_s_bears_lint]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Lint+branch:master
[ghi_s_bears_lint]: https://github.com/EA31337/Strategy-BearsPower/workflows/Lint/badge.svg
[ghl_s_bears_compile]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Compile+branch:master
[ghi_s_bears_compile]: https://github.com/EA31337/Strategy-BearsPower/workflows/Compile/badge.svg
[ghl_s_bears_bt]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Backtest+branch:master
[ghi_s_bears_bt]: https://github.com/EA31337/Strategy-BearsPower/workflows/Backtest/badge.svg

[ghl_s_bulls_check]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Check+branch:master
[ghi_s_bulls_check]: https://github.com/EA31337/Strategy-BullsPower/workflows/Check/badge.svg
[ghl_s_bulls_lint]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Lint+branch:master
[ghi_s_bulls_lint]: https://github.com/EA31337/Strategy-BullsPower/workflows/Lint/badge.svg
[ghl_s_bulls_compile]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Compile+branch:master
[ghi_s_bulls_compile]: https://github.com/EA31337/Strategy-BullsPower/workflows/Compile/badge.svg
[ghl_s_bulls_bt]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Backtest+branch:master
[ghi_s_bulls_bt]: https://github.com/EA31337/Strategy-BullsPower/workflows/Backtest/badge.svg

[ghl_s_cci_check]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Check+branch:master
[ghi_s_cci_check]: https://github.com/EA31337/Strategy-CCI/workflows/Check/badge.svg
[ghl_s_cci_lint]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Lint+branch:master
[ghi_s_cci_lint]: https://github.com/EA31337/Strategy-CCI/workflows/Lint/badge.svg
[ghl_s_cci_compile]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Compile+branch:master
[ghi_s_cci_compile]: https://github.com/EA31337/Strategy-CCI/workflows/Compile/badge.svg
[ghl_s_cci_bt]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Backtest+branch:master
[ghi_s_cci_bt]: https://github.com/EA31337/Strategy-CCI/workflows/Backtest/badge.svg

[ghl_s_dm_check]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Check+branch:master
[ghi_s_dm_check]: https://github.com/EA31337/Strategy-DeMarker/workflows/Check/badge.svg
[ghl_s_dm_lint]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Lint+branch:master
[ghi_s_dm_lint]: https://github.com/EA31337/Strategy-DeMarker/workflows/Lint/badge.svg
[ghl_s_dm_compile]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Compile+branch:master
[ghi_s_dm_compile]: https://github.com/EA31337/Strategy-DeMarker/workflows/Compile/badge.svg
[ghl_s_dm_bt]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Backtest+branch:master
[ghi_s_dm_bt]: https://github.com/EA31337/Strategy-DeMarker/workflows/Backtest/badge.svg

[ghl_s_elliott_check]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Check+branch:master
[ghi_s_elliott_check]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Check/badge.svg
[ghl_s_elliott_lint]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Lint+branch:master
[ghi_s_elliott_lint]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Lint/badge.svg
[ghl_s_elliott_compile]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Compile+branch:master
[ghi_s_elliott_compile]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Compile/badge.svg
[ghl_s_elliott_bt]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Backtest+branch:master
[ghi_s_elliott_bt]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Backtest/badge.svg

[ghl_s_env_check]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Check+branch:master
[ghi_s_env_check]: https://github.com/EA31337/Strategy-Envelopes/workflows/Check/badge.svg
[ghl_s_env_lint]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Lint+branch:master
[ghi_s_env_lint]: https://github.com/EA31337/Strategy-Envelopes/workflows/Lint/badge.svg
[ghl_s_env_compile]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Compile+branch:master
[ghi_s_env_compile]: https://github.com/EA31337/Strategy-Envelopes/workflows/Compile/badge.svg
[ghl_s_env_bt]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Backtest+branch:master
[ghi_s_env_bt]: https://github.com/EA31337/Strategy-Envelopes/workflows/Backtest/badge.svg

[ghl_s_force_check]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Check+branch:master
[ghi_s_force_check]: https://github.com/EA31337/Strategy-Force/workflows/Check/badge.svg
[ghl_s_force_lint]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Lint+branch:master
[ghi_s_force_lint]: https://github.com/EA31337/Strategy-Force/workflows/Lint/badge.svg
[ghl_s_force_compile]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Compile+branch:master
[ghi_s_force_compile]: https://github.com/EA31337/Strategy-Force/workflows/Compile/badge.svg
[ghl_s_force_bt]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Backtest+branch:master
[ghi_s_force_bt]: https://github.com/EA31337/Strategy-Force/workflows/Backtest/badge.svg

[ghl_s_fractals_check]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Check+branch:master
[ghi_s_fractals_check]: https://github.com/EA31337/Strategy-Fractals/workflows/Check/badge.svg
[ghl_s_fractals_lint]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Lint+branch:master
[ghi_s_fractals_lint]: https://github.com/EA31337/Strategy-Fractals/workflows/Lint/badge.svg
[ghl_s_fractals_compile]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Compile+branch:master
[ghi_s_fractals_compile]: https://github.com/EA31337/Strategy-Fractals/workflows/Compile/badge.svg
[ghl_s_fractals_bt]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Backtest+branch:master
[ghi_s_fractals_bt]: https://github.com/EA31337/Strategy-Fractals/workflows/Backtest/badge.svg

[ghl_s_gator_check]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Check+branch:master
[ghi_s_gator_check]: https://github.com/EA31337/Strategy-Gator/workflows/Check/badge.svg
[ghl_s_gator_lint]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Lint+branch:master
[ghi_s_gator_lint]: https://github.com/EA31337/Strategy-Gator/workflows/Lint/badge.svg
[ghl_s_gator_compile]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Compile+branch:master
[ghi_s_gator_compile]: https://github.com/EA31337/Strategy-Gator/workflows/Compile/badge.svg
[ghl_s_gator_bt]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Backtest+branch:master
[ghi_s_gator_bt]: https://github.com/EA31337/Strategy-Gator/workflows/Backtest/badge.svg

[ghl_s_ha_check]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Check+branch:master
[ghi_s_ha_check]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Check/badge.svg
[ghl_s_ha_lint]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Lint+branch:master
[ghi_s_ha_lint]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Lint/badge.svg
[ghl_s_ha_compile]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Compile+branch:master
[ghi_s_ha_compile]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Compile/badge.svg
[ghl_s_ha_bt]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Backtest+branch:master
[ghi_s_ha_bt]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Backtest/badge.svg

[ghl_s_ichi_check]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Check+branch:master
[ghi_s_ichi_check]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Check/badge.svg
[ghl_s_ichi_lint]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Lint+branch:master
[ghi_s_ichi_lint]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Lint/badge.svg
[ghl_s_ichi_compile]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Compile+branch:master
[ghi_s_ichi_compile]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Compile/badge.svg
[ghl_s_ichi_bt]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Backtest+branch:master
[ghi_s_ichi_bt]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Backtest/badge.svg

[ghl_s_ma_check]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Check+branch:master
[ghi_s_ma_check]: https://github.com/EA31337/Strategy-MA/workflows/Check/badge.svg
[ghl_s_ma_lint]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Lint+branch:master
[ghi_s_ma_lint]: https://github.com/EA31337/Strategy-MA/workflows/Lint/badge.svg
[ghl_s_ma_compile]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Compile+branch:master
[ghi_s_ma_compile]: https://github.com/EA31337/Strategy-MA/workflows/Compile/badge.svg
[ghl_s_ma_bt]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Backtest+branch:master
[ghi_s_ma_bt]: https://github.com/EA31337/Strategy-MA/workflows/Backtest/badge.svg

[ghl_s_macd_check]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Check+branch:master
[ghi_s_macd_check]: https://github.com/EA31337/Strategy-MACD/workflows/Check/badge.svg
[ghl_s_macd_lint]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Lint+branch:master
[ghi_s_macd_lint]: https://github.com/EA31337/Strategy-MACD/workflows/Lint/badge.svg
[ghl_s_macd_compile]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Compile+branch:master
[ghi_s_macd_compile]: https://github.com/EA31337/Strategy-MACD/workflows/Compile/badge.svg
[ghl_s_macd_bt]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Backtest+branch:master
[ghi_s_macd_bt]: https://github.com/EA31337/Strategy-MACD/workflows/Backtest/badge.svg

[ghl_s_mfi_check]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Check+branch:master
[ghi_s_mfi_check]: https://github.com/EA31337/Strategy-MFI/workflows/Check/badge.svg
[ghl_s_mfi_lint]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Lint+branch:master
[ghi_s_mfi_lint]: https://github.com/EA31337/Strategy-MFI/workflows/Lint/badge.svg
[ghl_s_mfi_compile]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Compile+branch:master
[ghi_s_mfi_compile]: https://github.com/EA31337/Strategy-MFI/workflows/Compile/badge.svg
[ghl_s_mfi_bt]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Backtest+branch:master
[ghi_s_mfi_bt]: https://github.com/EA31337/Strategy-MFI/workflows/Backtest/badge.svg

[ghl_s_mom_check]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Check+branch:master
[ghi_s_mom_check]: https://github.com/EA31337/Strategy-Momentum/workflows/Check/badge.svg
[ghl_s_mom_lint]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Lint+branch:master
[ghi_s_mom_lint]: https://github.com/EA31337/Strategy-Momentum/workflows/Lint/badge.svg
[ghl_s_mom_compile]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Compile+branch:master
[ghi_s_mom_compile]: https://github.com/EA31337/Strategy-Momentum/workflows/Compile/badge.svg
[ghl_s_mom_bt]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Backtest+branch:master
[ghi_s_mom_bt]: https://github.com/EA31337/Strategy-Momentum/workflows/Backtest/badge.svg

[ghl_s_obv_check]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Check+branch:master
[ghi_s_obv_check]: https://github.com/EA31337/Strategy-OBV/workflows/Check/badge.svg
[ghl_s_obv_lint]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Lint+branch:master
[ghi_s_obv_lint]: https://github.com/EA31337/Strategy-OBV/workflows/Lint/badge.svg
[ghl_s_obv_compile]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Compile+branch:master
[ghi_s_obv_compile]: https://github.com/EA31337/Strategy-OBV/workflows/Compile/badge.svg
[ghl_s_obv_bt]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Backtest+branch:master
[ghi_s_obv_bt]: https://github.com/EA31337/Strategy-OBV/workflows/Backtest/badge.svg

[ghl_s_osma_check]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Check+branch:master
[ghi_s_osma_check]: https://github.com/EA31337/Strategy-OsMA/workflows/Check/badge.svg
[ghl_s_osma_lint]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Lint+branch:master
[ghi_s_osma_lint]: https://github.com/EA31337/Strategy-OsMA/workflows/Lint/badge.svg
[ghl_s_osma_compile]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Compile+branch:master
[ghi_s_osma_compile]: https://github.com/EA31337/Strategy-OsMA/workflows/Compile/badge.svg
[ghl_s_osma_bt]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Backtest+branch:master
[ghi_s_osma_bt]: https://github.com/EA31337/Strategy-OsMA/workflows/Backtest/badge.svg

[ghl_s_rsi_check]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Check+branch:master
[ghi_s_rsi_check]: https://github.com/EA31337/Strategy-RSI/workflows/Check/badge.svg
[ghl_s_rsi_lint]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Lint+branch:master
[ghi_s_rsi_lint]: https://github.com/EA31337/Strategy-RSI/workflows/Lint/badge.svg
[ghl_s_rsi_compile]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Compile+branch:master
[ghi_s_rsi_compile]: https://github.com/EA31337/Strategy-RSI/workflows/Compile/badge.svg
[ghl_s_rsi_bt]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Backtest+branch:master
[ghi_s_rsi_bt]: https://github.com/EA31337/Strategy-RSI/workflows/Backtest/badge.svg

[ghl_s_rvi_check]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Check+branch:master
[ghi_s_rvi_check]: https://github.com/EA31337/Strategy-RVI/workflows/Check/badge.svg
[ghl_s_rvi_lint]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Lint+branch:master
[ghi_s_rvi_lint]: https://github.com/EA31337/Strategy-RVI/workflows/Lint/badge.svg
[ghl_s_rvi_compile]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Compile+branch:master
[ghi_s_rvi_compile]: https://github.com/EA31337/Strategy-RVI/workflows/Compile/badge.svg
[ghl_s_rvi_bt]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Backtest+branch:master
[ghi_s_rvi_bt]: https://github.com/EA31337/Strategy-RVI/workflows/Backtest/badge.svg

[ghl_s_sar_check]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Check+branch:master
[ghi_s_sar_check]: https://github.com/EA31337/Strategy-SAR/workflows/Check/badge.svg
[ghl_s_sar_lint]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Lint+branch:master
[ghi_s_sar_lint]: https://github.com/EA31337/Strategy-SAR/workflows/Lint/badge.svg
[ghl_s_sar_compile]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Compile+branch:master
[ghi_s_sar_compile]: https://github.com/EA31337/Strategy-SAR/workflows/Compile/badge.svg
[ghl_s_sar_bt]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Backtest+branch:master
[ghi_s_sar_bt]: https://github.com/EA31337/Strategy-SAR/workflows/Backtest/badge.svg

[ghl_s_svebb_check]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Check+branch:master
[ghi_s_svebb_check]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Check/badge.svg
[ghl_s_svebb_lint]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Lint+branch:master
[ghi_s_svebb_lint]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Lint/badge.svg
[ghl_s_svebb_compile]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Compile+branch:master
[ghi_s_svebb_compile]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Compile/badge.svg
[ghl_s_svebb_bt]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Backtest+branch:master
[ghi_s_svebb_bt]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Backtest/badge.svg

[ghl_s_stddev_check]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Check+branch:master
[ghi_s_stddev_check]: https://github.com/EA31337/Strategy-StdDev/workflows/Check/badge.svg
[ghl_s_stddev_lint]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Lint+branch:master
[ghi_s_stddev_lint]: https://github.com/EA31337/Strategy-StdDev/workflows/Lint/badge.svg
[ghl_s_stddev_compile]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Compile+branch:master
[ghi_s_stddev_compile]: https://github.com/EA31337/Strategy-StdDev/workflows/Compile/badge.svg
[ghl_s_stddev_bt]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Backtest+branch:master
[ghi_s_stddev_bt]: https://github.com/EA31337/Strategy-StdDev/workflows/Backtest/badge.svg

[ghl_s_stoch_check]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Check+branch:master
[ghi_s_stoch_check]: https://github.com/EA31337/Strategy-Stochastic/workflows/Check/badge.svg
[ghl_s_stoch_lint]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Lint+branch:master
[ghi_s_stoch_lint]: https://github.com/EA31337/Strategy-Stochastic/workflows/Lint/badge.svg
[ghl_s_stoch_compile]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Compile+branch:master
[ghi_s_stoch_compile]: https://github.com/EA31337/Strategy-Stochastic/workflows/Compile/badge.svg
[ghl_s_stoch_bt]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Backtest+branch:master
[ghi_s_stoch_bt]: https://github.com/EA31337/Strategy-Stochastic/workflows/Backtest/badge.svg

[ghl_s_tmabsvet_check]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Check+branch:master
[ghi_s_tmabsvet_check]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Check/badge.svg
[ghl_s_tmabsvet_lint]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Lint+branch:master
[ghi_s_tmabsvet_lint]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Lint/badge.svg
[ghl_s_tmabsvet_compile]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Compile+branch:master
[ghi_s_tmabsvet_compile]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Compile/badge.svg
[ghl_s_tmabsvet_bt]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Backtest+branch:master
[ghi_s_tmabsvet_bt]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Backtest/badge.svg

[ghl_s_tmatrue_check]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Check+branch:master
[ghi_s_tmatrue_check]: https://github.com/EA31337/Strategy-TMA_True/workflows/Check/badge.svg
[ghl_s_tmatrue_lint]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Lint+branch:master
[ghi_s_tmatrue_lint]: https://github.com/EA31337/Strategy-TMA_True/workflows/Lint/badge.svg
[ghl_s_tmatrue_compile]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Compile+branch:master
[ghi_s_tmatrue_compile]: https://github.com/EA31337/Strategy-TMA_True/workflows/Compile/badge.svg
[ghl_s_tmatrue_bt]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Backtest+branch:master
[ghi_s_tmatrue_bt]: https://github.com/EA31337/Strategy-TMA_True/workflows/Backtest/badge.svg

[ghl_s_wpr_check]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Check+branch:master
[ghi_s_wpr_check]: https://github.com/EA31337/Strategy-WPR/workflows/Check/badge.svg
[ghl_s_wpr_lint]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Lint+branch:master
[ghi_s_wpr_lint]: https://github.com/EA31337/Strategy-WPR/workflows/Lint/badge.svg
[ghl_s_wpr_compile]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Compile+branch:master
[ghi_s_wpr_compile]: https://github.com/EA31337/Strategy-WPR/workflows/Compile/badge.svg
[ghl_s_wpr_bt]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Backtest+branch:master
[ghi_s_wpr_bt]: https://github.com/EA31337/Strategy-WPR/workflows/Backtest/badge.svg

[ghl_s_zigzag_check]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Check+branch:master
[ghi_s_zigzag_check]: https://github.com/EA31337/Strategy-ZigZag/workflows/Check/badge.svg
[ghl_s_zigzag_lint]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Lint+branch:master
[ghi_s_zigzag_lint]: https://github.com/EA31337/Strategy-ZigZag/workflows/Lint/badge.svg
[ghl_s_zigzag_compile]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Compile+branch:master
[ghi_s_zigzag_compile]: https://github.com/EA31337/Strategy-ZigZag/workflows/Compile/badge.svg
[ghl_s_zigzag_bt]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Backtest+branch:master
[ghi_s_zigzag_bt]: https://github.com/EA31337/Strategy-ZigZag/workflows/Backtest/badge.svg

[ghl_s_esawa_check]: https://github.com/EA31337/Strategy-eSAWA/actions?query=workflow:Check+branch:master
[ghi_s_esawa_check]: https://github.com/EA31337/Strategy-eSAWA/workflows/Check/badge.svg
[ghl_s_esawa_lint]: https://github.com/EA31337/Strategy-eSAWA/actions?query=workflow:Lint+branch:master
[ghi_s_esawa_lint]: https://github.com/EA31337/Strategy-eSAWA/workflows/Lint/badge.svg
[ghl_s_esawa_compile]: https://github.com/EA31337/Strategy-eSAWA/actions?query=workflow:Compile+branch:master
[ghi_s_esawa_compile]: https://github.com/EA31337/Strategy-eSAWA/workflows/Compile/badge.svg
[ghl_s_esawa_bt]: https://github.com/EA31337/Strategy-eSAWA/actions?query=workflow:Backtest+branch:master
[ghi_s_esawa_bt]: https://github.com/EA31337/Strategy-eSAWA/workflows/Backtest/badge.svg
