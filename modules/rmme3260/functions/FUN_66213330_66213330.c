/* Module: rmme3260.dll
   Function: FUN_66213330
   Address: 66213330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66213330(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 4));
  if (0 < LVar1) {
    return *(undefined4 *)(param_1 + 4);
  }
  if ((undefined4 *)(param_1 + -0xd8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + -0xd8))(1);
  }
  return 0;
}


