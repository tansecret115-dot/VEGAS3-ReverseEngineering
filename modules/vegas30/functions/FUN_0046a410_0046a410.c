/* Module: vegas30.exe
   Function: FUN_0046a410
   Address: 0046a410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0046a410(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,undefined4 param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_58 [22];
  
  uVar3 = param_8;
  puVar2 = param_2;
  if (((int *)param_2[6] == (int *)0x0) || (*(int *)param_2[6] < 1)) {
    return 1;
  }
  puVar5 = local_58;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_0047e030(local_58,param_2,0,param_4,param_5,param_6,param_7,param_8);
  piVar1 = (int *)puVar2[6];
  if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
    FUN_0047e5a0(local_58,&param_4,&param_6,uVar3);
    uVar3 = param_3;
    if ((param_7 < 1) && ((param_7 < 0 || (param_6 == 0)))) {
      FUN_0047c430(local_58);
      return 1;
    }
    _SfList_AllocItem_12(param_3,0x228,&param_2);
    if (param_2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    puVar5 = param_2;
    for (iVar4 = 0x8a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    param_2[0xe] = 0;
    *param_2 = 0x32;
    param_2[3] = 0xffffffff;
    param_2[0xf] = 0x3ff00000;
    puVar5 = local_58;
    puVar6 = param_2 + 0x24;
    for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    param_2[8] = param_4;
    param_2[9] = param_5;
    param_2[10] = param_6;
    param_2[0xb] = param_7;
    piVar1 = (int *)puVar2[0x14];
    iVar4 = *piVar1;
    param_2[1] = piVar1[1];
    if (iVar4 == 0x20) {
      param_2[4] = piVar1[6];
    }
    else {
      param_2[4] = *(undefined4 *)(piVar1[2] + 0x18);
    }
    uVar3 = _SfList_InsertList_16(uVar3,0xffffffff,0,0xffffffff);
    return uVar3;
  }
  FUN_0047c430(local_58);
  return 1;
}


