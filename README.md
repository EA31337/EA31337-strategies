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

### Stable

| Strategy | Check | Lint | Compile | Backtest |
| --------:|:-----:|:----:|:-------:|:--------:|
| AC | [![check][ghim_s_ac_check]][ghlm_s_ac_check] | [![check][ghim_s_ac_lint]][ghlm_s_ac_lint] | [![check][ghim_s_ac_compile]][ghlm_s_ac_compile] | [![check][ghim_s_ac_bt]][ghlm_s_ac_bt] |
| AD | [![check][ghim_s_ad_check]][ghlm_s_ad_check] | [![check][ghim_s_ad_lint]][ghlm_s_ad_lint] | [![check][ghim_s_ad_compile]][ghlm_s_ad_compile] | [![check][ghim_s_ad_bt]][ghlm_s_ad_bt] |
| ADX | [![check][ghim_s_adx_check]][ghlm_s_adx_check] | [![check][ghim_s_adx_lint]][ghlm_s_adx_lint] | [![check][ghim_s_adx_compile]][ghlm_s_adx_compile] | [![check][ghim_s_adx_bt]][ghlm_s_adx_bt] |
| ATR | [![check][ghim_s_atr_check]][ghlm_s_atr_check] | [![check][ghim_s_atr_lint]][ghlm_s_atr_lint] | [![check][ghim_s_atr_compile]][ghlm_s_atr_compile] | [![check][ghim_s_atr_bt]][ghlm_s_atr_bt] |
| Alligator | [![check][ghim_s_alli_check]][ghlm_s_alli_check] | [![check][ghim_s_alli_lint]][ghlm_s_alli_lint] | [![check][ghim_s_alli_compile]][ghlm_s_alli_compile] | [![check][ghim_s_alli_bt]][ghlm_s_alli_bt] |
| Awesome | [![check][ghim_s_ao_check]][ghlm_s_ao_check] | [![check][ghim_s_ao_lint]][ghlm_s_ao_lint] | [![check][ghim_s_ao_compile]][ghlm_s_ao_compile] | [![check][ghim_s_ao_bt]][ghlm_s_ao_bt] |
| BWMFI | [![check][ghim_s_bwmfi_check]][ghlm_s_bwmfi_check] | [![check][ghim_s_bwmfi_lint]][ghlm_s_bwmfi_lint] | [![check][ghim_s_bwmfi_compile]][ghlm_s_bwmfi_compile] | [![check][ghim_s_bwmfi_bt]][ghlm_s_bwmfi_bt] |
| Bands | [![check][ghim_s_bands_check]][ghlm_s_bands_check] | [![check][ghim_s_bands_lint]][ghlm_s_bands_lint] | [![check][ghim_s_bands_compile]][ghlm_s_bands_compile] | [![check][ghim_s_bands_bt]][ghlm_s_bands_bt] |
| BearsPower | [![check][ghim_s_bears_check]][ghlm_s_bears_check] | [![check][ghim_s_bears_lint]][ghlm_s_bears_lint] | [![check][ghim_s_bears_compile]][ghlm_s_bears_compile] | [![check][ghim_s_bears_bt]][ghlm_s_bears_bt] |
| BullsPower | [![check][ghim_s_bulls_check]][ghlm_s_bulls_check] | [![check][ghim_s_bulls_lint]][ghlm_s_bulls_lint] | [![check][ghim_s_bulls_compile]][ghlm_s_bulls_compile] | [![check][ghim_s_bulls_bt]][ghlm_s_bulls_bt] |
| CCI | [![check][ghim_s_cci_check]][ghlm_s_cci_check] | [![check][ghim_s_cci_lint]][ghlm_s_cci_lint] | [![check][ghim_s_cci_compile]][ghlm_s_cci_compile] | [![check][ghim_s_cci_bt]][ghlm_s_cci_bt] |
| DEMA | [![check][ghim_s_dema_check]][ghlm_s_dema_check] | [![check][ghim_s_dema_lint]][ghlm_s_dema_lint] | [![check][ghim_s_dema_compile]][ghlm_s_dema_compile] | [![check][ghim_s_dema_bt]][ghlm_s_dema_bt] |
| DeMarker | [![check][ghim_s_dm_check]][ghlm_s_dm_check] | [![check][ghim_s_dm_lint]][ghlm_s_dm_lint] | [![check][ghim_s_dm_compile]][ghlm_s_dm_compile] | [![check][ghim_s_dm_bt]][ghlm_s_dm_bt] |
| ElliottWave | [![check][ghim_s_elliott_check]][ghlm_s_elliott_check] | [![check][ghim_s_elliott_lint]][ghlm_s_elliott_lint] | [![check][ghim_s_elliott_compile]][ghlm_s_elliott_compile] | [![check][ghim_s_elliott_bt]][ghlm_s_elliott_bt] |
| Envelopes | [![check][ghim_s_env_check]][ghlm_s_env_check] | [![check][ghim_s_env_lint]][ghlm_s_env_lint] | [![check][ghim_s_env_compile]][ghlm_s_env_compile] | [![check][ghim_s_env_bt]][ghlm_s_env_bt] |
| Force | [![check][ghim_s_force_check]][ghlm_s_force_check] | [![check][ghim_s_force_lint]][ghlm_s_force_lint] | [![check][ghim_s_force_compile]][ghlm_s_force_compile] | [![check][ghim_s_force_bt]][ghlm_s_force_bt] |
| Fractals | [![check][ghim_s_fractals_check]][ghlm_s_fractals_check] | [![check][ghim_s_fractals_lint]][ghlm_s_fractals_lint] | [![check][ghim_s_fractals_compile]][ghlm_s_fractals_compile] | [![check][ghim_s_fractals_bt]][ghlm_s_fractals_bt] |
| Gator | [![check][ghim_s_gator_check]][ghlm_s_gator_check] | [![check][ghim_s_gator_lint]][ghlm_s_gator_lint] | [![check][ghim_s_gator_compile]][ghlm_s_gator_compile] | [![check][ghim_s_gator_bt]][ghlm_s_gator_bt] |
| HeikenAshi | [![check][ghim_s_ha_check]][ghlm_s_ha_check] | [![check][ghim_s_ha_lint]][ghlm_s_ha_lint] | [![check][ghim_s_ha_compile]][ghlm_s_ha_compile] | [![check][ghim_s_ha_bt]][ghlm_s_ha_bt] |
| Ichimoku | [![check][ghim_s_ichi_check]][ghlm_s_ichi_check] | [![check][ghim_s_ichi_lint]][ghlm_s_ichi_lint] | [![check][ghim_s_ichi_compile]][ghlm_s_ichi_compile] | [![check][ghim_s_ichi_bt]][ghlm_s_ichi_bt] |
| MA | [![check][ghim_s_ma_check]][ghlm_s_ma_check] | [![check][ghim_s_ma_lint]][ghlm_s_ma_lint] | [![check][ghim_s_ma_compile]][ghlm_s_ma_compile] | [![check][ghim_s_ma_bt]][ghlm_s_ma_bt] |
| MACD | [![check][ghim_s_macd_check]][ghlm_s_macd_check] | [![check][ghim_s_macd_lint]][ghlm_s_macd_lint] | [![check][ghim_s_macd_compile]][ghlm_s_macd_compile] | [![check][ghim_s_macd_bt]][ghlm_s_macd_bt] |
| MFI | [![check][ghim_s_mfi_check]][ghlm_s_mfi_check] | [![check][ghim_s_mfi_lint]][ghlm_s_mfi_lint] | [![check][ghim_s_mfi_compile]][ghlm_s_mfi_compile] | [![check][ghim_s_mfi_bt]][ghlm_s_mfi_bt] |
| Momentum | [![check][ghim_s_mom_check]][ghlm_s_mom_check] | [![check][ghim_s_mom_lint]][ghlm_s_mom_lint] | [![check][ghim_s_mom_compile]][ghlm_s_mom_compile] | [![check][ghim_s_mom_bt]][ghlm_s_mom_bt] |
| OBV | [![check][ghim_s_obv_check]][ghlm_s_obv_check] | [![check][ghim_s_obv_lint]][ghlm_s_obv_lint] | [![check][ghim_s_obv_compile]][ghlm_s_obv_compile] | [![check][ghim_s_obv_bt]][ghlm_s_obv_bt] |
| OsMA | [![check][ghim_s_osma_check]][ghlm_s_osma_check] | [![check][ghim_s_osma_lint]][ghlm_s_osma_lint] | [![check][ghim_s_osma_compile]][ghlm_s_osma_compile] | [![check][ghim_s_osma_bt]][ghlm_s_osma_bt] |
| RSI | [![check][ghim_s_rsi_check]][ghlm_s_rsi_check] | [![check][ghim_s_rsi_lint]][ghlm_s_rsi_lint] | [![check][ghim_s_rsi_compile]][ghlm_s_rsi_compile] | [![check][ghim_s_rsi_bt]][ghlm_s_rsi_bt] |
| RVI | [![check][ghim_s_rvi_check]][ghlm_s_rvi_check] | [![check][ghim_s_rvi_lint]][ghlm_s_rvi_lint] | [![check][ghim_s_rvi_compile]][ghlm_s_rvi_compile] | [![check][ghim_s_rvi_bt]][ghlm_s_rvi_bt] |
| SAR | [![check][ghim_s_sar_check]][ghlm_s_sar_check] | [![check][ghim_s_sar_lint]][ghlm_s_sar_lint] | [![check][ghim_s_sar_compile]][ghlm_s_sar_compile] | [![check][ghim_s_sar_bt]][ghlm_s_sar_bt] |
| SAWA | [![check][ghim_s_sawa_check]][ghlm_s_sawa_check] | [![check][ghim_s_sawa_lint]][ghlm_s_sawa_lint] | [![check][ghim_s_sawa_compile]][ghlm_s_sawa_compile] | [![check][ghim_s_sawa_bt]][ghlm_s_sawa_bt] |
| SVE BB | [![check][ghim_s_svebb_check]][ghlm_s_svebb_check] | [![check][ghim_s_svebb_lint]][ghlm_s_svebb_lint] | [![check][ghim_s_svebb_compile]][ghlm_s_svebb_compile] | [![check][ghim_s_svebb_bt]][ghlm_s_svebb_bt] |
| StdDev | [![check][ghim_s_stddev_check]][ghlm_s_stddev_check] | [![check][ghim_s_stddev_lint]][ghlm_s_stddev_lint] | [![check][ghim_s_stddev_compile]][ghlm_s_stddev_compile] | [![check][ghim_s_stddev_bt]][ghlm_s_stddev_bt] |
| Stochastic | [![check][ghim_s_stoch_check]][ghlm_s_stoch_check] | [![check][ghim_s_stoch_lint]][ghlm_s_stoch_lint] | [![check][ghim_s_stoch_compile]][ghlm_s_stoch_compile] | [![check][ghim_s_stoch_bt]][ghlm_s_stoch_bt] |
| TMA Band SVE True | [![check][ghim_s_tmabsvet_check]][ghlm_s_tmabsvet_check] | [![check][ghim_s_tmabsvet_lint]][ghlm_s_tmabsvet_lint] | [![check][ghim_s_tmabsvet_compile]][ghlm_s_tmabsvet_compile] | [![check][ghim_s_tmabsvet_bt]][ghlm_s_tmabsvet_bt] |
| TMA True | [![check][ghim_s_tmatrue_check]][ghlm_s_tmatrue_check] | [![check][ghim_s_tmatrue_lint]][ghlm_s_tmatrue_lint] | [![check][ghim_s_tmatrue_compile]][ghlm_s_tmatrue_compile] | [![check][ghim_s_tmatrue_bt]][ghlm_s_tmatrue_bt] |
| WPR | [![check][ghim_s_wpr_check]][ghlm_s_wpr_check] | [![check][ghim_s_wpr_lint]][ghlm_s_wpr_lint] | [![check][ghim_s_wpr_compile]][ghlm_s_wpr_compile] | [![check][ghim_s_wpr_bt]][ghlm_s_wpr_bt] |
| ZigZag | [![check][ghim_s_zigzag_check]][ghlm_s_zigzag_check] | [![check][ghim_s_zigzag_lint]][ghlm_s_zigzag_lint] | [![check][ghim_s_zigzag_compile]][ghlm_s_zigzag_compile] | [![check][ghim_s_zigzag_bt]][ghlm_s_zigzag_bt] |

### Development

