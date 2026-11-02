/* Module: vegas30.exe
   Function: FUN_005d9d30
   Address: 005d9d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d9d30(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_005d9710(param_1);
  if (*(int *)(param_2 + 0x38) == 0) {
    return 1;
  }
  FUN_005b83b0(param_1,1);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) break;
    FUN_005d9c70(param_1,*(undefined4 *)(piVar1[2] + iVar2 * 4),param_2,param_3);
  } while (*(int *)(param_2 + 0x38) != 0);
  FUN_005b84d0(param_1,1);
  return 0;
}


