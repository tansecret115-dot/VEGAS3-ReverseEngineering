/* Module: sfnetmedia.dll
   Function: FUN_004086c0
   Address: 004086c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004086c0(void *this,RECT *param_1,HRGN param_2,UINT param_3)

{
  RedrawWindow(*(HWND *)this,param_1,param_2,param_3);
  return;
}