| Strategy | Check | Lint | Compile | Backtest |
| --------:|:-----:|:----:|:-------:|:--------:|
| AC | [![check][ghid_s_ac_check]][ghld_s_ac_check] | [![check][ghid_s_ac_lint]][ghld_s_ac_lint] | [![check][ghid_s_ac_compile]][ghld_s_ac_compile] | [![check][ghid_s_ac_bt]][ghld_s_ac_bt] |
| AD | [![check][ghid_s_ad_check]][ghld_s_ad_check] | [![check][ghid_s_ad_lint]][ghld_s_ad_lint] | [![check][ghid_s_ad_compile]][ghld_s_ad_compile] | [![check][ghid_s_ad_bt]][ghld_s_ad_bt] |
| ADX | [![check][ghid_s_adx_check]][ghld_s_adx_check] | [![check][ghid_s_adx_lint]][ghld_s_adx_lint] | [![check][ghid_s_adx_compile]][ghld_s_adx_compile] | [![check][ghid_s_adx_bt]][ghld_s_adx_bt] |
| ATR | [![check][ghid_s_atr_check]][ghld_s_atr_check] | [![check][ghid_s_atr_lint]][ghld_s_atr_lint] | [![check][ghid_s_atr_compile]][ghld_s_atr_compile] | [![check][ghid_s_atr_bt]][ghld_s_atr_bt] |
| Alligator | [![check][ghid_s_alli_check]][ghld_s_alli_check] | [![check][ghid_s_alli_lint]][ghld_s_alli_lint] | [![check][ghid_s_alli_compile]][ghld_s_alli_compile] | [![check][ghid_s_alli_bt]][ghld_s_alli_bt] |
| Awesome | [![check][ghid_s_ao_check]][ghld_s_ao_check] | [![check][ghid_s_ao_lint]][ghld_s_ao_lint] | [![check][ghid_s_ao_compile]][ghld_s_ao_compile] | [![check][ghid_s_ao_bt]][ghld_s_ao_bt] |
| BWMFI | [![check][ghid_s_bwmfi_check]][ghld_s_bwmfi_check] | [![check][ghid_s_bwmfi_lint]][ghld_s_bwmfi_lint] | [![check][ghid_s_bwmfi_compile]][ghld_s_bwmfi_compile] | [![check][ghid_s_bwmfi_bt]][ghld_s_bwmfi_bt] |
| Bands | [![check][ghid_s_bands_check]][ghld_s_bands_check] | [![check][ghid_s_bands_lint]][ghld_s_bands_lint] | [![check][ghid_s_bands_compile]][ghld_s_bands_compile] | [![check][ghid_s_bands_bt]][ghld_s_bands_bt] |
| BearsPower | [![check][ghid_s_bears_check]][ghld_s_bears_check] | [![check][ghid_s_bears_lint]][ghld_s_bears_lint] | [![check][ghid_s_bears_compile]][ghld_s_bears_compile] | [![check][ghid_s_bears_bt]][ghld_s_bears_bt] |
| BullsPower | [![check][ghid_s_bulls_check]][ghld_s_bulls_check] | [![check][ghid_s_bulls_lint]][ghld_s_bulls_lint] | [![check][ghid_s_bulls_compile]][ghld_s_bulls_compile] | [![check][ghid_s_bulls_bt]][ghld_s_bulls_bt] |
| CCI | [![check][ghid_s_cci_check]][ghld_s_cci_check] | [![check][ghid_s_cci_lint]][ghld_s_cci_lint] | [![check][ghid_s_cci_compile]][ghld_s_cci_compile] | [![check][ghid_s_cci_bt]][ghld_s_cci_bt] |
| DEMA | [![check][ghid_s_dema_check]][ghld_s_dema_check] | [![check][ghid_s_dema_lint]][ghld_s_dema_lint] | [![check][ghid_s_dema_compile]][ghld_s_dema_compile] | [![check][ghid_s_dema_bt]][ghld_s_dema_bt] |
| DeMarker | [![check][ghid_s_dm_check]][ghld_s_dm_check] | [![check][ghid_s_dm_lint]][ghld_s_dm_lint] | [![check][ghid_s_dm_compile]][ghld_s_dm_compile] | [![check][ghid_s_dm_bt]][ghld_s_dm_bt] |
| ElliottWave | [![check][ghid_s_elliott_check]][ghld_s_elliott_check] | [![check][ghid_s_elliott_lint]][ghld_s_elliott_lint] | [![check][ghid_s_elliott_compile]][ghld_s_elliott_compile] | [![check][ghid_s_elliott_bt]][ghld_s_elliott_bt] |
| Envelopes | [![check][ghid_s_env_check]][ghld_s_env_check] | [![check][ghid_s_env_lint]][ghld_s_env_lint] | [![check][ghid_s_env_compile]][ghld_s_env_compile] | [![check][ghid_s_env_bt]][ghld_s_env_bt] |
| Force | [![check][ghid_s_force_check]][ghld_s_force_check] | [![check][ghid_s_force_lint]][ghld_s_force_lint] | [![check][ghid_s_force_compile]][ghld_s_force_compile] | [![check][ghid_s_force_bt]][ghld_s_force_bt] |
| Fractals | [![check][ghid_s_fractals_check]][ghld_s_fractals_check] | [![check][ghid_s_fractals_lint]][ghld_s_fractals_lint] | [![check][ghid_s_fractals_compile]][ghld_s_fractals_compile] | [![check][ghid_s_fractals_bt]][ghld_s_fractals_bt] |
| Gator | [![check][ghid_s_gator_check]][ghld_s_gator_check] | [![check][ghid_s_gator_lint]][ghld_s_gator_lint] | [![check][ghid_s_gator_compile]][ghld_s_gator_compile] | [![check][ghid_s_gator_bt]][ghld_s_gator_bt] |
| HeikenAshi | [![check][ghid_s_ha_check]][ghld_s_ha_check] | [![check][ghid_s_ha_lint]][ghld_s_ha_lint] | [![check][ghid_s_ha_compile]][ghld_s_ha_compile] | [![check][ghid_s_ha_bt]][ghld_s_ha_bt] |
| Ichimoku | [![check][ghid_s_ichi_check]][ghld_s_ichi_check] | [![check][ghid_s_ichi_lint]][ghld_s_ichi_lint] | [![check][ghid_s_ichi_compile]][ghld_s_ichi_compile] | [![check][ghid_s_ichi_bt]][ghld_s_ichi_bt] |
| MA | [![check][ghid_s_ma_check]][ghld_s_ma_check] | [![check][ghid_s_ma_lint]][ghld_s_ma_lint] | [![check][ghid_s_ma_compile]][ghld_s_ma_compile] | [![check][ghid_s_ma_bt]][ghld_s_ma_bt] |
| MACD | [![check][ghid_s_macd_check]][ghld_s_macd_check] | [![check][ghid_s_macd_lint]][ghld_s_macd_lint] | [![check][ghid_s_macd_compile]][ghld_s_macd_compile] | [![check][ghid_s_macd_bt]][ghld_s_macd_bt] |
| MFI | [![check][ghid_s_mfi_check]][ghld_s_mfi_check] | [![check][ghid_s_mfi_lint]][ghld_s_mfi_lint] | [![check][ghid_s_mfi_compile]][ghld_s_mfi_compile] | [![check][ghid_s_mfi_bt]][ghld_s_mfi_bt] |
| Momentum | [![check][ghid_s_mom_check]][ghld_s_mom_check] | [![check][ghid_s_mom_lint]][ghld_s_mom_lint] | [![check][ghid_s_mom_compile]][ghld_s_mom_compile] | [![check][ghid_s_mom_bt]][ghld_s_mom_bt] |
| OBV | [![check][ghid_s_obv_check]][ghld_s_obv_check] | [![check][ghid_s_obv_lint]][ghld_s_obv_lint] | [![check][ghid_s_obv_compile]][ghld_s_obv_compile] | [![check][ghid_s_obv_bt]][ghld_s_obv_bt] |
| OsMA | [![check][ghid_s_osma_check]][ghld_s_osma_check] | [![check][ghid_s_osma_lint]][ghld_s_osma_lint] | [![check][ghid_s_osma_compile]][ghld_s_osma_compile] | [![check][ghid_s_osma_bt]][ghld_s_osma_bt] |
| RSI | [![check][ghid_s_rsi_check]][ghld_s_rsi_check] | [![check][ghid_s_rsi_lint]][ghld_s_rsi_lint] | [![check][ghid_s_rsi_compile]][ghld_s_rsi_compile] | [![check][ghid_s_rsi_bt]][ghld_s_rsi_bt] |
| RVI | [![check][ghid_s_rvi_check]][ghld_s_rvi_check] | [![check][ghid_s_rvi_lint]][ghld_s_rvi_lint] | [![check][ghid_s_rvi_compile]][ghld_s_rvi_compile] | [![check][ghid_s_rvi_bt]][ghld_s_rvi_bt] |
| SAR | [![check][ghid_s_sar_check]][ghld_s_sar_check] | [![check][ghid_s_sar_lint]][ghld_s_sar_lint] | [![check][ghid_s_sar_compile]][ghld_s_sar_compile] | [![check][ghid_s_sar_bt]][ghld_s_sar_bt] |
| SAWA | [![check][ghid_s_sawa_check]][ghld_s_sawa_check] | [![check][ghid_s_sawa_lint]][ghld_s_sawa_lint] | [![check][ghid_s_sawa_compile]][ghld_s_sawa_compile] | [![check][ghid_s_sawa_bt]][ghld_s_sawa_bt] |
| SVE BB | [![check][ghid_s_svebb_check]][ghld_s_svebb_check] | [![check][ghid_s_svebb_lint]][ghld_s_svebb_lint] | [![check][ghid_s_svebb_compile]][ghld_s_svebb_compile] | [![check][ghid_s_svebb_bt]][ghld_s_svebb_bt] |
| StdDev | [![check][ghid_s_stddev_check]][ghld_s_stddev_check] | [![check][ghid_s_stddev_lint]][ghld_s_stddev_lint] | [![check][ghid_s_stddev_compile]][ghld_s_stddev_compile] | [![check][ghid_s_stddev_bt]][ghld_s_stddev_bt] |
| Stochastic | [![check][ghid_s_stoch_check]][ghld_s_stoch_check] | [![check][ghid_s_stoch_lint]][ghld_s_stoch_lint] | [![check][ghid_s_stoch_compile]][ghld_s_stoch_compile] | [![check][ghid_s_stoch_bt]][ghld_s_stoch_bt] |
| TMA Band SVE True | [![check][ghid_s_tmabsvet_check]][ghld_s_tmabsvet_check] | [![check][ghid_s_tmabsvet_lint]][ghld_s_tmabsvet_lint] | [![check][ghid_s_tmabsvet_compile]][ghld_s_tmabsvet_compile] | [![check][ghid_s_tmabsvet_bt]][ghld_s_tmabsvet_bt] |
| TMA True | [![check][ghid_s_tmatrue_check]][ghld_s_tmatrue_check] | [![check][ghid_s_tmatrue_lint]][ghld_s_tmatrue_lint] | [![check][ghid_s_tmatrue_compile]][ghld_s_tmatrue_compile] | [![check][ghid_s_tmatrue_bt]][ghld_s_tmatrue_bt] |
| WPR | [![check][ghid_s_wpr_check]][ghld_s_wpr_check] | [![check][ghid_s_wpr_lint]][ghld_s_wpr_lint] | [![check][ghid_s_wpr_compile]][ghld_s_wpr_compile] | [![check][ghid_s_wpr_bt]][ghld_s_wpr_bt] |
| ZigZag | [![check][ghid_s_zigzag_check]][ghld_s_zigzag_check] | [![check][ghid_s_zigzag_lint]][ghld_s_zigzag_lint] | [![check][ghid_s_zigzag_compile]][ghld_s_zigzag_compile] | [![check][ghid_s_zigzag_bt]][ghld_s_zigzag_bt] |

#### Optimization

