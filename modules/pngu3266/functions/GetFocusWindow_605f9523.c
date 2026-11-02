/* Module: pngu3266.dll
   Function: GetFocusWindow
   Address: 605f9523
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNWindow * __cdecl CPNWindow::GetFocusWindow(void) */

CPNWindow * __cdecl CPNWindow::GetFocusWindow(void)

{
  void *this;
  HWND pHVar1;
  CPNWindow *pCVar2;
  
                    /* 0x9523  1193  ?GetFocusWindow@CPNWindow@@SAPAV1@XZ */
  this = (void *)PNGuiGetMapHandle();
  pHVar1 = GetFocus();
  pCVar2 = (CPNWindow *)FUN_60619de0(this,(uint)pHVar1);
  return pCVar2;
}


