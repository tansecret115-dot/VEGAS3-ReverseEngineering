/* Module: rnco3260.dll
   Function: FUN_63717740
   Address: 63717740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63717740(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10,
            undefined *param_11)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    (*(code *)param_11)(param_1,param_2,param_6,param_7);
    param_6 = param_6 + param_9;
    param_1 = param_1 + param_4;
  }
  return;
}


