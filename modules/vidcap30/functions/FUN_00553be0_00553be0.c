/* Module: vidcap30.exe
   Function: FUN_00553be0
   Address: 00553be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553be0(undefined4 param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  if (param_4 < 0xfffe) {
    FUN_00553c70(param_1,param_2);
    FUN_00553c90(param_1,param_4 + 2);
    for (; param_4 != 0; param_4 = param_4 - 1) {
      FUN_00553c30(param_1,*param_3);
      param_3 = param_3 + 1;
    }
  }
  return;
}


