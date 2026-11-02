/* Module: pngu3266.dll
   Function: Cleanup
   Address: 60601f98
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNTimer::Cleanup(void) */

void __cdecl CPNTimer::Cleanup(void)

{
                    /* 0x11f98  851  ?Cleanup@CPNTimer@@SAXXZ */
  FUN_6061e660((int)XPNTimer::m_scheduler);
  (**(code **)(*(int *)XPNTimer::m_scheduler + 8))(XPNTimer::m_scheduler);
  XPNTimer::m_scheduler = (RMAScheduler *)0x0;
  return;
}


