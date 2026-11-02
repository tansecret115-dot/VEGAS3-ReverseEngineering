/* Module: vegas30k.dll
   Function: FUN_0115ee10
   Address: 0115ee10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115ee10(undefined4 param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  if (param_4 < 0xfffe) {
    FUN_0115eea0(param_1,param_2);
    FUN_0115eec0(param_1,param_4 + 2);
    for (; param_4 != 0; param_4 = param_4 - 1) {
      FUN_0115ee60(param_1,*param_3);
      param_3 = param_3 + 1;
    }
  }
  return;
}


