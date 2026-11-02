/* Module: vegas30.exe
   Function: FUN_005d9c70
   Address: 005d9c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d9c70(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_005b83b0(param_1,1);
  piVar1 = (int *)*param_2;
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      piVar2 = (int *)(piVar1[1] * iVar3 + piVar1[2]);
      if ((*piVar2 == *(int *)(param_3 + 0x30)) && (piVar2[1] == *(int *)(param_3 + 0x34))) {
        _SfList_DeleteList_16(piVar1,iVar3,1,0);
        *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + -1;
        FUN_005b84d0(param_1,1);
        if ((param_4 != 0) && (iVar4 == 1)) {
          FUN_005d99b0(param_1,param_2);
        }
        return iVar4 + -1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  FUN_005b84d0(param_1,1);
  return iVar4;
}


