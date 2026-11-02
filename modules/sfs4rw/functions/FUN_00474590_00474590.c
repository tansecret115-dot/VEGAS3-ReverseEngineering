/* Module: sfs4rw.dll
   Function: FUN_00474590
   Address: 00474590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474590(int *param_1,undefined1 param_2,undefined1 *param_3,uint param_4)

{
  if (param_4 < 0xfffe) {
    FUN_00474620(param_1,param_2);
    FUN_00474640(param_1,param_4 + 2);
    for (; param_4 != 0; param_4 = param_4 - 1) {
      FUN_004745e0(param_1,*param_3);
      param_3 = param_3 + 1;
    }
  }
  return;
}


