/* Module: encn3260.dll
   Function: FUN_66497d40
   Address: 66497d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66497d40(int *param_1)

{
  LONG LVar1;
  int iVar2;
  
  LVar1 = InterlockedDecrement(param_1 + 3);
  iVar2 = param_1[3];
  if (LVar1 < 1) {
    if ((-1 < iVar2) && (param_1 != (int *)0x0)) {
      FUN_66497a90(param_1);
      operator_delete(param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


