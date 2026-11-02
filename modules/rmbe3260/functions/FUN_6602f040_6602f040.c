/* Module: rmbe3260.dll
   Function: FUN_6602f040
   Address: 6602f040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602f040(void *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)((int)param_1 + 4) + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1);
    if (iVar2 != 0) {
      piVar1 = *(int **)(*(int *)((int)param_1 + 4) + 0x10);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1);
        if (iVar2 != 0) goto LAB_6602f089;
      }
      FUN_6602f0b0(param_1,2,param_2,0,param_3);
      return 0;
    }
  }
LAB_6602f089:
  FUN_6602f180((int)param_1);
  piVar1 = *(int **)(*(int *)((int)param_1 + 4) + 8);
  (**(code **)(*piVar1 + 0x14))(piVar1,param_2,param_3);
  return 0;
}