| Strategy | Indicator | SignalOpen | SignalClose | Tick |
| --------:|:-----:|:----:|:-------:|:--------:|
| AC | [![indi][ghid_s_ac_indi]][ghld_s_ac_indi] | [![indi][ghid_s_ac_sopen]][ghld_s_ac_sopen] | [![indi][ghid_s_ac_sclose]][ghld_s_ac_sclose] | [![indi][ghid_s_ac_tick]][ghld_s_ac_tick] |
| AD | [![indi][ghid_s_ad_indi]][ghld_s_ad_indi] | [![indi][ghid_s_ad_sopen]][ghld_s_ad_sopen] | [![indi][ghid_s_ad_sclose]][ghld_s_ad_sclose] | [![indi][ghid_s_ad_tick]][ghld_s_ad_tick] |
| ADX | [![indi][ghid_s_adx_indi]][ghld_s_adx_indi] | [![indi][ghid_s_adx_sopen]][ghld_s_adx_sopen] | [![indi][ghid_s_adx_sclose]][ghld_s_adx_sclose] | [![indi][ghid_s_adx_tick]][ghld_s_adx_tick] |
| ATR | [![indi][ghid_s_atr_indi]][ghld_s_atr_indi] | [![indi][ghid_s_atr_sopen]][ghld_s_atr_sopen] | [![indi][ghid_s_atr_sclose]][ghld_s_atr_sclose] | [![indi][ghid_s_atr_tick]][ghld_s_atr_tick] |
| Alligator | [![indi][ghid_s_alli_indi]][ghld_s_alli_indi] | [![indi][ghid_s_alli_sopen]][ghld_s_alli_sopen] | [![indi][ghid_s_alli_sclose]][ghld_s_alli_sclose] | [![indi][ghid_s_alli_tick]][ghld_s_alli_tick] |
| Awesome | [![indi][ghid_s_ao_indi]][ghld_s_ao_indi] | [![indi][ghid_s_ao_sopen]][ghld_s_ao_sopen] | [![indi][ghid_s_ao_sclose]][ghld_s_ao_sclose] | [![indi][ghid_s_ao_tick]][ghld_s_ao_tick] |
| BWMFI | [![indi][ghid_s_bwmfi_indi]][ghld_s_bwmfi_indi] | [![indi][ghid_s_bwmfi_sopen]][ghld_s_bwmfi_sopen] | [![indi][ghid_s_bwmfi_sclose]][ghld_s_bwmfi_sclose] | [![indi][ghid_s_bwmfi_tick]][ghld_s_bwmfi_tick] |
| Bands | [![indi][ghid_s_bands_indi]][ghld_s_bands_indi] | [![indi][ghid_s_bands_sopen]][ghld_s_bands_sopen] | [![indi][ghid_s_bands_sclose]][ghld_s_bands_sclose] | [![indi][ghid_s_bands_tick]][ghld_s_bands_tick] |
| BearsPower | [![indi][ghid_s_bears_indi]][ghld_s_bears_indi] | [![indi][ghid_s_bears_sopen]][ghld_s_bears_sopen] | [![indi][ghid_s_bears_sclose]][ghld_s_bears_sclose] | [![indi][ghid_s_bears_tick]][ghld_s_bears_tick] |
| BullsPower | [![indi][ghid_s_bulls_indi]][ghld_s_bulls_indi] | [![indi][ghid_s_bulls_sopen]][ghld_s_bulls_sopen] | [![indi][ghid_s_bulls_sclose]][ghld_s_bulls_sclose] | [![indi][ghid_s_bulls_tick]][ghld_s_bulls_tick] |
| CCI | [![indi][ghid_s_cci_indi]][ghld_s_cci_indi] | [![indi][ghid_s_cci_sopen]][ghld_s_cci_sopen] | [![indi][ghid_s_cci_sclose]][ghld_s_cci_sclose] | [![indi][ghid_s_cci_tick]][ghld_s_cci_tick] |
| DEMA | [![indi][ghid_s_dema_indi]][ghld_s_dema_indi] | [![indi][ghid_s_dema_sopen]][ghld_s_dema_sopen] | [![indi][ghid_s_dema_sclose]][ghld_s_dema_sclose] | [![indi][ghid_s_dema_tick]][ghld_s_dema_tick] |
| DeMarker | [![indi][ghid_s_dm_indi]][ghld_s_dm_indi] | [![indi][ghid_s_dm_sopen]][ghld_s_dm_sopen] | [![indi][ghid_s_dm_sclose]][ghld_s_dm_sclose] | [![indi][ghid_s_dm_tick]][ghld_s_dm_tick] |
| ElliottWave | [![indi][ghid_s_elliott_indi]][ghld_s_elliott_indi] | [![indi][ghid_s_elliott_sopen]][ghld_s_elliott_sopen] | [![indi][ghid_s_elliott_sclose]][ghld_s_elliott_sclose] | [![indi][ghid_s_elliott_tick]][ghld_s_elliott_tick] |
| Envelopes | [![indi][ghid_s_env_indi]][ghld_s_env_indi] | [![indi][ghid_s_env_sopen]][ghld_s_env_sopen] | [![indi][ghid_s_env_sclose]][ghld_s_env_sclose] | [![indi][ghid_s_env_tick]][ghld_s_env_tick] |
| Force | [![indi][ghid_s_force_indi]][ghld_s_force_indi] | [![indi][ghid_s_force_sopen]][ghld_s_force_sopen] | [![indi][ghid_s_force_sclose]][ghld_s_force_sclose] | [![indi][ghid_s_force_tick]][ghld_s_force_tick] |
| Fractals | [![indi][ghid_s_fractals_indi]][ghld_s_fractals_indi] | [![indi][ghid_s_fractals_sopen]][ghld_s_fractals_sopen] | [![indi][ghid_s_fractals_sclose]][ghld_s_fractals_sclose] | [![indi][ghid_s_fractals_tick]][ghld_s_fractals_tick] |
| Gator | [![indi][ghid_s_gator_indi]][ghld_s_gator_indi] | [![indi][ghid_s_gator_sopen]][ghld_s_gator_sopen] | [![indi][ghid_s_gator_sclose]][ghld_s_gator_sclose] | [![indi][ghid_s_gator_tick]][ghld_s_gator_tick] |
| HeikenAshi | [![indi][ghid_s_ha_indi]][ghld_s_ha_indi] | [![indi][ghid_s_ha_sopen]][ghld_s_ha_sopen] | [![indi][ghid_s_ha_sclose]][ghld_s_ha_sclose] | [![indi][ghid_s_ha_tick]][ghld_s_ha_tick] |
| Ichimoku | [![indi][ghid_s_ichi_indi]][ghld_s_ichi_indi] | [![indi][ghid_s_ichi_sopen]][ghld_s_ichi_sopen] | [![indi][ghid_s_ichi_sclose]][ghld_s_ichi_sclose] | [![indi][ghid_s_ichi_tick]][ghld_s_ichi_tick] |
| MA | [![indi][ghid_s_ma_indi]][ghld_s_ma_indi] | [![indi][ghid_s_ma_sopen]][ghld_s_ma_sopen] | [![indi][ghid_s_ma_sclose]][ghld_s_ma_sclose] | [![indi][ghid_s_ma_tick]][ghld_s_ma_tick] |
| MACD | [![indi][ghid_s_macd_indi]][ghld_s_macd_indi] | [![indi][ghid_s_macd_sopen]][ghld_s_macd_sopen] | [![indi][ghid_s_macd_sclose]][ghld_s_macd_sclose] | [![indi][ghid_s_macd_tick]][ghld_s_macd_tick] |
| MFI | [![indi][ghid_s_mfi_indi]][ghld_s_mfi_indi] | [![indi][ghid_s_mfi_sopen]][ghld_s_mfi_sopen] | [![indi][ghid_s_mfi_sclose]][ghld_s_mfi_sclose] | [![indi][ghid_s_mfi_tick]][ghld_s_mfi_tick] |
| Momentum | [![indi][ghid_s_mom_indi]][ghld_s_mom_indi] | [![indi][ghid_s_mom_sopen]][ghld_s_mom_sopen] | [![indi][ghid_s_mom_sclose]][ghld_s_mom_sclose] | [![indi][ghid_s_mom_tick]][ghld_s_mom_tick] |
| OBV | [![indi][ghid_s_obv_indi]][ghld_s_obv_indi] | [![indi][ghid_s_obv_sopen]][ghld_s_obv_sopen] | [![indi][ghid_s_obv_sclose]][ghld_s_obv_sclose] | [![indi][ghid_s_obv_tick]][ghld_s_obv_tick] |
| OsMA | [![indi][ghid_s_osma_indi]][ghld_s_osma_indi] | [![indi][ghid_s_osma_sopen]][ghld_s_osma_sopen] | [![indi][ghid_s_osma_sclose]][ghld_s_osma_sclose] | [![indi][ghid_s_osma_tick]][ghld_s_osma_tick] |
| RSI | [![indi][ghid_s_rsi_indi]][ghld_s_rsi_indi] | [![indi][ghid_s_rsi_sopen]][ghld_s_rsi_sopen] | [![indi][ghid_s_rsi_sclose]][ghld_s_rsi_sclose] | [![indi][ghid_s_rsi_tick]][ghld_s_rsi_tick] |
| RVI | [![indi][ghid_s_rvi_indi]][ghld_s_rvi_indi] | [![indi][ghid_s_rvi_sopen]][ghld_s_rvi_sopen] | [![indi][ghid_s_rvi_sclose]][ghld_s_rvi_sclose] | [![indi][ghid_s_rvi_tick]][ghld_s_rvi_tick] |
| SAR | [![indi][ghid_s_sar_indi]][ghld_s_sar_indi] | [![indi][ghid_s_sar_sopen]][ghld_s_sar_sopen] | [![indi][ghid_s_sar_sclose]][ghld_s_sar_sclose] | [![indi][ghid_s_sar_tick]][ghld_s_sar_tick] |
| SAWA | [![indi][ghid_s_sawa_indi]][ghld_s_sawa_indi] | [![indi][ghid_s_sawa_sopen]][ghld_s_sawa_sopen] | [![indi][ghid_s_sawa_sclose]][ghld_s_sawa_sclose] | [![indi][ghid_s_sawa_tick]][ghld_s_sawa_tick] |
| SVE BB | [![indi][ghid_s_svebb_indi]][ghld_s_svebb_indi] | [![indi][ghid_s_svebb_sopen]][ghld_s_svebb_sopen] | [![indi][ghid_s_svebb_sclose]][ghld_s_svebb_sclose] | [![indi][ghid_s_svebb_tick]][ghld_s_svebb_tick] |
| StdDev | [![indi][ghid_s_stddev_indi]][ghld_s_stddev_indi] | [![indi][ghid_s_stddev_sopen]][ghld_s_stddev_sopen] | [![indi][ghid_s_stddev_sclose]][ghld_s_stddev_sclose] | [![indi][ghid_s_stddev_tick]][ghld_s_stddev_tick] |
| Stochastic | [![indi][ghid_s_stoch_indi]][ghld_s_stoch_indi] | [![indi][ghid_s_stoch_sopen]][ghld_s_stoch_sopen] | [![indi][ghid_s_stoch_sclose]][ghld_s_stoch_sclose] | [![indi][ghid_s_stoch_tick]][ghld_s_stoch_tick] |
| TMA Band SVE True | [![indi][ghid_s_tmabsvet_indi]][ghld_s_tmabsvet_indi] | [![indi][ghid_s_tmabsvet_sopen]][ghld_s_tmabsvet_sopen] | [![indi][ghid_s_tmabsvet_sclose]][ghld_s_tmabsvet_sclose] | [![indi][ghid_s_tmabsvet_tick]][ghld_s_tmabsvet_tick] |
| TMA True | [![indi][ghid_s_tmatrue_indi]][ghld_s_tmatrue_indi] | [![indi][ghid_s_tmatrue_sopen]][ghld_s_tmatrue_sopen] | [![indi][ghid_s_tmatrue_sclose]][ghld_s_tmatrue_sclose] | [![indi][ghid_s_tmatrue_tick]][ghld_s_tmatrue_tick] |
| WPR | [![indi][ghid_s_wpr_indi]][ghld_s_wpr_indi] | [![indi][ghid_s_wpr_sopen]][ghld_s_wpr_sopen] | [![indi][ghid_s_wpr_sclose]][ghld_s_wpr_sclose] | [![indi][ghid_s_wpr_tick]][ghld_s_wpr_tick] |
| ZigZag | [![indi][ghid_s_zigzag_indi]][ghld_s_zigzag_indi] | [![indi][ghid_s_zigzag_sopen]][ghld_s_zigzag_sopen] | [![indi][ghid_s_zigzag_sclose]][ghld_s_zigzag_sclose] | [![indi][ghid_s_zigzag_tick]][ghld_s_zigzag_tick] |

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

[ghlm_s_ac_check]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Check+branch:master
[ghim_s_ac_check]: https://github.com/EA31337/Strategy-AC/workflows/Check/badge.svg?branch=master
[ghlm_s_ac_lint]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Lint+branch:master
[ghim_s_ac_lint]: https://github.com/EA31337/Strategy-AC/workflows/Lint/badge.svg?branch=master
[ghlm_s_ac_compile]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Compile+branch:master
[ghim_s_ac_compile]: https://github.com/EA31337/Strategy-AC/workflows/Compile/badge.svg?branch=master
[ghlm_s_ac_bt]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Backtest+branch:master
[ghim_s_ac_bt]: https://github.com/EA31337/Strategy-AC/workflows/Backtest/badge.svg?branch=master

[ghld_s_ac_check]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Check+branch:dev
[ghid_s_ac_check]: https://github.com/EA31337/Strategy-AC/workflows/Check/badge.svg?branch=dev
[ghld_s_ac_lint]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Lint+branch:dev
[ghid_s_ac_lint]: https://github.com/EA31337/Strategy-AC/workflows/Lint/badge.svg?branch=dev
[ghld_s_ac_compile]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Compile+branch:dev
[ghid_s_ac_compile]: https://github.com/EA31337/Strategy-AC/workflows/Compile/badge.svg?branch=dev
[ghld_s_ac_bt]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:Backtest+branch:dev
[ghid_s_ac_bt]: https://github.com/EA31337/Strategy-AC/workflows/Backtest/badge.svg?branch=dev

[ghld_s_ac_indi]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_ac_indi]: https://github.com/EA31337/Strategy-AC/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_ac_sopen]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_ac_sopen]: https://github.com/EA31337/Strategy-AC/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_ac_sclose]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_ac_sclose]: https://github.com/EA31337/Strategy-AC/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_ac_tick]: https://github.com/EA31337/Strategy-AC/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_ac_tick]: https://github.com/EA31337/Strategy-AC/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_ad_check]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Check+branch:master
[ghim_s_ad_check]: https://github.com/EA31337/Strategy-AD/workflows/Check/badge.svg?branch=master
[ghlm_s_ad_lint]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Lint+branch:master
[ghim_s_ad_lint]: https://github.com/EA31337/Strategy-AD/workflows/Lint/badge.svg?branch=master
[ghlm_s_ad_compile]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Compile+branch:master
[ghim_s_ad_compile]: https://github.com/EA31337/Strategy-AD/workflows/Compile/badge.svg?branch=master
[ghlm_s_ad_bt]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Backtest+branch:master
[ghim_s_ad_bt]: https://github.com/EA31337/Strategy-AD/workflows/Backtest/badge.svg?branch=master

[ghld_s_ad_check]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Check+branch:dev
[ghid_s_ad_check]: https://github.com/EA31337/Strategy-AD/workflows/Check/badge.svg?branch=dev
[ghld_s_ad_lint]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Lint+branch:dev
[ghid_s_ad_lint]: https://github.com/EA31337/Strategy-AD/workflows/Lint/badge.svg?branch=dev
[ghld_s_ad_compile]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Compile+branch:dev
[ghid_s_ad_compile]: https://github.com/EA31337/Strategy-AD/workflows/Compile/badge.svg?branch=dev
[ghld_s_ad_bt]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:Backtest+branch:dev
[ghid_s_ad_bt]: https://github.com/EA31337/Strategy-AD/workflows/Backtest/badge.svg?branch=dev

