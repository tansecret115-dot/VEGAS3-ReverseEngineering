/* Module: vegas30.exe
   Function: FUN_005aa5e0
   Address: 005aa5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005aa5e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,uint param_7,undefined4 *param_8,
                undefined4 param_9)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar3 = param_1;
  bVar2 = _DAT_00610fd8 == (double)CONCAT44(param_3,param_2);
  puVar6 = param_1;
  for (iVar4 = 0xa0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (bVar2) {
    iVar4 = 0;
  }
  else {
    ceil((double)CONCAT44(param_3,param_2) * (double)CONCAT44(param_6,param_5));
    iVar4 = ftol();
  }
  param_1[0x9f] = param_4;
  param_1[0x92] = param_5;
  param_1[0x93] = param_6;
  param_1[0x94] = param_2;
  param_1[0x95] = param_3;
  param_1[0x90] = iVar4;
  param_1[0x9e] = -(uint)(param_7 != 0xffffffff) & param_7;
  param_1[0x96] = *param_8;
  param_1[0x97] = param_8[1];
  param_1[0x98] = *param_8;
  uVar1 = param_8[1];
  param_1[0x9c] = 0;
  param_1[0x99] = uVar1;
  param_1[0x9a] = param_9;
  param_1[0x9d] = 0;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0x10 < iVar4) {
    iVar4 = 0x10;
  }
  param_1[0x90] = iVar4;
  param_1 = (undefined4 *)0x0;
  if (iVar4 < 1) {
    return 0;
  }
  puVar6 = puVar3 + 0x10;
  puVar5 = puVar3;
  do {
    *puVar6 = 0xffffffff;
    puVar6[1] = 0x7fffffff;
    iVar4 = _SfDibAlloc_28(puVar5,puVar3[0x9a],puVar3[0x98],puVar3[0x99],0,0xffffffff,0);
    if (iVar4 < 0) goto LAB_005aa729;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar6 = puVar6 + 2;
    puVar5 = puVar5 + 1;
  } while ((int)param_1 < (int)puVar3[0x90]);
  if (iVar4 < 0) {
LAB_005aa729:
    FUN_005aa930();
  }
  return iVar4;
}


