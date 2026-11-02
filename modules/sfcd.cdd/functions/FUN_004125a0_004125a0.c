/* Module: sfcd.cdd
   Function: FUN_004125a0
   Address: 004125a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004125a0(undefined4 param_1,HSFCD__ *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x160);
  param_3[6] = param_3[6] + -0x96;
  iVar3 = FUN_0041be10(param_2,param_3);
  param_3[6] = param_3[6] + 0x96;
  iVar2 = *(int *)(iVar1 + 0x1d4);
  while ((iVar2 != 0 && (iVar3 != 0))) {
    *(undefined4 *)(iVar1 + 0x1d4) = 0;
    param_3[6] = param_3[6] + -0x96;
    iVar3 = FUN_0041be10(param_2,param_3);
    param_3[6] = param_3[6] + 0x96;
    iVar2 = *(int *)(iVar1 + 0x1d4);
  }
  return;
}


