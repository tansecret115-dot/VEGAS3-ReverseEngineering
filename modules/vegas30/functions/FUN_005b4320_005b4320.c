/* Module: vegas30.exe
   Function: FUN_005b4320
   Address: 005b4320
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_005b4320(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  bool bVar8;
  LPSTREAM local_38;
  int local_34;
  int local_30;
  HGLOBAL local_2c;
  HGLOBAL local_28;
  int local_24;
  undefined4 local_20 [4];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  local_24 = 0;
  if (*(int *)(param_1 + 0x3f0) == 0) {
    return -0x7fffbffd;
  }
  if (DAT_00649454 == 0) {
    return 1;
  }
  local_30 = 0;
  iVar1 = FUN_005bad70(*(int *)(param_1 + 0x3f0),&local_30);
  if (iVar1 < 0) {
    return iVar1;
  }
  local_38 = (LPSTREAM)0x0;
  iVar1 = FUN_005bad30(0,1,&local_38);
  if (iVar1 < 0) {
    return iVar1;
  }
  local_34 = 0;
  if (param_2 == -1) {
    iVar1 = FUN_005e9e80(local_38,param_5,param_4,&local_34);
  }
  else {
    iVar1 = FUN_005eaac0(local_38,*(undefined4 *)(param_1 + 0x3b4),param_2,param_3,param_4,0,
                         &local_34);
  }
  if (iVar1 < 0) goto LAB_005b45b0;
  if (local_30 == local_34) {
    local_28 = (HGLOBAL)0x0;
    iVar1 = GetHGlobalFromStream(*(LPSTREAM *)(param_1 + 0x3f0),&local_28);
    if (iVar1 < 0) goto LAB_005b45b0;
    local_2c = (HGLOBAL)0x0;
    iVar1 = GetHGlobalFromStream(local_38,&local_2c);
    if (iVar1 < 0) goto LAB_005b45b0;
    iVar1 = -0x7ff8fffa;
    pbVar2 = GlobalLock(local_28);
    if (pbVar2 == (byte *)0x0) goto LAB_005b45b0;
    pbVar3 = GlobalLock(local_2c);
    if (pbVar3 != (byte *)0x0) {
      iVar1 = 0;
      bVar7 = false;
      iVar4 = 0;
      bVar8 = true;
      iVar5 = local_30;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar7 = *pbVar2 < *pbVar3;
        bVar8 = *pbVar2 == *pbVar3;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar4 != 0) {
        local_24 = 1;
      }
      GlobalUnlock(local_2c);
    }
    GlobalUnlock(local_28);
  }
  else {
    local_24 = 1;
  }
  if ((-1 < iVar1) && (local_24 != 0)) {
    if (param_6 != (int *)0x0) {
      (**(code **)(*param_6 + 0x14))();
    }
    *(undefined4 *)(param_1 + 0x3f4) = 1;
    puVar6 = local_20;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    if (param_2 == -1) {
      iVar1 = 0x219;
      local_20[0] = 0x78666b74;
      iStack_10 = *(int *)(param_5 + 0x18);
      iStack_c = param_4;
    }
    else {
      if (param_2 == 1) {
        iVar1 = param_3 + 0xe5;
      }
      else {
        iVar1 = param_3;
        if (param_2 == 4) {
          iVar1 = param_3 + 0x1b8;
        }
      }
      iStack_c = param_2;
      local_20[0] = 0x2066786d;
      iStack_10 = param_3;
      iStack_8 = param_4;
    }
    iVar5 = *(int *)(param_1 + 0x428) + 1;
    *(int *)(param_1 + 0x428) = iVar5;
    iVar1 = FUN_005b53a0(iVar1,iVar5,0,0);
    if ((((-1 < iVar1) && (iVar1 = FUN_005b5820(local_20), -1 < iVar1)) &&
        (iVar1 = FUN_005b5890(), -1 < iVar1)) && (iVar1 = FUN_005b5330(), -1 < iVar1)) {
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      FUN_005b3ea0(*(undefined4 *)(param_1 + 0x3b4),1);
      FUN_005bad50(*(undefined4 *)(param_1 + 0x3f0));
      *(LPSTREAM *)(param_1 + 0x3f0) = local_38;
      return 0;
    }
  }
LAB_005b45b0:
  if (local_38 != (LPSTREAM)0x0) {
    FUN_005bad50(local_38);
  }
  return iVar1;
}


