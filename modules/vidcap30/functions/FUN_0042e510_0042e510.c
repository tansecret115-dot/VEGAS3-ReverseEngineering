/* Module: vidcap30.exe
   Function: FUN_0042e510
   Address: 0042e510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e510(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x1cc) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x1cc);
}


