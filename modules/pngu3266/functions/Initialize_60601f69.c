/* Module: pngu3266.dll
   Function: Initialize
   Address: 60601f69
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNTimer::Initialize(void) */

void __cdecl CPNTimer::Initialize(void)

{
  void *this;
  
                    /* 0x11f69  1469  ?Initialize@CPNTimer@@SAXXZ */
  this = operator_new(0x5c);
  if (this == (void *)0x0) {
    XPNTimer::m_scheduler = (RMAScheduler *)0x0;
  }
  else {
    XPNTimer::m_scheduler = (RMAScheduler *)FUN_6061dc90(this,0);
  }
  (**(code **)(*(int *)XPNTimer::m_scheduler + 4))(XPNTimer::m_scheduler);
  FUN_6061e550(XPNTimer::m_scheduler);
  return;
}