[ghld_s_ad_indi]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_ad_indi]: https://github.com/EA31337/Strategy-AD/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_ad_sopen]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_ad_sopen]: https://github.com/EA31337/Strategy-AD/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_ad_sclose]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_ad_sclose]: https://github.com/EA31337/Strategy-AD/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_ad_tick]: https://github.com/EA31337/Strategy-AD/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_ad_tick]: https://github.com/EA31337/Strategy-AD/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_adx_check]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Check+branch:master
[ghim_s_adx_check]: https://github.com/EA31337/Strategy-ADX/workflows/Check/badge.svg?branch=master
[ghlm_s_adx_lint]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Lint+branch:master
[ghim_s_adx_lint]: https://github.com/EA31337/Strategy-ADX/workflows/Lint/badge.svg?branch=master
[ghlm_s_adx_compile]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Compile+branch:master
[ghim_s_adx_compile]: https://github.com/EA31337/Strategy-ADX/workflows/Compile/badge.svg?branch=master
[ghlm_s_adx_bt]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Backtest+branch:master
[ghim_s_adx_bt]: https://github.com/EA31337/Strategy-ADX/workflows/Backtest/badge.svg?branch=master

[ghld_s_adx_check]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Check+branch:dev
[ghid_s_adx_check]: https://github.com/EA31337/Strategy-ADX/workflows/Check/badge.svg?branch=dev
[ghld_s_adx_lint]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Lint+branch:dev
[ghid_s_adx_lint]: https://github.com/EA31337/Strategy-ADX/workflows/Lint/badge.svg?branch=dev
[ghld_s_adx_compile]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Compile+branch:dev
[ghid_s_adx_compile]: https://github.com/EA31337/Strategy-ADX/workflows/Compile/badge.svg?branch=dev
[ghld_s_adx_bt]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:Backtest+branch:dev
[ghid_s_adx_bt]: https://github.com/EA31337/Strategy-ADX/workflows/Backtest/badge.svg?branch=dev

[ghld_s_adx_indi]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_adx_indi]: https://github.com/EA31337/Strategy-ADX/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_adx_sopen]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_adx_sopen]: https://github.com/EA31337/Strategy-ADX/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_adx_sclose]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_adx_sclose]: https://github.com/EA31337/Strategy-ADX/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_adx_tick]: https://github.com/EA31337/Strategy-ADX/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_adx_tick]: https://github.com/EA31337/Strategy-ADX/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_atr_check]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Check+branch:master
[ghim_s_atr_check]: https://github.com/EA31337/Strategy-ATR/workflows/Check/badge.svg?branch=master
[ghlm_s_atr_lint]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Lint+branch:master
[ghim_s_atr_lint]: https://github.com/EA31337/Strategy-ATR/workflows/Lint/badge.svg?branch=master
[ghlm_s_atr_compile]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Compile+branch:master
[ghim_s_atr_compile]: https://github.com/EA31337/Strategy-ATR/workflows/Compile/badge.svg?branch=master
[ghlm_s_atr_bt]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Backtest+branch:master
[ghim_s_atr_bt]: https://github.com/EA31337/Strategy-ATR/workflows/Backtest/badge.svg?branch=master

[ghld_s_atr_check]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Check+branch:dev
[ghid_s_atr_check]: https://github.com/EA31337/Strategy-ATR/workflows/Check/badge.svg?branch=dev
[ghld_s_atr_lint]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Lint+branch:dev
[ghid_s_atr_lint]: https://github.com/EA31337/Strategy-ATR/workflows/Lint/badge.svg?branch=dev
[ghld_s_atr_compile]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Compile+branch:dev
[ghid_s_atr_compile]: https://github.com/EA31337/Strategy-ATR/workflows/Compile/badge.svg?branch=dev
[ghld_s_atr_bt]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:Backtest+branch:dev
[ghid_s_atr_bt]: https://github.com/EA31337/Strategy-ATR/workflows/Backtest/badge.svg?branch=dev

[ghld_s_atr_indi]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_atr_indi]: https://github.com/EA31337/Strategy-ATR/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_atr_sopen]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_atr_sopen]: https://github.com/EA31337/Strategy-ATR/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_atr_sclose]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_atr_sclose]: https://github.com/EA31337/Strategy-ATR/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_atr_tick]: https://github.com/EA31337/Strategy-ATR/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_atr_tick]: https://github.com/EA31337/Strategy-ATR/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_alli_check]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Check+branch:master
[ghim_s_alli_check]: https://github.com/EA31337/Strategy-Alligator/workflows/Check/badge.svg?branch=master
[ghlm_s_alli_lint]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Lint+branch:master
[ghim_s_alli_lint]: https://github.com/EA31337/Strategy-Alligator/workflows/Lint/badge.svg?branch=master
[ghlm_s_alli_compile]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Compile+branch:master
[ghim_s_alli_compile]: https://github.com/EA31337/Strategy-Alligator/workflows/Compile/badge.svg?branch=master
[ghlm_s_alli_bt]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Backtest+branch:master
[ghim_s_alli_bt]: https://github.com/EA31337/Strategy-Alligator/workflows/Backtest/badge.svg?branch=master

[ghld_s_alli_check]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Check+branch:dev
[ghid_s_alli_check]: https://github.com/EA31337/Strategy-Alligator/workflows/Check/badge.svg?branch=dev
[ghld_s_alli_lint]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Lint+branch:dev
[ghid_s_alli_lint]: https://github.com/EA31337/Strategy-Alligator/workflows/Lint/badge.svg?branch=dev
[ghld_s_alli_compile]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Compile+branch:dev
[ghid_s_alli_compile]: https://github.com/EA31337/Strategy-Alligator/workflows/Compile/badge.svg?branch=dev
[ghld_s_alli_bt]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:Backtest+branch:dev
[ghid_s_alli_bt]: https://github.com/EA31337/Strategy-Alligator/workflows/Backtest/badge.svg?branch=dev

[ghld_s_alli_indi]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_alli_indi]: https://github.com/EA31337/Strategy-Alligator/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_alli_sopen]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_alli_sopen]: https://github.com/EA31337/Strategy-Alligator/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_alli_sclose]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_alli_sclose]: https://github.com/EA31337/Strategy-Alligator/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_alli_tick]: https://github.com/EA31337/Strategy-Alligator/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_alli_tick]: https://github.com/EA31337/Strategy-Alligator/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_ao_check]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Check+branch:master
[ghim_s_ao_check]: https://github.com/EA31337/Strategy-Awesome/workflows/Check/badge.svg?branch=master
[ghlm_s_ao_lint]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Lint+branch:master
[ghim_s_ao_lint]: https://github.com/EA31337/Strategy-Awesome/workflows/Lint/badge.svg?branch=master
[ghlm_s_ao_compile]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Compile+branch:master
[ghim_s_ao_compile]: https://github.com/EA31337/Strategy-Awesome/workflows/Compile/badge.svg?branch=master
[ghlm_s_ao_bt]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Backtest+branch:master
[ghim_s_ao_bt]: https://github.com/EA31337/Strategy-Awesome/workflows/Backtest/badge.svg?branch=master

[ghld_s_ao_check]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Check+branch:dev
[ghid_s_ao_check]: https://github.com/EA31337/Strategy-Awesome/workflows/Check/badge.svg?branch=dev
[ghld_s_ao_lint]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Lint+branch:dev
[ghid_s_ao_lint]: https://github.com/EA31337/Strategy-Awesome/workflows/Lint/badge.svg?branch=dev
[ghld_s_ao_compile]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Compile+branch:dev
[ghid_s_ao_compile]: https://github.com/EA31337/Strategy-Awesome/workflows/Compile/badge.svg?branch=dev
[ghld_s_ao_bt]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:Backtest+branch:dev
[ghid_s_ao_bt]: https://github.com/EA31337/Strategy-Awesome/workflows/Backtest/badge.svg?branch=dev

[ghld_s_ao_indi]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_ao_indi]: https://github.com/EA31337/Strategy-Awesome/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_ao_sopen]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_ao_sopen]: https://github.com/EA31337/Strategy-Awesome/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_ao_sclose]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_ao_sclose]: https://github.com/EA31337/Strategy-Awesome/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_ao_tick]: https://github.com/EA31337/Strategy-Awesome/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_ao_tick]: https://github.com/EA31337/Strategy-Awesome/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_bwmfi_check]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Check+branch:master
[ghim_s_bwmfi_check]: https://github.com/EA31337/Strategy-BWMFI/workflows/Check/badge.svg?branch=master
[ghlm_s_bwmfi_lint]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Lint+branch:master
[ghim_s_bwmfi_lint]: https://github.com/EA31337/Strategy-BWMFI/workflows/Lint/badge.svg?branch=master
[ghlm_s_bwmfi_compile]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Compile+branch:master
[ghim_s_bwmfi_compile]: https://github.com/EA31337/Strategy-BWMFI/workflows/Compile/badge.svg?branch=master
[ghlm_s_bwmfi_bt]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Backtest+branch:master
[ghim_s_bwmfi_bt]: https://github.com/EA31337/Strategy-BWMFI/workflows/Backtest/badge.svg?branch=master

[ghld_s_bwmfi_check]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Check+branch:dev
[ghid_s_bwmfi_check]: https://github.com/EA31337/Strategy-BWMFI/workflows/Check/badge.svg?branch=dev
[ghld_s_bwmfi_lint]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Lint+branch:dev
[ghid_s_bwmfi_lint]: https://github.com/EA31337/Strategy-BWMFI/workflows/Lint/badge.svg?branch=dev
[ghld_s_bwmfi_compile]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Compile+branch:dev
[ghid_s_bwmfi_compile]: https://github.com/EA31337/Strategy-BWMFI/workflows/Compile/badge.svg?branch=dev
[ghld_s_bwmfi_bt]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:Backtest+branch:dev
[ghid_s_bwmfi_bt]: https://github.com/EA31337/Strategy-BWMFI/workflows/Backtest/badge.svg?branch=dev

[ghld_s_bwmfi_indi]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_bwmfi_indi]: https://github.com/EA31337/Strategy-BWMFI/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_bwmfi_sopen]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_bwmfi_sopen]: https://github.com/EA31337/Strategy-BWMFI/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_bwmfi_sclose]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_bwmfi_sclose]: https://github.com/EA31337/Strategy-BWMFI/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_bwmfi_tick]: https://github.com/EA31337/Strategy-BWMFI/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_bwmfi_tick]: https://github.com/EA31337/Strategy-BWMFI/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_bands_check]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Check+branch:master
[ghim_s_bands_check]: https://github.com/EA31337/Strategy-Bands/workflows/Check/badge.svg?branch=master
[ghlm_s_bands_lint]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Lint+branch:master
[ghim_s_bands_lint]: https://github.com/EA31337/Strategy-Bands/workflows/Lint/badge.svg?branch=master
[ghlm_s_bands_compile]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Compile+branch:master
[ghim_s_bands_compile]: https://github.com/EA31337/Strategy-Bands/workflows/Compile/badge.svg?branch=master
[ghlm_s_bands_bt]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Backtest+branch:master
[ghim_s_bands_bt]: https://github.com/EA31337/Strategy-Bands/workflows/Backtest/badge.svg?branch=master

[ghld_s_bands_check]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Check+branch:dev
[ghid_s_bands_check]: https://github.com/EA31337/Strategy-Bands/workflows/Check/badge.svg?branch=dev
[ghld_s_bands_lint]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Lint+branch:dev
[ghid_s_bands_lint]: https://github.com/EA31337/Strategy-Bands/workflows/Lint/badge.svg?branch=dev
[ghld_s_bands_compile]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Compile+branch:dev
[ghid_s_bands_compile]: https://github.com/EA31337/Strategy-Bands/workflows/Compile/badge.svg?branch=dev
[ghld_s_bands_bt]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:Backtest+branch:dev
[ghid_s_bands_bt]: https://github.com/EA31337/Strategy-Bands/workflows/Backtest/badge.svg?branch=dev

[ghld_s_bands_indi]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_bands_indi]: https://github.com/EA31337/Strategy-Bands/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_bands_sopen]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_bands_sopen]: https://github.com/EA31337/Strategy-Bands/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_bands_sclose]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_bands_sclose]: https://github.com/EA31337/Strategy-Bands/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_bands_tick]: https://github.com/EA31337/Strategy-Bands/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_bands_tick]: https://github.com/EA31337/Strategy-Bands/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_bears_check]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Check+branch:master
[ghim_s_bears_check]: https://github.com/EA31337/Strategy-BearsPower/workflows/Check/badge.svg?branch=master
[ghlm_s_bears_lint]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Lint+branch:master
[ghim_s_bears_lint]: https://github.com/EA31337/Strategy-BearsPower/workflows/Lint/badge.svg?branch=master
[ghlm_s_bears_compile]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Compile+branch:master
[ghim_s_bears_compile]: https://github.com/EA31337/Strategy-BearsPower/workflows/Compile/badge.svg?branch=master
[ghlm_s_bears_bt]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Backtest+branch:master
[ghim_s_bears_bt]: https://github.com/EA31337/Strategy-BearsPower/workflows/Backtest/badge.svg?branch=master

[ghld_s_bears_check]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Check+branch:dev
[ghid_s_bears_check]: https://github.com/EA31337/Strategy-BearsPower/workflows/Check/badge.svg?branch=dev
[ghld_s_bears_lint]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Lint+branch:dev
[ghid_s_bears_lint]: https://github.com/EA31337/Strategy-BearsPower/workflows/Lint/badge.svg?branch=dev
[ghld_s_bears_compile]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Compile+branch:dev
[ghid_s_bears_compile]: https://github.com/EA31337/Strategy-BearsPower/workflows/Compile/badge.svg?branch=dev
[ghld_s_bears_bt]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:Backtest+branch:dev
[ghid_s_bears_bt]: https://github.com/EA31337/Strategy-BearsPower/workflows/Backtest/badge.svg?branch=dev

