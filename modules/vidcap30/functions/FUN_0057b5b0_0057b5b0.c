/* Module: vidcap30.exe
   Function: FUN_0057b5b0
   Address: 0057b5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057b5b0(int *param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


