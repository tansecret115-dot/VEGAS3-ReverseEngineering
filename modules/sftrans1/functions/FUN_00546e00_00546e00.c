/* Module: sftrans1.dll
   Function: FUN_00546e00
   Address: 00546e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_00546e00(LPVOID param_1,DWORD param_2,LPCSTR param_3,LPCSTR param_4,DWORD param_5,int param_6,
            int param_7,int param_8,int param_9,HWND param_10,HMENU param_11)

{
  HWND pHVar1;
  
  pHVar1 = CreateWindowExA(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                           param_11,*(HINSTANCE *)(DAT_00622478 + 8),param_1);
  *(HWND *)((int)param_1 + 4) = pHVar1;
  return (-(uint)(pHVar1 != (HWND)0x0) & 0x7ffb1ff1) + 0x8004e00f;
}