[ghld_s_bears_indi]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_bears_indi]: https://github.com/EA31337/Strategy-BearsPower/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_bears_sopen]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_bears_sopen]: https://github.com/EA31337/Strategy-BearsPower/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_bears_sclose]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_bears_sclose]: https://github.com/EA31337/Strategy-BearsPower/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_bears_tick]: https://github.com/EA31337/Strategy-BearsPower/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_bears_tick]: https://github.com/EA31337/Strategy-BearsPower/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_bulls_check]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Check+branch:master
[ghim_s_bulls_check]: https://github.com/EA31337/Strategy-BullsPower/workflows/Check/badge.svg?branch=master
[ghlm_s_bulls_lint]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Lint+branch:master
[ghim_s_bulls_lint]: https://github.com/EA31337/Strategy-BullsPower/workflows/Lint/badge.svg?branch=master
[ghlm_s_bulls_compile]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Compile+branch:master
[ghim_s_bulls_compile]: https://github.com/EA31337/Strategy-BullsPower/workflows/Compile/badge.svg?branch=master
[ghlm_s_bulls_bt]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Backtest+branch:master
[ghim_s_bulls_bt]: https://github.com/EA31337/Strategy-BullsPower/workflows/Backtest/badge.svg?branch=master

[ghld_s_bulls_check]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Check+branch:dev
[ghid_s_bulls_check]: https://github.com/EA31337/Strategy-BullsPower/workflows/Check/badge.svg?branch=dev
[ghld_s_bulls_lint]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Lint+branch:dev
[ghid_s_bulls_lint]: https://github.com/EA31337/Strategy-BullsPower/workflows/Lint/badge.svg?branch=dev
[ghld_s_bulls_compile]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Compile+branch:dev
[ghid_s_bulls_compile]: https://github.com/EA31337/Strategy-BullsPower/workflows/Compile/badge.svg?branch=dev
[ghld_s_bulls_bt]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:Backtest+branch:dev
[ghid_s_bulls_bt]: https://github.com/EA31337/Strategy-BullsPower/workflows/Backtest/badge.svg?branch=dev

[ghld_s_bulls_indi]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_bulls_indi]: https://github.com/EA31337/Strategy-BullsPower/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_bulls_sopen]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_bulls_sopen]: https://github.com/EA31337/Strategy-BullsPower/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_bulls_sclose]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_bulls_sclose]: https://github.com/EA31337/Strategy-BullsPower/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_bulls_tick]: https://github.com/EA31337/Strategy-BullsPower/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_bulls_tick]: https://github.com/EA31337/Strategy-BullsPower/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_cci_check]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Check+branch:master
[ghim_s_cci_check]: https://github.com/EA31337/Strategy-CCI/workflows/Check/badge.svg?branch=master
[ghlm_s_cci_lint]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Lint+branch:master
[ghim_s_cci_lint]: https://github.com/EA31337/Strategy-CCI/workflows/Lint/badge.svg?branch=master
[ghlm_s_cci_compile]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Compile+branch:master
[ghim_s_cci_compile]: https://github.com/EA31337/Strategy-CCI/workflows/Compile/badge.svg?branch=master
[ghlm_s_cci_bt]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Backtest+branch:master
[ghim_s_cci_bt]: https://github.com/EA31337/Strategy-CCI/workflows/Backtest/badge.svg?branch=master

[ghld_s_cci_check]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Check+branch:dev
[ghid_s_cci_check]: https://github.com/EA31337/Strategy-CCI/workflows/Check/badge.svg?branch=dev
[ghld_s_cci_lint]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Lint+branch:dev
[ghid_s_cci_lint]: https://github.com/EA31337/Strategy-CCI/workflows/Lint/badge.svg?branch=dev
[ghld_s_cci_compile]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Compile+branch:dev
[ghid_s_cci_compile]: https://github.com/EA31337/Strategy-CCI/workflows/Compile/badge.svg?branch=dev
[ghld_s_cci_bt]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:Backtest+branch:dev
[ghid_s_cci_bt]: https://github.com/EA31337/Strategy-CCI/workflows/Backtest/badge.svg?branch=dev

[ghld_s_cci_indi]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_cci_indi]: https://github.com/EA31337/Strategy-CCI/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_cci_sopen]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_cci_sopen]: https://github.com/EA31337/Strategy-CCI/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_cci_sclose]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_cci_sclose]: https://github.com/EA31337/Strategy-CCI/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_cci_tick]: https://github.com/EA31337/Strategy-CCI/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_cci_tick]: https://github.com/EA31337/Strategy-CCI/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_dema_check]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:Check+branch:master
[ghim_s_dema_check]: https://github.com/EA31337/Strategy-DEMA/workflows/Check/badge.svg?branch=master
[ghlm_s_dema_lint]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:Lint+branch:master
[ghim_s_dema_lint]: https://github.com/EA31337/Strategy-DEMA/workflows/Lint/badge.svg?branch=master
[ghlm_s_dema_compile]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:Compile+branch:master
[ghim_s_dema_compile]: https://github.com/EA31337/Strategy-DEMA/workflows/Compile/badge.svg?branch=master
[ghlm_s_dema_bt]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:Backtest+branch:master
[ghim_s_dema_bt]: https://github.com/EA31337/Strategy-DEMA/workflows/Backtest/badge.svg?branch=master

[ghld_s_dema_check]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:Check+branch:dev
[ghid_s_dema_check]: https://github.com/EA31337/Strategy-DEMA/workflows/Check/badge.svg?branch=dev
[ghld_s_dema_lint]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:Lint+branch:dev
[ghid_s_dema_lint]: https://github.com/EA31337/Strategy-DEMA/workflows/Lint/badge.svg?branch=dev
[ghld_s_dema_compile]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:Compile+branch:dev
[ghid_s_dema_compile]: https://github.com/EA31337/Strategy-DEMA/workflows/Compile/badge.svg?branch=dev
[ghld_s_dema_bt]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:Backtest+branch:dev
[ghid_s_dema_bt]: https://github.com/EA31337/Strategy-DEMA/workflows/Backtest/badge.svg?branch=dev

[ghld_s_dema_indi]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_dema_indi]: https://github.com/EA31337/Strategy-DEMA/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_dema_sopen]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_dema_sopen]: https://github.com/EA31337/Strategy-DEMA/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_dema_sclose]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_dema_sclose]: https://github.com/EA31337/Strategy-DEMA/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_dema_tick]: https://github.com/EA31337/Strategy-DEMA/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_dema_tick]: https://github.com/EA31337/Strategy-DEMA/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_dm_check]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Check+branch:master
[ghim_s_dm_check]: https://github.com/EA31337/Strategy-DeMarker/workflows/Check/badge.svg?branch=master
[ghlm_s_dm_lint]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Lint+branch:master
[ghim_s_dm_lint]: https://github.com/EA31337/Strategy-DeMarker/workflows/Lint/badge.svg?branch=master
[ghlm_s_dm_compile]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Compile+branch:master
[ghim_s_dm_compile]: https://github.com/EA31337/Strategy-DeMarker/workflows/Compile/badge.svg?branch=master
[ghlm_s_dm_bt]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Backtest+branch:master
[ghim_s_dm_bt]: https://github.com/EA31337/Strategy-DeMarker/workflows/Backtest/badge.svg?branch=master

[ghld_s_dm_check]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Check+branch:dev
[ghid_s_dm_check]: https://github.com/EA31337/Strategy-DeMarker/workflows/Check/badge.svg?branch=dev
[ghld_s_dm_lint]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Lint+branch:dev
[ghid_s_dm_lint]: https://github.com/EA31337/Strategy-DeMarker/workflows/Lint/badge.svg?branch=dev
[ghld_s_dm_compile]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Compile+branch:dev
[ghid_s_dm_compile]: https://github.com/EA31337/Strategy-DeMarker/workflows/Compile/badge.svg?branch=dev
[ghld_s_dm_bt]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:Backtest+branch:dev
[ghid_s_dm_bt]: https://github.com/EA31337/Strategy-DeMarker/workflows/Backtest/badge.svg?branch=dev

[ghld_s_dm_indi]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_dm_indi]: https://github.com/EA31337/Strategy-DeMarker/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_dm_sopen]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_dm_sopen]: https://github.com/EA31337/Strategy-DeMarker/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_dm_sclose]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_dm_sclose]: https://github.com/EA31337/Strategy-DeMarker/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_dm_tick]: https://github.com/EA31337/Strategy-DeMarker/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_dm_tick]: https://github.com/EA31337/Strategy-DeMarker/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_elliott_check]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Check+branch:master
[ghim_s_elliott_check]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Check/badge.svg?branch=master
[ghlm_s_elliott_lint]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Lint+branch:master
[ghim_s_elliott_lint]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Lint/badge.svg?branch=master
[ghlm_s_elliott_compile]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Compile+branch:master
[ghim_s_elliott_compile]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Compile/badge.svg?branch=master
[ghlm_s_elliott_bt]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Backtest+branch:master
[ghim_s_elliott_bt]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Backtest/badge.svg?branch=master

[ghld_s_elliott_check]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Check+branch:dev
[ghid_s_elliott_check]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Check/badge.svg?branch=dev
[ghld_s_elliott_lint]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Lint+branch:dev
[ghid_s_elliott_lint]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Lint/badge.svg?branch=dev
[ghld_s_elliott_compile]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Compile+branch:dev
[ghid_s_elliott_compile]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Compile/badge.svg?branch=dev
[ghld_s_elliott_bt]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:Backtest+branch:dev
[ghid_s_elliott_bt]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Backtest/badge.svg?branch=dev

[ghld_s_elliott_indi]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_elliott_indi]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_elliott_sopen]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_elliott_sopen]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_elliott_sclose]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_elliott_sclose]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_elliott_tick]: https://github.com/EA31337/Strategy-ElliottWave/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_elliott_tick]: https://github.com/EA31337/Strategy-ElliottWave/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_env_check]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Check+branch:master
[ghim_s_env_check]: https://github.com/EA31337/Strategy-Envelopes/workflows/Check/badge.svg?branch=master
[ghlm_s_env_lint]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Lint+branch:master
[ghim_s_env_lint]: https://github.com/EA31337/Strategy-Envelopes/workflows/Lint/badge.svg?branch=master
[ghlm_s_env_compile]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Compile+branch:master
[ghim_s_env_compile]: https://github.com/EA31337/Strategy-Envelopes/workflows/Compile/badge.svg?branch=master
[ghlm_s_env_bt]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Backtest+branch:master
[ghim_s_env_bt]: https://github.com/EA31337/Strategy-Envelopes/workflows/Backtest/badge.svg?branch=master

[ghld_s_env_check]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Check+branch:dev
[ghid_s_env_check]: https://github.com/EA31337/Strategy-Envelopes/workflows/Check/badge.svg?branch=dev
[ghld_s_env_lint]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Lint+branch:dev
[ghid_s_env_lint]: https://github.com/EA31337/Strategy-Envelopes/workflows/Lint/badge.svg?branch=dev
[ghld_s_env_compile]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Compile+branch:dev
[ghid_s_env_compile]: https://github.com/EA31337/Strategy-Envelopes/workflows/Compile/badge.svg?branch=dev
[ghld_s_env_bt]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:Backtest+branch:dev
[ghid_s_env_bt]: https://github.com/EA31337/Strategy-Envelopes/workflows/Backtest/badge.svg?branch=dev

[ghld_s_env_indi]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_env_indi]: https://github.com/EA31337/Strategy-Envelopes/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_env_sopen]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_env_sopen]: https://github.com/EA31337/Strategy-Envelopes/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_env_sclose]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_env_sclose]: https://github.com/EA31337/Strategy-Envelopes/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_env_tick]: https://github.com/EA31337/Strategy-Envelopes/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_env_tick]: https://github.com/EA31337/Strategy-Envelopes/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_force_check]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Check+branch:master
[ghim_s_force_check]: https://github.com/EA31337/Strategy-Force/workflows/Check/badge.svg?branch=master
[ghlm_s_force_lint]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Lint+branch:master
[ghim_s_force_lint]: https://github.com/EA31337/Strategy-Force/workflows/Lint/badge.svg?branch=master
[ghlm_s_force_compile]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Compile+branch:master
[ghim_s_force_compile]: https://github.com/EA31337/Strategy-Force/workflows/Compile/badge.svg?branch=master
[ghlm_s_force_bt]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Backtest+branch:master
[ghim_s_force_bt]: https://github.com/EA31337/Strategy-Force/workflows/Backtest/badge.svg?branch=master

[ghld_s_force_check]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Check+branch:dev
[ghid_s_force_check]: https://github.com/EA31337/Strategy-Force/workflows/Check/badge.svg?branch=dev
[ghld_s_force_lint]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Lint+branch:dev
[ghid_s_force_lint]: https://github.com/EA31337/Strategy-Force/workflows/Lint/badge.svg?branch=dev
[ghld_s_force_compile]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Compile+branch:dev
[ghid_s_force_compile]: https://github.com/EA31337/Strategy-Force/workflows/Compile/badge.svg?branch=dev
[ghld_s_force_bt]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:Backtest+branch:dev
[ghid_s_force_bt]: https://github.com/EA31337/Strategy-Force/workflows/Backtest/badge.svg?branch=dev

