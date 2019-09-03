Major changes:
1. SysSetting is modified to include definition of new time-slices.
2. BY_Trans is modified to include AF for base year solar and wind.
3. VT files are completely restructured to separate different sectors.
4. This model includes I2CNER techs. The nuclear can be turned off by choosing Scen_NO_NUC scenario file.
5. Scen_ELC_CO2_BOUND is modified to allow increasing emission at the beginning.
6. Scenario file Scen_UC_Growth is added to impose growth rate limit on capacity to make the results more realistic.
7. AF for new technologies are defined in SubRes_NewTechs_Trans.
8. SubRes_NewTechs is also completely restructured to include new techs for electricity, transportation and refinery.


Some other notes:
1. Fuel prices are now considered.
2. The base year variable cost of LNG and COAL seems a bit off compared to the new capacity. Currently they are replaced with the same values from the new technologies to produce meaningful results.
3. Electricity seasonal demand curve are defined in VT_REG_ELC_JPN.

