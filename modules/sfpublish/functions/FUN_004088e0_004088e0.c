/* Module: sfpublish.dll
   Function: FUN_004088e0
   Address: 004088e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004088e0(void *this,RECT *param_1,HRGN param_2,UINT param_3)

{
  RedrawWindow(*(HWND *)this,param_1,param_2,param_3);
  return;
}


