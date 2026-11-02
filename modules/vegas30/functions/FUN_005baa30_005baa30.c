/* Module: vegas30.exe
   Function: FUN_005baa30
   Address: 005baa30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005baa30(int param_1,int param_2)

{
  if (param_2 != 0) {
    return 0;
  }
  if (*(undefined4 **)(param_1 + 0xc34) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0xc34);
}


