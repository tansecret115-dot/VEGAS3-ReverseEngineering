/* Module: pngu3266.dll
   Function: Initialize
   Address: 60604528
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNTipManager::Initialize(void) */

void __cdecl CPNTipManager::Initialize(void)

{
  DWORD dwThreadId;
  HINSTANCE pHVar1;
  LPVOID lpParam;
  
                    /* 0x14528  1470  ?Initialize@CPNTipManager@@SAXXZ */
  if (DAT_60649dd8 == (HHOOK)0x0) {
    dwThreadId = GetCurrentThreadId();
    pHVar1 = (HINSTANCE)_PNGuiGetHandle_0();
    DAT_60649dd8 = SetWindowsHookExA(3,FUN_60604610,pHVar1,dwThreadId);
  }
  lpParam = (LPVOID)0x0;
  pHVar1 = (HINSTANCE)_PNGuiGetHandle_0();
  DAT_60649ddc = CreateWindowExA(0x88,s_tooltips_class32_60649258,(LPCSTR)0x0,0x80800001,-0x80000000
                                 ,-0x80000000,-0x80000000,-0x80000000,(HWND)0x0,(HMENU)0x0,pHVar1,
                                 lpParam);
  EnableToolTips(1);
  DAT_60649de4 = SetWindowLongA(DAT_60649ddc,-4,0x60604743);
  return;
}


