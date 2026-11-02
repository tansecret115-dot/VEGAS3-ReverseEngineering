/* Module: encn3260.dll
   Function: FUN_664b59c0
   Address: 664b59c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b59c0(uint *param_1,DWORD *param_2)

{
  int iVar1;
  LPBITMAPINFO ptVar2;
  
  if (((param_1 != (uint *)0x0) && ((*param_1 & 0x100) != 0)) && (param_2 != (DWORD *)0x0)) {
    FUN_664b5760((LPBITMAPINFO)(param_1 + 4),(LPCSTR)param_1[3]);
    ptVar2 = (LPBITMAPINFO)(param_1 + 4);
    for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = (ptVar2->bmiHeader).biSize;
      ptVar2 = (LPBITMAPINFO)&(ptVar2->bmiHeader).biWidth;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  return 0x80070057;
}


