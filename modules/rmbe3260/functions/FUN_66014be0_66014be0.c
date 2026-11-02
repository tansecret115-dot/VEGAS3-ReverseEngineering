/* Module: rmbe3260.dll
   Function: FUN_66014be0
   Address: 66014be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66014be0(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}


