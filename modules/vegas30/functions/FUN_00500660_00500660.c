/* Module: vegas30.exe
   Function: FUN_00500660
   Address: 00500660
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00500660(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 local_860 [4];
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_820 [345];
  undefined1 local_2bc [12];
  undefined4 local_2b0 [10];
  uchar local_288 [260];
  uint local_184;
  uchar local_180 [276];
  undefined1 local_6c [8];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined4 local_20;
  
  FUN_005fb200(1);
  iVar1 = FUN_004e77a0();
  if (iVar1 == 0) {
    return -0x7ffb1ff4;
  }
  puVar7 = local_820;
  for (iVar1 = 0x206; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar1 = FUN_00500410(param_1,local_820);
  if (iVar1 != 0) {
    _SfSummary_Free_4(local_2bc);
    return iVar1;
  }
  iVar1 = FUN_005b9ca0();
  if (iVar1 == 0) {
    return -0x7ff8fff2;
  }
  puVar7 = local_820;
  puVar8 = (undefined4 *)(iVar1 + 0x6c0);
  for (iVar6 = 0x159; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = local_2b0;
  puVar8 = (undefined4 *)(iVar1 + 0x458);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  _mbscpy((uchar *)(iVar1 + 0x480),local_288);
  *(uint *)(iVar1 + 0xc2c) = (*(uint *)(iVar1 + 0xc2c) ^ local_184) & 1 ^ *(uint *)(iVar1 + 0xc2c);
  _mbscpy((uchar *)(iVar1 + 0x238),local_180);
  uVar2 = FUN_005ba4b0(iVar1,0);
  uVar3 = FUN_005b9fc0(iVar1,uVar2,1);
  uVar4 = local_40;
  puVar7 = local_860;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_850 = uVar4;
  local_84c = local_3c;
  local_860[3] = local_64;
  local_848 = local_60;
  local_844 = local_5c;
  local_840 = local_38;
  local_83c = local_34;
  FUN_005ba6d0(iVar1,uVar2,local_20,local_860,local_6c,local_40,local_3c,0);
  FUN_005ba7d0(iVar1,uVar2,local_54,local_50,local_4c,local_48);
  puVar9 = local_30;
  uVar2 = 0;
  uVar4 = FUN_005ba4b0(iVar1,0);
  FUN_005b8d10(iVar1,uVar4,uVar2,puVar9);
  FUN_005ba030(iVar1,uVar3,1,1);
  FUN_00428fa0(iVar1,1);
  iVar6 = iVar1 + 0x1bc;
  iVar5 = _SfSummary_Compare_8(iVar6,local_2bc);
  if (iVar5 == 0) {
    _SfSummary_Free_4(iVar6);
    _SfSummary_Copy_8(iVar6,local_2bc);
  }
  _SfSummary_Free_4(local_2bc);
  iVar6 = FUN_004325c0(iVar1);
  if (iVar6 != 0) {
    FUN_005b96f0(iVar6,0);
    FUN_004e4d30(iVar1,1);
  }
  FUN_005b3fd0(iVar1);
  FUN_00427a70(0,0);
  return 0;
}


