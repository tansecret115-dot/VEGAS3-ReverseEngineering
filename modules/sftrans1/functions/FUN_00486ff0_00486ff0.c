/* Module: sftrans1.dll
   Function: FUN_00486ff0
   Address: 00486ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00486ff0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2;
  if (param_2 < 0) {
    iVar4 = 0;
  }
  if (param_3 < 0) {
    param_3 = **(int **)(param_1 + 0xa4) + -1;
  }
  if ((((-1 < iVar4) && (iVar4 < **(int **)(param_1 + 0xa4))) && (-1 < param_3)) &&
     ((param_3 < **(int **)(param_1 + 0xa4) && (iVar4 <= param_3)))) {
    iVar1 = param_3 - iVar4;
    param_3 = iVar1 + 1;
    uVar3 = 1;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    param_2 = 0;
    if (0 < param_3) {
      iVar1 = iVar1 + iVar4;
      do {
        iVar2 = FUN_00486ec0(iVar1,param_4);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          param_2 = param_2 + 1;
        }
        iVar1 = iVar1 + -1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_0048c4a0();
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
    FUN_0048c310(5,iVar4,param_2);
    return uVar3;
  }
  return 0;
}


