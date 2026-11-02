/* Module: stl2plg.dll
   Function: FUN_0044fa30
   Address: 0044fa30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044fa30(int *param_1,undefined4 param_2)

{
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1,param_2);
  }
  FUN_0044fb90(param_1,param_2);
  return;
}


