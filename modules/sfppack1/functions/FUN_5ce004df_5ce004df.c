/* Module: sfppack1.dll
   Function: FUN_5ce004df
   Address: 5ce004df
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ce004df(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}


