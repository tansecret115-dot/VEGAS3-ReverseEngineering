/* Module: vegas30.exe
   Function: FUN_005ba6d0
   Address: 005ba6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005ba6d0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_005b9fc0(param_1,param_2,1);
  if (param_3 != 0) {
    *(int *)(iVar2 + 0x30) = param_3;
  }
  if (param_5 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar2 + 0x34) = *param_5;
    *(undefined4 *)(iVar2 + 0x38) = param_5[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    iVar1 = *(int *)(iVar2 + 0xa4);
    puVar4 = param_4;
    puVar5 = (undefined4 *)(iVar2 + 0x40);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(double *)(iVar2 + 0xa8) = *(double *)(param_4 + 4) / (double)iVar1;
  }
  if (_DAT_00610fd8 < (double)CONCAT44(param_7,param_6)) {
    *(undefined4 *)(iVar2 + 0x50) = param_6;
    *(undefined4 *)(iVar2 + 0x54) = param_7;
    *(double *)(iVar2 + 0xa8) = *(double *)(param_4 + 4) / (double)*(int *)(iVar2 + 0xa4);
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 1;
  FUN_005ba030(param_1,iVar2,1,1);
  return 0;
}


