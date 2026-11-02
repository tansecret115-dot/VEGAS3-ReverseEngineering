/* Module: sfpagepeel.dll
   Function: FUN_00408cb0
   Address: 00408cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408cb0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


