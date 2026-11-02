/* Module: sfmarket2.dll
   Function: FUN_00483740
   Address: 00483740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483740(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x13] != (code *)0x0) {
    (*(code *)param_1[0x13])(param_1,param_2,param_3);
    return;
  }
  FUN_0047e340(param_1,"Call to NULL write function");
  return;
}