[ghld_s_force_indi]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_force_indi]: https://github.com/EA31337/Strategy-Force/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_force_sopen]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_force_sopen]: https://github.com/EA31337/Strategy-Force/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_force_sclose]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_force_sclose]: https://github.com/EA31337/Strategy-Force/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_force_tick]: https://github.com/EA31337/Strategy-Force/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_force_tick]: https://github.com/EA31337/Strategy-Force/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_fractals_check]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Check+branch:master
[ghim_s_fractals_check]: https://github.com/EA31337/Strategy-Fractals/workflows/Check/badge.svg?branch=master
[ghlm_s_fractals_lint]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Lint+branch:master
[ghim_s_fractals_lint]: https://github.com/EA31337/Strategy-Fractals/workflows/Lint/badge.svg?branch=master
[ghlm_s_fractals_compile]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Compile+branch:master
[ghim_s_fractals_compile]: https://github.com/EA31337/Strategy-Fractals/workflows/Compile/badge.svg?branch=master
[ghlm_s_fractals_bt]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Backtest+branch:master
[ghim_s_fractals_bt]: https://github.com/EA31337/Strategy-Fractals/workflows/Backtest/badge.svg?branch=master

[ghld_s_fractals_check]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Check+branch:dev
[ghid_s_fractals_check]: https://github.com/EA31337/Strategy-Fractals/workflows/Check/badge.svg?branch=dev
[ghld_s_fractals_lint]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Lint+branch:dev
[ghid_s_fractals_lint]: https://github.com/EA31337/Strategy-Fractals/workflows/Lint/badge.svg?branch=dev
[ghld_s_fractals_compile]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Compile+branch:dev
[ghid_s_fractals_compile]: https://github.com/EA31337/Strategy-Fractals/workflows/Compile/badge.svg?branch=dev
[ghld_s_fractals_bt]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:Backtest+branch:dev
[ghid_s_fractals_bt]: https://github.com/EA31337/Strategy-Fractals/workflows/Backtest/badge.svg?branch=dev

[ghld_s_fractals_indi]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_fractals_indi]: https://github.com/EA31337/Strategy-Fractals/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_fractals_sopen]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_fractals_sopen]: https://github.com/EA31337/Strategy-Fractals/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_fractals_sclose]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_fractals_sclose]: https://github.com/EA31337/Strategy-Fractals/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_fractals_tick]: https://github.com/EA31337/Strategy-Fractals/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_fractals_tick]: https://github.com/EA31337/Strategy-Fractals/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_gator_check]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Check+branch:master
[ghim_s_gator_check]: https://github.com/EA31337/Strategy-Gator/workflows/Check/badge.svg?branch=master
[ghlm_s_gator_lint]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Lint+branch:master
[ghim_s_gator_lint]: https://github.com/EA31337/Strategy-Gator/workflows/Lint/badge.svg?branch=master
[ghlm_s_gator_compile]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Compile+branch:master
[ghim_s_gator_compile]: https://github.com/EA31337/Strategy-Gator/workflows/Compile/badge.svg?branch=master
[ghlm_s_gator_bt]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Backtest+branch:master
[ghim_s_gator_bt]: https://github.com/EA31337/Strategy-Gator/workflows/Backtest/badge.svg?branch=master

[ghld_s_gator_check]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Check+branch:dev
[ghid_s_gator_check]: https://github.com/EA31337/Strategy-Gator/workflows/Check/badge.svg?branch=dev
[ghld_s_gator_lint]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Lint+branch:dev
[ghid_s_gator_lint]: https://github.com/EA31337/Strategy-Gator/workflows/Lint/badge.svg?branch=dev
[ghld_s_gator_compile]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Compile+branch:dev
[ghid_s_gator_compile]: https://github.com/EA31337/Strategy-Gator/workflows/Compile/badge.svg?branch=dev
[ghld_s_gator_bt]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:Backtest+branch:dev
[ghid_s_gator_bt]: https://github.com/EA31337/Strategy-Gator/workflows/Backtest/badge.svg?branch=dev

[ghld_s_gator_indi]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_gator_indi]: https://github.com/EA31337/Strategy-Gator/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_gator_sopen]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_gator_sopen]: https://github.com/EA31337/Strategy-Gator/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_gator_sclose]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_gator_sclose]: https://github.com/EA31337/Strategy-Gator/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_gator_tick]: https://github.com/EA31337/Strategy-Gator/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_gator_tick]: https://github.com/EA31337/Strategy-Gator/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_ha_check]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Check+branch:master
[ghim_s_ha_check]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Check/badge.svg?branch=master
[ghlm_s_ha_lint]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Lint+branch:master
[ghim_s_ha_lint]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Lint/badge.svg?branch=master
[ghlm_s_ha_compile]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Compile+branch:master
[ghim_s_ha_compile]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Compile/badge.svg?branch=master
[ghlm_s_ha_bt]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Backtest+branch:master
[ghim_s_ha_bt]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Backtest/badge.svg?branch=master

[ghld_s_ha_check]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Check+branch:dev
[ghid_s_ha_check]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Check/badge.svg?branch=dev
[ghld_s_ha_lint]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Lint+branch:dev
[ghid_s_ha_lint]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Lint/badge.svg?branch=dev
[ghld_s_ha_compile]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Compile+branch:dev
[ghid_s_ha_compile]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Compile/badge.svg?branch=dev
[ghld_s_ha_bt]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:Backtest+branch:dev
[ghid_s_ha_bt]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Backtest/badge.svg?branch=dev

[ghld_s_ha_indi]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_ha_indi]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_ha_sopen]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_ha_sopen]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_ha_sclose]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_ha_sclose]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_ha_tick]: https://github.com/EA31337/Strategy-HeikenAshi/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_ha_tick]: https://github.com/EA31337/Strategy-HeikenAshi/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_ichi_check]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Check+branch:master
[ghim_s_ichi_check]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Check/badge.svg?branch=master
[ghlm_s_ichi_lint]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Lint+branch:master
[ghim_s_ichi_lint]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Lint/badge.svg?branch=master
[ghlm_s_ichi_compile]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Compile+branch:master
[ghim_s_ichi_compile]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Compile/badge.svg?branch=master
[ghlm_s_ichi_bt]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Backtest+branch:master
[ghim_s_ichi_bt]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Backtest/badge.svg?branch=master

[ghld_s_ichi_check]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Check+branch:dev
[ghid_s_ichi_check]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Check/badge.svg?branch=dev
[ghld_s_ichi_lint]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Lint+branch:dev
[ghid_s_ichi_lint]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Lint/badge.svg?branch=dev
[ghld_s_ichi_compile]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Compile+branch:dev
[ghid_s_ichi_compile]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Compile/badge.svg?branch=dev
[ghld_s_ichi_bt]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:Backtest+branch:dev
[ghid_s_ichi_bt]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Backtest/badge.svg?branch=dev

[ghld_s_ichi_indi]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_ichi_indi]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_ichi_sopen]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_ichi_sopen]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_ichi_sclose]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_ichi_sclose]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_ichi_tick]: https://github.com/EA31337/Strategy-Ichimoku/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_ichi_tick]: https://github.com/EA31337/Strategy-Ichimoku/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_ma_check]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Check+branch:master
[ghim_s_ma_check]: https://github.com/EA31337/Strategy-MA/workflows/Check/badge.svg?branch=master
[ghlm_s_ma_lint]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Lint+branch:master
[ghim_s_ma_lint]: https://github.com/EA31337/Strategy-MA/workflows/Lint/badge.svg?branch=master
[ghlm_s_ma_compile]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Compile+branch:master
[ghim_s_ma_compile]: https://github.com/EA31337/Strategy-MA/workflows/Compile/badge.svg?branch=master
[ghlm_s_ma_bt]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Backtest+branch:master
[ghim_s_ma_bt]: https://github.com/EA31337/Strategy-MA/workflows/Backtest/badge.svg?branch=master

[ghld_s_ma_check]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Check+branch:dev
[ghid_s_ma_check]: https://github.com/EA31337/Strategy-MA/workflows/Check/badge.svg?branch=dev
[ghld_s_ma_lint]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Lint+branch:dev
[ghid_s_ma_lint]: https://github.com/EA31337/Strategy-MA/workflows/Lint/badge.svg?branch=dev
[ghld_s_ma_compile]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Compile+branch:dev
[ghid_s_ma_compile]: https://github.com/EA31337/Strategy-MA/workflows/Compile/badge.svg?branch=dev
[ghld_s_ma_bt]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:Backtest+branch:dev
[ghid_s_ma_bt]: https://github.com/EA31337/Strategy-MA/workflows/Backtest/badge.svg?branch=dev

[ghld_s_ma_indi]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_ma_indi]: https://github.com/EA31337/Strategy-MA/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_ma_sopen]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_ma_sopen]: https://github.com/EA31337/Strategy-MA/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_ma_sclose]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_ma_sclose]: https://github.com/EA31337/Strategy-MA/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_ma_tick]: https://github.com/EA31337/Strategy-MA/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_ma_tick]: https://github.com/EA31337/Strategy-MA/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_macd_check]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Check+branch:master
[ghim_s_macd_check]: https://github.com/EA31337/Strategy-MACD/workflows/Check/badge.svg?branch=master
[ghlm_s_macd_lint]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Lint+branch:master
[ghim_s_macd_lint]: https://github.com/EA31337/Strategy-MACD/workflows/Lint/badge.svg?branch=master
[ghlm_s_macd_compile]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Compile+branch:master
[ghim_s_macd_compile]: https://github.com/EA31337/Strategy-MACD/workflows/Compile/badge.svg?branch=master
[ghlm_s_macd_bt]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Backtest+branch:master
[ghim_s_macd_bt]: https://github.com/EA31337/Strategy-MACD/workflows/Backtest/badge.svg?branch=master

[ghld_s_macd_check]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Check+branch:dev
[ghid_s_macd_check]: https://github.com/EA31337/Strategy-MACD/workflows/Check/badge.svg?branch=dev
[ghld_s_macd_lint]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Lint+branch:dev
[ghid_s_macd_lint]: https://github.com/EA31337/Strategy-MACD/workflows/Lint/badge.svg?branch=dev
[ghld_s_macd_compile]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Compile+branch:dev
[ghid_s_macd_compile]: https://github.com/EA31337/Strategy-MACD/workflows/Compile/badge.svg?branch=dev
[ghld_s_macd_bt]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:Backtest+branch:dev
[ghid_s_macd_bt]: https://github.com/EA31337/Strategy-MACD/workflows/Backtest/badge.svg?branch=dev

[ghld_s_macd_indi]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_macd_indi]: https://github.com/EA31337/Strategy-MACD/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_macd_sopen]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_macd_sopen]: https://github.com/EA31337/Strategy-MACD/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_macd_sclose]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_macd_sclose]: https://github.com/EA31337/Strategy-MACD/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_macd_tick]: https://github.com/EA31337/Strategy-MACD/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_macd_tick]: https://github.com/EA31337/Strategy-MACD/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_mfi_check]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Check+branch:master
[ghim_s_mfi_check]: https://github.com/EA31337/Strategy-MFI/workflows/Check/badge.svg?branch=master
[ghlm_s_mfi_lint]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Lint+branch:master
[ghim_s_mfi_lint]: https://github.com/EA31337/Strategy-MFI/workflows/Lint/badge.svg?branch=master
[ghlm_s_mfi_compile]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Compile+branch:master
[ghim_s_mfi_compile]: https://github.com/EA31337/Strategy-MFI/workflows/Compile/badge.svg?branch=master
[ghlm_s_mfi_bt]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Backtest+branch:master
[ghim_s_mfi_bt]: https://github.com/EA31337/Strategy-MFI/workflows/Backtest/badge.svg?branch=master

[ghld_s_mfi_check]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Check+branch:dev
[ghid_s_mfi_check]: https://github.com/EA31337/Strategy-MFI/workflows/Check/badge.svg?branch=dev
[ghld_s_mfi_lint]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Lint+branch:dev
[ghid_s_mfi_lint]: https://github.com/EA31337/Strategy-MFI/workflows/Lint/badge.svg?branch=dev
[ghld_s_mfi_compile]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Compile+branch:dev
[ghid_s_mfi_compile]: https://github.com/EA31337/Strategy-MFI/workflows/Compile/badge.svg?branch=dev
[ghld_s_mfi_bt]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:Backtest+branch:dev
[ghid_s_mfi_bt]: https://github.com/EA31337/Strategy-MFI/workflows/Backtest/badge.svg?branch=dev

[ghld_s_mfi_indi]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_mfi_indi]: https://github.com/EA31337/Strategy-MFI/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_mfi_sopen]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_mfi_sopen]: https://github.com/EA31337/Strategy-MFI/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_mfi_sclose]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_mfi_sclose]: https://github.com/EA31337/Strategy-MFI/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_mfi_tick]: https://github.com/EA31337/Strategy-MFI/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_mfi_tick]: https://github.com/EA31337/Strategy-MFI/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_mom_check]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Check+branch:master
[ghim_s_mom_check]: https://github.com/EA31337/Strategy-Momentum/workflows/Check/badge.svg?branch=master
[ghlm_s_mom_lint]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Lint+branch:master
[ghim_s_mom_lint]: https://github.com/EA31337/Strategy-Momentum/workflows/Lint/badge.svg?branch=master
[ghlm_s_mom_compile]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Compile+branch:master
[ghim_s_mom_compile]: https://github.com/EA31337/Strategy-Momentum/workflows/Compile/badge.svg?branch=master
[ghlm_s_mom_bt]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Backtest+branch:master
[ghim_s_mom_bt]: https://github.com/EA31337/Strategy-Momentum/workflows/Backtest/badge.svg?branch=master

