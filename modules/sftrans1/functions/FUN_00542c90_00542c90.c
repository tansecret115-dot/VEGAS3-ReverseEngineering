/* Module: sftrans1.dll
   Function: FUN_00542c90
   Address: 00542c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00542c90(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  if (*param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_004dc8e0(param_1[1],0,0xffffffff,param_2,FUN_00542d70);
  if (-1 < iVar1) {
    iVar1 = *(int *)(*(int *)(param_1[1] + 8) + iVar1 * 4);
    *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + 1;
    param_1[4] = 0;
    return 0;
  }
  iVar1 = FUN_004dd360(param_1[1],0x44,&param_2);
  if (iVar1 < 0) {
    FUN_004dc400(param_1[1],0xffffffff,0xffffffff,0);
    return iVar1;
  }
  puVar3 = param_2;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xf] = 1;
  param_2[0x10] = 0;
  iVar1 = FUN_004dc110(param_1[1],0xffffffff,0,0xffffffff);
  if (iVar1 < 0) {
    FUN_004dc400(param_1[1],0xffffffff,0xffffffff,0);
    return iVar1;
  }
  param_1[4] = 0;
  return iVar1;
}


