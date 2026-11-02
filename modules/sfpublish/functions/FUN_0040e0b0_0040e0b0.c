/* Module: sfpublish.dll
   Function: FUN_0040e0b0
   Address: 0040e0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0040e0b0(void *this,LPCSTR param_1,HWND param_2,int *param_3,LPCSTR param_4,DWORD param_5,
            DWORD param_6,HMENU param_7,LPVOID param_8)

{
  HWND pHVar1;
  
  if (param_3 == (int *)0x0) {
    param_3 = &DAT_0043f2b0;
  }
  pHVar1 = CreateWindowExA(param_6,param_1,param_4,param_5,*param_3,param_3[1],param_3[2] - *param_3
                           ,param_3[3] - param_3[1],param_2,param_7,DAT_0044175c,param_8);
  *(HWND *)this = pHVar1;
  return;
}


