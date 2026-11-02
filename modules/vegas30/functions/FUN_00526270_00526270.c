/* Module: vegas30.exe
   Function: FUN_00526270
   Address: 00526270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00526270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HRESULT HVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  HGLOBAL local_240;
  LPSTREAM local_23c;
  undefined4 local_238 [4];
  uchar local_228 [268];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  uchar local_10c [268];
  
  FUN_00508ba0(param_2,&local_11c);
  puVar4 = local_238;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_240 = (HGLOBAL)0x0;
  _mbscpy(local_228,local_10c);
  local_238[1] = local_118;
  local_238[0] = local_11c;
  local_238[2] = local_114;
  local_238[3] = local_110;
  local_240 = (HGLOBAL)0x0;
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,0,&local_23c);
  if (-1 < HVar1) {
    iVar3 = _FXPackage_LoadPackageData_8(local_23c,local_238);
    GetHGlobalFromStream(local_23c,&local_240);
    if ((iVar3 < 0) && (local_240 != (HGLOBAL)0x0)) {
      GlobalFree(local_240);
      local_240 = (HGLOBAL)0x0;
    }
    (*local_23c->lpVtbl->Release)(local_23c);
    if (-1 < iVar3) {
      iVar3 = FUN_00525f50(param_1,local_240,param_3,param_4);
      goto LAB_00526460;
    }
  }
  iVar3 = _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 8),0x13b,3,0x8004e031,local_10c,0);
  if (iVar3 != 6) {
    if (iVar3 == 0x65) {
      FUN_005257a0(param_1,param_2);
      FUN_00525480(param_1,1);
    }
    FUN_00526cc0(param_1);
    return -0x7fffbffc;
  }
  local_240 = (HGLOBAL)0x0;
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,0,&local_23c);
  if (-1 < HVar1) {
    iVar3 = _FXPackage_LoadPackageData_8(local_23c,local_238);
    GetHGlobalFromStream(local_23c,&local_240);
    if ((iVar3 < 0) && (local_240 != (HGLOBAL)0x0)) {
      GlobalFree(local_240);
      local_240 = (HGLOBAL)0x0;
    }
    (*local_23c->lpVtbl->Release)(local_23c);
  }
  iVar3 = FUN_00525f50(param_1,local_240,param_3,param_4);
  if (*(int *)(*(int *)(param_1 + 0x84) + 4) == 0) {
    uVar2 = _SfGetString_8(DAT_00647204,0x4f5b);
    SfMsgBox(DAT_00647624,0x30,uVar2);
  }
LAB_00526460:
  *(undefined4 *)(param_1 + 0x124) = 1;
  if (-1 < iVar3) {
    FUN_005249d0(param_1);
    FUN_00524880(param_1);
  }
  return iVar3;
}


