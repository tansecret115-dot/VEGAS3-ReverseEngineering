/* Module: vidcap30.exe
   Function: FUN_00443780
   Address: 00443780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443780(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x10);
}