[ghld_s_mom_check]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Check+branch:dev
[ghid_s_mom_check]: https://github.com/EA31337/Strategy-Momentum/workflows/Check/badge.svg?branch=dev
[ghld_s_mom_lint]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Lint+branch:dev
[ghid_s_mom_lint]: https://github.com/EA31337/Strategy-Momentum/workflows/Lint/badge.svg?branch=dev
[ghld_s_mom_compile]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Compile+branch:dev
[ghid_s_mom_compile]: https://github.com/EA31337/Strategy-Momentum/workflows/Compile/badge.svg?branch=dev
[ghld_s_mom_bt]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:Backtest+branch:dev
[ghid_s_mom_bt]: https://github.com/EA31337/Strategy-Momentum/workflows/Backtest/badge.svg?branch=dev

[ghld_s_mom_indi]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_mom_indi]: https://github.com/EA31337/Strategy-Momentum/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_mom_sopen]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_mom_sopen]: https://github.com/EA31337/Strategy-Momentum/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_mom_sclose]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_mom_sclose]: https://github.com/EA31337/Strategy-Momentum/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_mom_tick]: https://github.com/EA31337/Strategy-Momentum/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_mom_tick]: https://github.com/EA31337/Strategy-Momentum/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_obv_check]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Check+branch:master
[ghim_s_obv_check]: https://github.com/EA31337/Strategy-OBV/workflows/Check/badge.svg?branch=master
[ghlm_s_obv_lint]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Lint+branch:master
[ghim_s_obv_lint]: https://github.com/EA31337/Strategy-OBV/workflows/Lint/badge.svg?branch=master
[ghlm_s_obv_compile]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Compile+branch:master
[ghim_s_obv_compile]: https://github.com/EA31337/Strategy-OBV/workflows/Compile/badge.svg?branch=master
[ghlm_s_obv_bt]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Backtest+branch:master
[ghim_s_obv_bt]: https://github.com/EA31337/Strategy-OBV/workflows/Backtest/badge.svg?branch=master

[ghld_s_obv_check]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Check+branch:dev
[ghid_s_obv_check]: https://github.com/EA31337/Strategy-OBV/workflows/Check/badge.svg?branch=dev
[ghld_s_obv_lint]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Lint+branch:dev
[ghid_s_obv_lint]: https://github.com/EA31337/Strategy-OBV/workflows/Lint/badge.svg?branch=dev
[ghld_s_obv_compile]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Compile+branch:dev
[ghid_s_obv_compile]: https://github.com/EA31337/Strategy-OBV/workflows/Compile/badge.svg?branch=dev
[ghld_s_obv_bt]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:Backtest+branch:dev
[ghid_s_obv_bt]: https://github.com/EA31337/Strategy-OBV/workflows/Backtest/badge.svg?branch=dev

[ghld_s_obv_indi]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_obv_indi]: https://github.com/EA31337/Strategy-OBV/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_obv_sopen]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_obv_sopen]: https://github.com/EA31337/Strategy-OBV/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_obv_sclose]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_obv_sclose]: https://github.com/EA31337/Strategy-OBV/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_obv_tick]: https://github.com/EA31337/Strategy-OBV/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_obv_tick]: https://github.com/EA31337/Strategy-OBV/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_osma_check]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Check+branch:master
[ghim_s_osma_check]: https://github.com/EA31337/Strategy-OsMA/workflows/Check/badge.svg?branch=master
[ghlm_s_osma_lint]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Lint+branch:master
[ghim_s_osma_lint]: https://github.com/EA31337/Strategy-OsMA/workflows/Lint/badge.svg?branch=master
[ghlm_s_osma_compile]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Compile+branch:master
[ghim_s_osma_compile]: https://github.com/EA31337/Strategy-OsMA/workflows/Compile/badge.svg?branch=master
[ghlm_s_osma_bt]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Backtest+branch:master
[ghim_s_osma_bt]: https://github.com/EA31337/Strategy-OsMA/workflows/Backtest/badge.svg?branch=master

[ghld_s_osma_check]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Check+branch:dev
[ghid_s_osma_check]: https://github.com/EA31337/Strategy-OsMA/workflows/Check/badge.svg?branch=dev
[ghld_s_osma_lint]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Lint+branch:dev
[ghid_s_osma_lint]: https://github.com/EA31337/Strategy-OsMA/workflows/Lint/badge.svg?branch=dev
[ghld_s_osma_compile]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Compile+branch:dev
[ghid_s_osma_compile]: https://github.com/EA31337/Strategy-OsMA/workflows/Compile/badge.svg?branch=dev
[ghld_s_osma_bt]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:Backtest+branch:dev
[ghid_s_osma_bt]: https://github.com/EA31337/Strategy-OsMA/workflows/Backtest/badge.svg?branch=dev

[ghld_s_osma_indi]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_osma_indi]: https://github.com/EA31337/Strategy-OsMA/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_osma_sopen]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_osma_sopen]: https://github.com/EA31337/Strategy-OsMA/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_osma_sclose]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_osma_sclose]: https://github.com/EA31337/Strategy-OsMA/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_osma_tick]: https://github.com/EA31337/Strategy-OsMA/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_osma_tick]: https://github.com/EA31337/Strategy-OsMA/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_rsi_check]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Check+branch:master
[ghim_s_rsi_check]: https://github.com/EA31337/Strategy-RSI/workflows/Check/badge.svg?branch=master
[ghlm_s_rsi_lint]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Lint+branch:master
[ghim_s_rsi_lint]: https://github.com/EA31337/Strategy-RSI/workflows/Lint/badge.svg?branch=master
[ghlm_s_rsi_compile]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Compile+branch:master
[ghim_s_rsi_compile]: https://github.com/EA31337/Strategy-RSI/workflows/Compile/badge.svg?branch=master
[ghlm_s_rsi_bt]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Backtest+branch:master
[ghim_s_rsi_bt]: https://github.com/EA31337/Strategy-RSI/workflows/Backtest/badge.svg?branch=master

[ghld_s_rsi_check]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Check+branch:dev
[ghid_s_rsi_check]: https://github.com/EA31337/Strategy-RSI/workflows/Check/badge.svg?branch=dev
[ghld_s_rsi_lint]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Lint+branch:dev
[ghid_s_rsi_lint]: https://github.com/EA31337/Strategy-RSI/workflows/Lint/badge.svg?branch=dev
[ghld_s_rsi_compile]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Compile+branch:dev
[ghid_s_rsi_compile]: https://github.com/EA31337/Strategy-RSI/workflows/Compile/badge.svg?branch=dev
[ghld_s_rsi_bt]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:Backtest+branch:dev
[ghid_s_rsi_bt]: https://github.com/EA31337/Strategy-RSI/workflows/Backtest/badge.svg?branch=dev

[ghld_s_rsi_indi]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_rsi_indi]: https://github.com/EA31337/Strategy-RSI/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_rsi_sopen]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_rsi_sopen]: https://github.com/EA31337/Strategy-RSI/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_rsi_sclose]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_rsi_sclose]: https://github.com/EA31337/Strategy-RSI/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_rsi_tick]: https://github.com/EA31337/Strategy-RSI/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_rsi_tick]: https://github.com/EA31337/Strategy-RSI/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_rvi_check]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Check+branch:master
[ghim_s_rvi_check]: https://github.com/EA31337/Strategy-RVI/workflows/Check/badge.svg?branch=master
[ghlm_s_rvi_lint]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Lint+branch:master
[ghim_s_rvi_lint]: https://github.com/EA31337/Strategy-RVI/workflows/Lint/badge.svg?branch=master
[ghlm_s_rvi_compile]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Compile+branch:master
[ghim_s_rvi_compile]: https://github.com/EA31337/Strategy-RVI/workflows/Compile/badge.svg?branch=master
[ghlm_s_rvi_bt]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Backtest+branch:master
[ghim_s_rvi_bt]: https://github.com/EA31337/Strategy-RVI/workflows/Backtest/badge.svg?branch=master

[ghld_s_rvi_check]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Check+branch:dev
[ghid_s_rvi_check]: https://github.com/EA31337/Strategy-RVI/workflows/Check/badge.svg?branch=dev
[ghld_s_rvi_lint]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Lint+branch:dev
[ghid_s_rvi_lint]: https://github.com/EA31337/Strategy-RVI/workflows/Lint/badge.svg?branch=dev
[ghld_s_rvi_compile]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Compile+branch:dev
[ghid_s_rvi_compile]: https://github.com/EA31337/Strategy-RVI/workflows/Compile/badge.svg?branch=dev
[ghld_s_rvi_bt]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:Backtest+branch:dev
[ghid_s_rvi_bt]: https://github.com/EA31337/Strategy-RVI/workflows/Backtest/badge.svg?branch=dev

[ghld_s_rvi_indi]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_rvi_indi]: https://github.com/EA31337/Strategy-RVI/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_rvi_sopen]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_rvi_sopen]: https://github.com/EA31337/Strategy-RVI/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_rvi_sclose]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_rvi_sclose]: https://github.com/EA31337/Strategy-RVI/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_rvi_tick]: https://github.com/EA31337/Strategy-RVI/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_rvi_tick]: https://github.com/EA31337/Strategy-RVI/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_sar_check]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Check+branch:master
[ghim_s_sar_check]: https://github.com/EA31337/Strategy-SAR/workflows/Check/badge.svg?branch=master
[ghlm_s_sar_lint]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Lint+branch:master
[ghim_s_sar_lint]: https://github.com/EA31337/Strategy-SAR/workflows/Lint/badge.svg?branch=master
[ghlm_s_sar_compile]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Compile+branch:master
[ghim_s_sar_compile]: https://github.com/EA31337/Strategy-SAR/workflows/Compile/badge.svg?branch=master
[ghlm_s_sar_bt]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Backtest+branch:master
[ghim_s_sar_bt]: https://github.com/EA31337/Strategy-SAR/workflows/Backtest/badge.svg?branch=master

[ghld_s_sar_check]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Check+branch:dev
[ghid_s_sar_check]: https://github.com/EA31337/Strategy-SAR/workflows/Check/badge.svg?branch=dev
[ghld_s_sar_lint]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Lint+branch:dev
[ghid_s_sar_lint]: https://github.com/EA31337/Strategy-SAR/workflows/Lint/badge.svg?branch=dev
[ghld_s_sar_compile]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Compile+branch:dev
[ghid_s_sar_compile]: https://github.com/EA31337/Strategy-SAR/workflows/Compile/badge.svg?branch=dev
[ghld_s_sar_bt]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:Backtest+branch:dev
[ghid_s_sar_bt]: https://github.com/EA31337/Strategy-SAR/workflows/Backtest/badge.svg?branch=dev

[ghld_s_sar_indi]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_sar_indi]: https://github.com/EA31337/Strategy-SAR/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_sar_sopen]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_sar_sopen]: https://github.com/EA31337/Strategy-SAR/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_sar_sclose]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_sar_sclose]: https://github.com/EA31337/Strategy-SAR/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_sar_tick]: https://github.com/EA31337/Strategy-SAR/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_sar_tick]: https://github.com/EA31337/Strategy-SAR/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_svebb_check]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Check+branch:master
[ghim_s_svebb_check]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Check/badge.svg?branch=master
[ghlm_s_svebb_lint]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Lint+branch:master
[ghim_s_svebb_lint]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Lint/badge.svg?branch=master
[ghlm_s_svebb_compile]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Compile+branch:master
[ghim_s_svebb_compile]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Compile/badge.svg?branch=master
[ghlm_s_svebb_bt]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Backtest+branch:master
[ghim_s_svebb_bt]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Backtest/badge.svg?branch=master

[ghld_s_svebb_check]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Check+branch:dev
[ghid_s_svebb_check]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Check/badge.svg?branch=dev
[ghld_s_svebb_lint]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Lint+branch:dev
[ghid_s_svebb_lint]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Lint/badge.svg?branch=dev
[ghld_s_svebb_compile]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Compile+branch:dev
[ghid_s_svebb_compile]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Compile/badge.svg?branch=dev
[ghld_s_svebb_bt]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:Backtest+branch:dev
[ghid_s_svebb_bt]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Backtest/badge.svg?branch=dev

[ghld_s_svebb_indi]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_svebb_indi]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_svebb_sopen]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_svebb_sopen]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_svebb_sclose]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_svebb_sclose]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_svebb_tick]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_svebb_tick]: https://github.com/EA31337/Strategy-SVE_Bollinger_Bands/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_stddev_check]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Check+branch:master
[ghim_s_stddev_check]: https://github.com/EA31337/Strategy-StdDev/workflows/Check/badge.svg?branch=master
[ghlm_s_stddev_lint]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Lint+branch:master
[ghim_s_stddev_lint]: https://github.com/EA31337/Strategy-StdDev/workflows/Lint/badge.svg?branch=master
[ghlm_s_stddev_compile]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Compile+branch:master
[ghim_s_stddev_compile]: https://github.com/EA31337/Strategy-StdDev/workflows/Compile/badge.svg?branch=master
[ghlm_s_stddev_bt]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Backtest+branch:master
[ghim_s_stddev_bt]: https://github.com/EA31337/Strategy-StdDev/workflows/Backtest/badge.svg?branch=master

