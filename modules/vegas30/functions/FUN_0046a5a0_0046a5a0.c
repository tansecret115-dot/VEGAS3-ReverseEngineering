/* Module: vegas30.exe
   Function: FUN_0046a5a0
   Address: 0046a5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0046a5a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 local_58 [22];
  
  iVar5 = param_7;
  iVar4 = param_6;
  uVar3 = param_5;
  uVar7 = param_4;
  puVar8 = param_2;
  iVar6 = FUN_005be5f0(0);
  uVar2 = param_8;
  bVar10 = iVar6 == 0;
  if ((bVar10) && (((int *)puVar8[0x194] == (int *)0x0 || (*(int *)puVar8[0x194] < 1)))) {
    return 1;
  }
  puVar9 = local_58;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  FUN_0047e030(local_58,puVar8 + 0x18e,0,param_4,param_5,param_6,param_7,param_8);
  if ((bVar10) && (((int *)puVar8[0x194] == (int *)0x0 || (*(int *)puVar8[0x194] < 1)))) {
    FUN_0047c430(local_58);
    return 1;
  }
  FUN_0047e5a0(local_58,&param_4,&param_6,uVar2);
  uVar2 = param_3;
  if ((bVar10) && ((param_7 < 1 && ((param_7 < 0 || (param_6 == 0)))))) {
    FUN_0047c430(local_58);
    return 1;
  }
  _SfList_AllocItem_12(param_3,0x228,&param_2);
  if (param_2 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar9 = param_2;
  for (iVar6 = 0x8a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *param_2 = 0x32;
  param_2[1] = puVar8[1];
  uVar1 = puVar8[6];
  param_2[0xe] = 0;
  param_2[4] = uVar1;
  param_2[3] = 0xffffffff;
  param_2[0xf] = 0x3ff00000;
  puVar8 = local_58;
  puVar9 = param_2 + 0x24;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  param_2[8] = param_4;
  param_2[9] = param_5;
  param_2[10] = param_6;
  param_2[0xb] = param_7;
  param_2[0xc] = uVar7;
  param_2[0xd] = uVar3;
  param_2[0xe] = iVar4;
  param_2[0xf] = iVar5;
  uVar7 = _SfList_InsertList_16(uVar2,0xffffffff,0,0xffffffff);
  return uVar7;
}


