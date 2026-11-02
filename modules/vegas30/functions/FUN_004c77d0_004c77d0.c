/* Module: vegas30.exe
   Function: FUN_004c77d0
   Address: 004c77d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004c77d0(int param_1)

{
  if (((**(byte **)(param_1 + 0x5d0) & 2) != 0) && ((*(uint *)(param_1 + 0x18) & 0x80000) == 0)) {
    return 1;
  }
  return 0;
}


