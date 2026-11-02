/* Module: vegas30k.dll
   Function: FUN_01163f10
   Address: 01163f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01163f10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x10);
  if (piVar1 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar1 + 0x38))(piVar1,param_2);
    return uVar3;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if (iVar2 != 0) {
    FUN_01040210(iVar2);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x40) = 0;
  if (param_2 != 0) {
    uVar3 = FUN_010401b0(param_2);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x40) = uVar3;
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x40) == 0) {
      return 0x8007000e;
    }
  }
  return 0;
}


