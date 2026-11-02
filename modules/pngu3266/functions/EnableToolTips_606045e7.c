/* Module: pngu3266.dll
   Function: EnableToolTips
   Address: 606045e7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNTipManager::EnableToolTips(int) */

void __cdecl CPNTipManager::EnableToolTips(int param_1)

{
                    /* 0x145e7  1035  ?EnableToolTips@CPNTipManager@@SAXH@Z */
  m_tipsEnabled = param_1;
  if (DAT_60649ddc != (HWND)0x0) {
    SendMessageA(DAT_60649ddc,0x401,param_1,0);
  }
  return;
}


