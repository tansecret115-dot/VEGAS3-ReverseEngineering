/* Module: sctplug.dll
   Function: FUN_00409af0
   Address: 00409af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409af0(HWND param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *param_3;
  local_4 = param_2;
  iVar1 = FUN_0040c360(DAT_0043ca5c,(LPCSTR)0x4b0,param_1,(DLGPROC)&LAB_00409b50,(LPARAM)&local_8);
  if (iVar1 == 1) {
    *param_3 = local_8;
    return 0;
  }
  return 0x8004e00c;
}


