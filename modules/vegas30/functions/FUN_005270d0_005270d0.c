/* Module: vegas30.exe
   Function: FUN_005270d0
   Address: 005270d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005270d0(int param_1,HGLOBAL param_2)

{
  HGLOBAL pvVar1;
  undefined4 uVar2;
  int iVar3;
  LPVOID pvVar4;
  SIZE_T SVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  int *local_23c;
  HGLOBAL local_238;
  HGLOBAL local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220 [4];
  uchar local_210 [260];
  undefined4 local_10c;
  undefined4 local_108;
  uchar local_104 [260];
  
  ppiVar7 = &local_23c;
  uVar2 = FUN_005256c0(param_1);
  FUN_0050a0a0(uVar2,ppiVar7);
  iVar3 = FUN_0050a040(param_2,local_23c);
  if (iVar3 != 0) {
    param_2 = (HGLOBAL)FUN_005256c0(param_1);
  }
  uVar2 = 5;
  local_238 = param_2;
  if (*(int *)(param_1 + 0x104) == 5) {
    uVar2 = 6;
  }
  else if (*(int *)(param_1 + 0x104) == 6) {
    uVar2 = 7;
  }
  while( true ) {
    iVar3 = FUN_00526890(param_1,local_104,0x104);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = FUN_005254d0(param_1,param_2,local_104,&local_230);
    local_10c = uVar2;
    if (iVar3 != 0) break;
    iVar3 = FUN_005268e0(param_1,local_104);
    if (-1 < iVar3) {
      local_238 = (HGLOBAL)0x0;
      local_23c = (int *)0x0;
      iVar3 = FUN_00525e10(param_1,&local_23c,&local_238);
      if (iVar3 < 0) {
        return iVar3;
      }
      puVar6 = local_220;
      for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_220[1] = local_22c;
      local_220[2] = local_228;
      local_220[0] = local_230;
      local_220[3] = local_224;
      _mbscpy(local_210,local_104);
      local_108 = FUN_00526de0(param_1);
      pvVar1 = local_238;
      pvVar4 = GlobalLock(local_238);
      SVar5 = GlobalSize(pvVar1);
      iVar3 = _FXPackage_SavePackageData_16(pvVar4,SVar5,local_220,&DAT_0061a6d0);
      GlobalUnlock(pvVar1);
      if (local_23c != (int *)0x0) {
        (**(code **)(*local_23c + 8))(local_23c);
      }
      if (local_238 != (HGLOBAL)0x0) {
        GlobalFree(local_238);
      }
      return iVar3;
    }
  }
  puVar6 = local_220;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  _mbscpy(local_210,local_104);
  local_108 = FUN_00526de0(param_1);
  local_234 = (HGLOBAL)0x0;
  local_23c = (int *)0x0;
  iVar3 = FUN_00525e10(param_1,&local_23c,&local_234);
  pvVar1 = local_234;
  if (iVar3 < 0) {
    return iVar3;
  }
  pvVar4 = GlobalLock(local_234);
  SVar5 = GlobalSize(pvVar1);
  iVar3 = _FXPackage_SavePackageData_16(pvVar4,SVar5,local_220,&DAT_0061a6d0);
  GlobalUnlock(pvVar1);
  if (local_23c != (int *)0x0) {
    (**(code **)(*local_23c + 8))(local_23c);
  }
  if (local_234 != (HGLOBAL)0x0) {
    GlobalFree(local_234);
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = FUN_00526d10(param_1,local_238,local_220);
  return iVar3;
}


