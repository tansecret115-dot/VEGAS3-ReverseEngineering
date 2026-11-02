/* Module: pngu3266.dll
   Function: GetCurrentTimeval
   Address: 60611f74
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: struct _RMATimeval __thiscall XPNTimer::GetCurrentTimeval(void) */

undefined4 __thiscall XPNTimer::GetCurrentTimeval(XPNTimer *this)

{
  undefined4 in_stack_00000004;
  
                    /* 0x21f74  1169  ?GetCurrentTimeval@XPNTimer@@QAE?AU_RMATimeval@@XZ */
  (**(code **)(*(int *)m_scheduler + 0x18))(m_scheduler);
  return in_stack_00000004;
}


