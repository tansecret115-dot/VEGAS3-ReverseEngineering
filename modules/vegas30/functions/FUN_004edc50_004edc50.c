/* Module: vegas30.exe
   Function: FUN_004edc50
   Address: 004edc50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004edc50(undefined4 param_1,int *param_2,int *param_3)

{
  HINSTANCE pHVar1;
  undefined4 uVar2;
  LPCSTR lpFile;
  
  if (((((param_2 != (int *)0x0) && (*param_2 != 0)) &&
       (lpFile = *(LPCSTR *)param_2[2], (*(uint *)(lpFile + 0x210) & 0x10000) != 0)) &&
      (lpFile != (LPCSTR)0x0)) ||
     (((param_3 != (int *)0x0 && (*param_3 != 0)) &&
      ((lpFile = *(LPCSTR *)param_3[2], (*(uint *)(lpFile + 0x210) & 0x10000) != 0 &&
       (lpFile != (LPCSTR)0x0)))))) {
    pHVar1 = ShellExecuteA(DAT_00647624,"explore",lpFile,(LPCSTR)0x0,(LPCSTR)0x0,10);
    if ((HINSTANCE)0x20 < pHVar1) {
      return 1;
    }
    uVar2 = _SfGetString_8(DAT_00647204,0x6d8a);
    SfMsgBox(param_1,0x30,uVar2,lpFile);
  }
  return 0;
}


