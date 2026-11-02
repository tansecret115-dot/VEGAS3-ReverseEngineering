/* Module: encn3260.dll
   Function: FUN_664af6d0
   Address: 664af6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664af6d0(void *param_1,undefined4 *param_2)

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
      bVar1 = FUN_664a2140(*(int *)((int)param_1 + 0x3b));
      if (CONCAT31(extraout_var,bVar1) != 0) goto LAB_664af78b;
    }
    if ((*(byte *)((int)param_1 + 0x26) & 1) != 0) {
      if ((((*(int *)((int)param_1 + 0x47) == param_2[1]) &&
           (*(int *)((int)param_1 + 0x4b) == param_2[2])) &&
          (*(short *)((int)param_1 + 0x4f) == *(short *)(param_2 + 3))) &&
         ((*(short *)((int)param_1 + 0x51) == *(short *)((int)param_2 + 0xe) &&
          (*(int *)((int)param_1 + 0x53) == param_2[4])))) goto LAB_664af78b;
      if ((*(byte *)((int)param_1 + 0x26) & 2) == 0) {
        FUN_664b0020();
      }
      else {
        FUN_664af4c0((int)param_1);
      }
    }
    FUN_664af4e0(param_1,param_2);
  }
LAB_664af78b:
  FUN_6649f620(*(void **)((int)param_1 + 0x3b),param_2);
  InterlockedDecrement(lpAddend);
  return 0;
}


