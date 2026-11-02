/* Module: pngu3266.dll
   Function: GetPNWindow
   Address: 605f9f2d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static class CPNWindow * __cdecl CPNWindow::GetPNWindow(void *) */

CPNWindow * __cdecl CPNWindow::GetPNWindow(void *param_1)

{
  void *this;
  CPNWindow *pCVar1;
  
                    /* 0x9f2d  1285  ?GetPNWindow@CPNWindow@@SAPAV1@PAX@Z */
  this = (void *)PNGuiGetMapHandle();
  pCVar1 = (CPNWindow *)FUN_60619de0(this,(uint)param_1);
  return pCVar1;
}


