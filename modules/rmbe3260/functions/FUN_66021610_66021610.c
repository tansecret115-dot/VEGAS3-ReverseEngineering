/* Module: rmbe3260.dll
   Function: FUN_66021610
   Address: 66021610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021610(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    FUN_6603c0f0(*(void **)(param_1 + 0x18),(int)param_2);
    FUN_660157a0(0);
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
    FUN_6603c0f0(*(void **)(param_1 + 0x1c),(int)param_2);
    FUN_660157a0(0);
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    FUN_6603c0f0(*(void **)(param_1 + 0x20),(int)param_2);
    FUN_660157a0(0);
  }
  piVar1 = *(int **)(param_1 + 0x172);
  if ((piVar1 != (int *)0x0) && (piVar1 == param_2)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x172) = 0;
  }
  return 0;
}


