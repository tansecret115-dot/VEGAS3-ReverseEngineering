/* Module: vegas30.exe
   Function: FUN_005416f0
   Address: 005416f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005416f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  FUN_005b83b0(param_1,1);
  piVar2 = (int *)FUN_0053f8e0(param_1);
  iVar1 = *piVar2;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) break;
    iVar3 = FUN_005400b0(piVar2,*(undefined4 *)(piVar2[2] + iVar1 * 4),1);
  } while (-1 < iVar3);
  FUN_005b84d0(param_1,1);
  return iVar3;
}


