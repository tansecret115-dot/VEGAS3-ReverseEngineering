/* Module: sfmarket2.dll
   Function: FUN_00454da0
   Address: 00454da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454da0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1,param_2,param_3);
    return;
  }
  FUN_0047e340(param_1,"Call to NULL read function");
  return;
}


