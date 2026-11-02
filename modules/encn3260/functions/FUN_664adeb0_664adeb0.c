/* Module: encn3260.dll
   Function: FUN_664adeb0
   Address: 664adeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664adeb0(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
        if (iVar2 != 0) goto LAB_664adefb;
      }
      FUN_664ae020(param_1,0,param_2,param_3,param_4);
      return 0;
    }
  }
LAB_664adefb:
  FUN_664ae0f0((int)param_1);
  piVar1 = *(int **)(*(int *)((int)param_1 + 4) + 8);
  (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3,param_4);
  return 0;
}


