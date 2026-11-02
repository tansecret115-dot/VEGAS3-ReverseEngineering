/* Module: pngu3266.dll
   Function: GetActiveWindow
   Address: 605f950b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNWindow * __cdecl CPNWindow::GetActiveWindow(void) */

CPNWindow * __cdecl CPNWindow::GetActiveWindow(void)

{
  void *this;
  HWND pHVar1;
  CPNWindow *pCVar2;
  
                    /* 0x950b  1083  ?GetActiveWindow@CPNWindow@@SAPAV1@XZ */
  this = (void *)PNGuiGetMapHandle();
  pHVar1 = ::GetActiveWindow();
  pCVar2 = (CPNWindow *)FUN_60619de0(this,(uint)pHVar1);
  return pCVar2;
}


