/* Module: vegas30.exe
   Function: FUN_005a45f0
   Address: 005a45f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a45f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  HGLOBAL local_8;
  LPSTREAM local_4;
  
  local_8 = (HGLOBAL)0x0;
  iVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,0,&local_4);
  if (-1 < iVar1) {
    iVar1 = _FXPackage_LoadPackageData_8(local_4,param_1);
    GetHGlobalFromStream(local_4,&local_8);
    if ((iVar1 < 0) && (local_8 != (HGLOBAL)0x0)) {
      GlobalFree(local_8);
      local_8 = (HGLOBAL)0x0;
    }
    (*local_4->lpVtbl->Release)(local_4);
  }
  if (-1 < iVar1) {
    iVar1 = FUN_005a4370(param_2,local_8,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return iVar1;
}


