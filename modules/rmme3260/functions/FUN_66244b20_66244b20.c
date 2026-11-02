/* Module: rmme3260.dll
   Function: FUN_66244b20
   Address: 66244b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66244b20(void *param_1,undefined4 *param_2)

{
  LONG *lpAddend;
  byte bVar1;
  int *piVar2;
  undefined3 extraout_var;
  
  lpAddend = (LONG *)((int)param_1 + 0x92b);
  InterlockedIncrement(lpAddend);
  (**(code **)(**(int **)((int)param_1 + 0x933) + 0x10))(0xffffffff);
  if (param_2 == (undefined4 *)0x0) {
    InterlockedDecrement(lpAddend);
    return 0x80004005;
  }
  piVar2 = (int *)(*(int *)((int)param_1 + 0x3b) + 8);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x1c))(piVar2);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    if (((*(byte *)((int)param_1 + 0x26) & 1) == 0) && (*(int *)((int)param_1 + 0x3b) != 0)) {
      bVar1 = FUN_66237e10(*(int *)((int)param_1 + 0x3b));
      if (CONCAT31(extraout_var,bVar1) != 0) goto LAB_66244bdb;
    }
    if ((*(byte *)((int)param_1 + 0x26) & 1) != 0) {
      if ((((*(int *)((int)param_1 + 0x47) == param_2[1]) &&
           (*(int *)((int)param_1 + 0x4b) == param_2[2])) &&
          (*(short *)((int)param_1 + 0x4f) == *(short *)(param_2 + 3))) &&
         ((*(short *)((int)param_1 + 0x51) == *(short *)((int)param_2 + 0xe) &&
          (*(int *)((int)param_1 + 0x53) == param_2[4])))) goto LAB_66244bdb;
      if ((*(byte *)((int)param_1 + 0x26) & 2) == 0) {
        FUN_66245470();
      }
      else {
        FUN_66244910((int)param_1);
      }
    }
    FUN_66244930(param_1,param_2);
  }
LAB_66244bdb:
  FUN_66235300(*(void **)((int)param_1 + 0x3b),param_2);
  InterlockedDecrement(lpAddend);
  return 0;
}


