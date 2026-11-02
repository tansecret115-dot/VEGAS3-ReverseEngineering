/* Module: sfmarket2.dll
   Function: FUN_0040a780
   Address: 0040a780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040a780(void *this,RECT *param_1,HRGN param_2,UINT param_3)

{
  RedrawWindow(*(HWND *)this,param_1,param_2,param_3);
  return;
}


