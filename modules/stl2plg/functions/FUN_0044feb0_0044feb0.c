/* Module: stl2plg.dll
   Function: FUN_0044feb0
   Address: 0044feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044feb0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1,param_2,param_3);
    return;
  }
  FUN_0044fa30(param_1,"Call to NULL read function");
  return;
}


