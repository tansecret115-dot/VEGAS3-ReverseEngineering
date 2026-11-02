/* Module: pngu3266.dll
   Function: Cleanup
   Address: 606045a1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNTipManager::Cleanup(void) */

void __cdecl CPNTipManager::Cleanup(void)

{
                    /* 0x145a1  852  ?Cleanup@CPNTipManager@@SAXXZ */
  UnhookWindowsHookEx(DAT_60649dd8);
  DAT_60649dd8 = (HHOOK)0x0;
  SetWindowLongA(DAT_60649ddc,-4,DAT_60649de4);
  DAT_60649de4 = 0;
  if (DAT_60649ddc != (HWND)0x0) {
    DestroyWindow(DAT_60649ddc);
  }
  DAT_60649ddc = (HWND)0x0;
  return;
}


