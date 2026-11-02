/* Module: rmme3260.dll
   Function: FUN_66202740
   Address: 66202740
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66202740(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 3);
  if (0 < LVar1) {
    return param_1[3];
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x3c))(1);
  }
  return 0;
}


