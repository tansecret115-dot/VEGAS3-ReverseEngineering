/* Module: pngu3266.dll
   Function: PNGuiHookWindowCreate
   Address: 605f61e3
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNGuiHookWindowCreate(int param_1)

{
  DWORD dwThreadId;
  HINSTANCE hmod;
  
                    /* 0x61e3  2228  PNGuiHookWindowCreate */
  if (DAT_60649970 != param_1) {
    if (DAT_6064996c == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      hmod = (HINSTANCE)_PNGuiGetHandle_0();
      DAT_6064996c = SetWindowsHookExA(5,_PNGuiFilterHook_12,hmod,dwThreadId);
    }
    DAT_60649970 = param_1;
  }
  return;
}


