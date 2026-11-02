/* Module: rmme3260.dll
   Function: FUN_6622e2a0
   Address: 6622e2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6622e2a0(int *param_1)

{
  LONG LVar1;
  int iVar2;
  
  LVar1 = InterlockedDecrement(param_1 + 3);
  iVar2 = param_1[3];
  if (LVar1 < 1) {
    if ((-1 < iVar2) && (param_1 != (int *)0x0)) {
      FUN_6622dfd0(param_1);
      operator_delete(param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


