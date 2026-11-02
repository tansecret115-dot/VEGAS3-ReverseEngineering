/* Module: vegas30.exe
   Function: FUN_005e2290
   Address: 005e2290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e2290(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_564 [345];
  
  *(undefined4 *)(param_2 + 0xd38) = 0;
  _SfErrorHandler_DetailsInit_0();
  puVar4 = (undefined4 *)(param_1 + 0x6c0);
  iVar2 = FUN_005e2270(param_2 + 0x23c,puVar4);
  if (iVar2 == 0) goto LAB_005e23df;
  if (*(int *)(param_2 + 0x350) == *(int *)(param_1 + 0x7d4)) {
    if ((DAT_0065ae58 & 6) == 0) {
      FUN_004eaad0(param_1,0,0x14,1);
      iVar2 = 0x159;
      DAT_0065ae58 = DAT_0065ae58 | 4;
      puVar5 = &DAT_0065ae5c;
LAB_005e2375:
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  else if ((DAT_0065ae58 & 2) == 0) {
    puVar5 = local_564;
    for (iVar2 = 0x159; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if ((DAT_0065ae58 & 4) != 0) {
      puVar5 = local_564;
      for (iVar2 = 0x159; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = &DAT_0065ae5c;
      puVar5 = (undefined4 *)(param_1 + 0x6c0);
      for (iVar2 = 0x159; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    FUN_004eaad0(param_1,0,0x13,1);
    uVar3 = DAT_0065ae58 | 2;
    uVar1 = DAT_0065ae58 & 4;
    DAT_0065ae58 = uVar3;
    if (uVar1 != 0) {
      iVar2 = 0x159;
      puVar4 = local_564;
      puVar5 = (undefined4 *)(param_1 + 0x6c0);
      goto LAB_005e2375;
    }
  }
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x35c);
  DAT_0064b114 = *(undefined4 *)(param_2 + 0x35c);
  DAT_0064767c = DAT_0064767c | 2;
  iVar2 = FUN_005d2700(param_1,param_2 + 0x23c,0,0);
  if (iVar2 < 0) {
    _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0x15,iVar2,0,0);
  }
  FUN_005733a0();
  FUN_005749b0();
  *(undefined4 *)(param_2 + 0xd4c) = 0;
  *(undefined4 *)(param_2 + 0xd50) = 1;
LAB_005e23df:
  if (*(int *)(param_2 + 0xd04) != *(int *)(param_1 + 0xc28)) {
    FUN_005b98c0(param_1,*(int *)(param_2 + 0xd04));
    *(undefined4 *)(param_2 + 0xd4c) = 0;
    *(undefined4 *)(param_2 + 0xd50) = 1;
  }
  iVar2 = lstrcmpA((LPCSTR)(param_2 + 0x24),(LPCSTR)(param_1 + 0x480));
  if (iVar2 != 0) {
    if ((DAT_0065ae58 & 8) == 0) {
      FUN_004eaad0(param_1,0,0x11,1);
      DAT_0065ae58 = DAT_0065ae58 | 8;
    }
    _mbscpy((uchar *)(param_1 + 0x480),(uchar *)(param_2 + 0x24));
    *(undefined4 *)(param_2 + 0xd4c) = 0;
    *(undefined4 *)(param_2 + 0xd50) = 1;
    *(undefined4 *)(param_2 + 0xd6c) = 1;
    *(uint *)(param_1 + 0xc2c) = *(uint *)(param_1 + 0xc2c) | 1;
    return 1;
  }
  return 1;
}