[ghld_s_stddev_check]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Check+branch:dev
[ghid_s_stddev_check]: https://github.com/EA31337/Strategy-StdDev/workflows/Check/badge.svg?branch=dev
[ghld_s_stddev_lint]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Lint+branch:dev
[ghid_s_stddev_lint]: https://github.com/EA31337/Strategy-StdDev/workflows/Lint/badge.svg?branch=dev
[ghld_s_stddev_compile]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Compile+branch:dev
[ghid_s_stddev_compile]: https://github.com/EA31337/Strategy-StdDev/workflows/Compile/badge.svg?branch=dev
[ghld_s_stddev_bt]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:Backtest+branch:dev
[ghid_s_stddev_bt]: https://github.com/EA31337/Strategy-StdDev/workflows/Backtest/badge.svg?branch=dev

[ghld_s_stddev_indi]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_stddev_indi]: https://github.com/EA31337/Strategy-StdDev/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_stddev_sopen]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_stddev_sopen]: https://github.com/EA31337/Strategy-StdDev/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_stddev_sclose]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_stddev_sclose]: https://github.com/EA31337/Strategy-StdDev/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_stddev_tick]: https://github.com/EA31337/Strategy-StdDev/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_stddev_tick]: https://github.com/EA31337/Strategy-StdDev/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_stoch_check]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Check+branch:master
[ghim_s_stoch_check]: https://github.com/EA31337/Strategy-Stochastic/workflows/Check/badge.svg?branch=master
[ghlm_s_stoch_lint]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Lint+branch:master
[ghim_s_stoch_lint]: https://github.com/EA31337/Strategy-Stochastic/workflows/Lint/badge.svg?branch=master
[ghlm_s_stoch_compile]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Compile+branch:master
[ghim_s_stoch_compile]: https://github.com/EA31337/Strategy-Stochastic/workflows/Compile/badge.svg?branch=master
[ghlm_s_stoch_bt]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Backtest+branch:master
[ghim_s_stoch_bt]: https://github.com/EA31337/Strategy-Stochastic/workflows/Backtest/badge.svg?branch=master

[ghld_s_stoch_check]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Check+branch:dev
[ghid_s_stoch_check]: https://github.com/EA31337/Strategy-Stochastic/workflows/Check/badge.svg?branch=dev
[ghld_s_stoch_lint]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Lint+branch:dev
[ghid_s_stoch_lint]: https://github.com/EA31337/Strategy-Stochastic/workflows/Lint/badge.svg?branch=dev
[ghld_s_stoch_compile]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Compile+branch:dev
[ghid_s_stoch_compile]: https://github.com/EA31337/Strategy-Stochastic/workflows/Compile/badge.svg?branch=dev
[ghld_s_stoch_bt]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:Backtest+branch:dev
[ghid_s_stoch_bt]: https://github.com/EA31337/Strategy-Stochastic/workflows/Backtest/badge.svg?branch=dev

[ghld_s_stoch_indi]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_stoch_indi]: https://github.com/EA31337/Strategy-Stochastic/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_stoch_sopen]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_stoch_sopen]: https://github.com/EA31337/Strategy-Stochastic/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_stoch_sclose]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_stoch_sclose]: https://github.com/EA31337/Strategy-Stochastic/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_stoch_tick]: https://github.com/EA31337/Strategy-Stochastic/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_stoch_tick]: https://github.com/EA31337/Strategy-Stochastic/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_tmabsvet_check]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Check+branch:master
[ghim_s_tmabsvet_check]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Check/badge.svg?branch=master
[ghlm_s_tmabsvet_lint]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Lint+branch:master
[ghim_s_tmabsvet_lint]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Lint/badge.svg?branch=master
[ghlm_s_tmabsvet_compile]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Compile+branch:master
[ghim_s_tmabsvet_compile]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Compile/badge.svg?branch=master
[ghlm_s_tmabsvet_bt]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Backtest+branch:master
[ghim_s_tmabsvet_bt]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Backtest/badge.svg?branch=master

[ghld_s_tmabsvet_check]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Check+branch:dev
[ghid_s_tmabsvet_check]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Check/badge.svg?branch=dev
[ghld_s_tmabsvet_lint]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Lint+branch:dev
[ghid_s_tmabsvet_lint]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Lint/badge.svg?branch=dev
[ghld_s_tmabsvet_compile]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Compile+branch:dev
[ghid_s_tmabsvet_compile]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Compile/badge.svg?branch=dev
[ghld_s_tmabsvet_bt]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:Backtest+branch:dev
[ghid_s_tmabsvet_bt]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Backtest/badge.svg?branch=dev

[ghld_s_tmabsvet_indi]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_tmabsvet_indi]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_tmabsvet_sopen]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_tmabsvet_sopen]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_tmabsvet_sclose]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_tmabsvet_sclose]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_tmabsvet_tick]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_tmabsvet_tick]: https://github.com/EA31337/Strategy-TMA_Band_SVE_True/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_tmatrue_check]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Check+branch:master
[ghim_s_tmatrue_check]: https://github.com/EA31337/Strategy-TMA_True/workflows/Check/badge.svg?branch=master
[ghlm_s_tmatrue_lint]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Lint+branch:master
[ghim_s_tmatrue_lint]: https://github.com/EA31337/Strategy-TMA_True/workflows/Lint/badge.svg?branch=master
[ghlm_s_tmatrue_compile]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Compile+branch:master
[ghim_s_tmatrue_compile]: https://github.com/EA31337/Strategy-TMA_True/workflows/Compile/badge.svg?branch=master
[ghlm_s_tmatrue_bt]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Backtest+branch:master
[ghim_s_tmatrue_bt]: https://github.com/EA31337/Strategy-TMA_True/workflows/Backtest/badge.svg?branch=master

[ghld_s_tmatrue_check]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Check+branch:dev
[ghid_s_tmatrue_check]: https://github.com/EA31337/Strategy-TMA_True/workflows/Check/badge.svg?branch=dev
[ghld_s_tmatrue_lint]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Lint+branch:dev
[ghid_s_tmatrue_lint]: https://github.com/EA31337/Strategy-TMA_True/workflows/Lint/badge.svg?branch=dev
[ghld_s_tmatrue_compile]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Compile+branch:dev
[ghid_s_tmatrue_compile]: https://github.com/EA31337/Strategy-TMA_True/workflows/Compile/badge.svg?branch=dev
[ghld_s_tmatrue_bt]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:Backtest+branch:dev
[ghid_s_tmatrue_bt]: https://github.com/EA31337/Strategy-TMA_True/workflows/Backtest/badge.svg?branch=dev

[ghld_s_tmatrue_indi]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_tmatrue_indi]: https://github.com/EA31337/Strategy-TMA_True/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_tmatrue_sopen]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_tmatrue_sopen]: https://github.com/EA31337/Strategy-TMA_True/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_tmatrue_sclose]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_tmatrue_sclose]: https://github.com/EA31337/Strategy-TMA_True/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_tmatrue_tick]: https://github.com/EA31337/Strategy-TMA_True/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_tmatrue_tick]: https://github.com/EA31337/Strategy-TMA_True/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_wpr_check]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Check+branch:master
[ghim_s_wpr_check]: https://github.com/EA31337/Strategy-WPR/workflows/Check/badge.svg?branch=master
[ghlm_s_wpr_lint]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Lint+branch:master
[ghim_s_wpr_lint]: https://github.com/EA31337/Strategy-WPR/workflows/Lint/badge.svg?branch=master
[ghlm_s_wpr_compile]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Compile+branch:master
[ghim_s_wpr_compile]: https://github.com/EA31337/Strategy-WPR/workflows/Compile/badge.svg?branch=master
[ghlm_s_wpr_bt]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Backtest+branch:master
[ghim_s_wpr_bt]: https://github.com/EA31337/Strategy-WPR/workflows/Backtest/badge.svg?branch=master

[ghld_s_wpr_check]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Check+branch:dev
[ghid_s_wpr_check]: https://github.com/EA31337/Strategy-WPR/workflows/Check/badge.svg?branch=dev
[ghld_s_wpr_lint]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Lint+branch:dev
[ghid_s_wpr_lint]: https://github.com/EA31337/Strategy-WPR/workflows/Lint/badge.svg?branch=dev
[ghld_s_wpr_compile]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Compile+branch:dev
[ghid_s_wpr_compile]: https://github.com/EA31337/Strategy-WPR/workflows/Compile/badge.svg?branch=dev
[ghld_s_wpr_bt]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:Backtest+branch:dev
[ghid_s_wpr_bt]: https://github.com/EA31337/Strategy-WPR/workflows/Backtest/badge.svg?branch=dev

[ghld_s_wpr_indi]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_wpr_indi]: https://github.com/EA31337/Strategy-WPR/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_wpr_sopen]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_wpr_sopen]: https://github.com/EA31337/Strategy-WPR/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_wpr_sclose]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_wpr_sclose]: https://github.com/EA31337/Strategy-WPR/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_wpr_tick]: https://github.com/EA31337/Strategy-WPR/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_wpr_tick]: https://github.com/EA31337/Strategy-WPR/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_zigzag_check]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Check+branch:master
[ghim_s_zigzag_check]: https://github.com/EA31337/Strategy-ZigZag/workflows/Check/badge.svg?branch=master
[ghlm_s_zigzag_lint]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Lint+branch:master
[ghim_s_zigzag_lint]: https://github.com/EA31337/Strategy-ZigZag/workflows/Lint/badge.svg?branch=master
[ghlm_s_zigzag_compile]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Compile+branch:master
[ghim_s_zigzag_compile]: https://github.com/EA31337/Strategy-ZigZag/workflows/Compile/badge.svg?branch=master
[ghlm_s_zigzag_bt]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Backtest+branch:master
[ghim_s_zigzag_bt]: https://github.com/EA31337/Strategy-ZigZag/workflows/Backtest/badge.svg?branch=master

[ghld_s_zigzag_check]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Check+branch:dev
[ghid_s_zigzag_check]: https://github.com/EA31337/Strategy-ZigZag/workflows/Check/badge.svg?branch=dev
[ghld_s_zigzag_lint]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Lint+branch:dev
[ghid_s_zigzag_lint]: https://github.com/EA31337/Strategy-ZigZag/workflows/Lint/badge.svg?branch=dev
[ghld_s_zigzag_compile]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Compile+branch:dev
[ghid_s_zigzag_compile]: https://github.com/EA31337/Strategy-ZigZag/workflows/Compile/badge.svg?branch=dev
[ghld_s_zigzag_bt]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:Backtest+branch:dev
[ghid_s_zigzag_bt]: https://github.com/EA31337/Strategy-ZigZag/workflows/Backtest/badge.svg?branch=dev

[ghld_s_zigzag_indi]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_zigzag_indi]: https://github.com/EA31337/Strategy-ZigZag/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_zigzag_sopen]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_zigzag_sopen]: https://github.com/EA31337/Strategy-ZigZag/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_zigzag_sclose]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_zigzag_sclose]: https://github.com/EA31337/Strategy-ZigZag/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_zigzag_tick]: https://github.com/EA31337/Strategy-ZigZag/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_zigzag_tick]: https://github.com/EA31337/Strategy-ZigZag/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick

[ghlm_s_sawa_check]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:Check+branch:master
[ghim_s_sawa_check]: https://github.com/EA31337/Strategy-SAWA/workflows/Check/badge.svg?branch=master
[ghlm_s_sawa_lint]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:Lint+branch:master
[ghim_s_sawa_lint]: https://github.com/EA31337/Strategy-SAWA/workflows/Lint/badge.svg?branch=master
[ghlm_s_sawa_compile]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:Compile+branch:master
[ghim_s_sawa_compile]: https://github.com/EA31337/Strategy-SAWA/workflows/Compile/badge.svg?branch=master
[ghlm_s_sawa_bt]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:Backtest+branch:master
[ghim_s_sawa_bt]: https://github.com/EA31337/Strategy-SAWA/workflows/Backtest/badge.svg?branch=master

[ghld_s_sawa_check]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:Check+branch:dev
[ghid_s_sawa_check]: https://github.com/EA31337/Strategy-SAWA/workflows/Check/badge.svg?branch=dev
[ghld_s_sawa_lint]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:Lint+branch:dev
[ghid_s_sawa_lint]: https://github.com/EA31337/Strategy-SAWA/workflows/Lint/badge.svg?branch=dev
[ghld_s_sawa_compile]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:Compile+branch:dev
[ghid_s_sawa_compile]: https://github.com/EA31337/Strategy-SAWA/workflows/Compile/badge.svg?branch=dev
[ghld_s_sawa_bt]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:Backtest+branch:dev
[ghid_s_sawa_bt]: https://github.com/EA31337/Strategy-SAWA/workflows/Backtest/badge.svg?branch=dev

[ghld_s_sawa_indi]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:"Optimize+Indicator+params"+branch:optimize-indi
[ghid_s_sawa_indi]: https://github.com/EA31337/Strategy-SAWA/workflows/Optimize%20Indicator%20params/badge.svg?branch=optimize-indi
[ghld_s_sawa_sopen]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:"Optimize+SignalOpen+params"+branch:optimize-signalopen
[ghid_s_sawa_sopen]: https://github.com/EA31337/Strategy-SAWA/workflows/Optimize%20SignalOpen%20params/badge.svg?branch=optimize-signalopen
[ghld_s_sawa_sclose]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:"Optimize+SignalClose+params"+branch:optimize-signalclose
[ghid_s_sawa_sclose]: https://github.com/EA31337/Strategy-SAWA/workflows/Optimize%20SignalClose%20params/badge.svg?branch=optimize-signalclose
[ghld_s_sawa_tick]: https://github.com/EA31337/Strategy-SAWA/actions?query=workflow:"Optimize+Tick+params"+branch:optimize-tick
[ghid_s_sawa_tick]: https://github.com/EA31337/Strategy-SAWA/workflows/Optimize%20Tick%20params/badge.svg?branch=optimize-tick
