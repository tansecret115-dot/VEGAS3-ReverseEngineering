/* Module: mcplugrw.dll
   Function: FUN_0044c730
   Address: 0044c730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044c730(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1,param_2,param_3);
    return;
  }
  FUN_00475b50(param_1,"Call to NULL read function");
  return;
}


