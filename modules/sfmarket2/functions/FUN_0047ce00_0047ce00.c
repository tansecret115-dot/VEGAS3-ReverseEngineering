/* Module: sfmarket2.dll
   Function: FUN_0047ce00
   Address: 0047ce00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047ce00(int *param_1,undefined1 param_2,undefined1 *param_3,uint param_4)

{
  if (param_4 < 0xfffe) {
    FUN_0047ce90(param_1,param_2);
    FUN_0047ceb0(param_1,param_4 + 2);
    for (; param_4 != 0; param_4 = param_4 - 1) {
      FUN_0047ce50(param_1,*param_3);
      param_3 = param_3 + 1;
    }
  }
  return;
}


