/* Module: vidcap30.exe
   Function: FUN_00416f90
   Address: 00416f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416f90(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *param_1) {
    piVar1 = (int *)param_1[2];
    while (*(int *)(*piVar1 + 0x208) != 6) {
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
      if (*param_1 <= iVar3) {
        return 0;
      }
    }
    if ((DAT_005ba4c0 == 0) || (DAT_005bba94 == 0)) {
      uVar2 = FUN_00450090(*piVar1,0);
    }
    else {
      uVar2 = 0;
    }
    _SfList_DeleteList_16(param_1,iVar3,1,0);
    FUN_00416c90();
  }
  return uVar2;
}


