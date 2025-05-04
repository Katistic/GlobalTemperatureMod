modded class PlayerStatsPCO_current
{
    override void RegisterStat(int id, PlayerStatBase stat)
    {
        Print("[GlobalTemperatureMod] Registering stat for id " + stat.GetLabel());
        if (id == EPlayerStats_current.HEATCOMFORT)
        {
            // min of -0.4, max of 0.4, init as 0, label, flags
            super.RegisterStat(id, new PlayerStat<float>(-0.4, 0.4, 0, "HeatComfort", EPSstatsFlags.SYNCED));
        } else {
            super.RegisterStat(id, stat);
        };
    };
}