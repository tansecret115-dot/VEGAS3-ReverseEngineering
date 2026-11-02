/* Module: encn3260.dll
   Function: FUN_664d0d40
   Address: 664d0d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664d0d40(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && ((void *)param_1[3] != (void *)0x0)) {
      operator_delete((void *)param_1[3]);
      param_1[3] = 0;
    }
    FUN_664d0d40((int *)param_1[1]);
    FUN_664d0d40((int *)param_1[2]);
    operator_delete(param_1);
  }
  return;
}


