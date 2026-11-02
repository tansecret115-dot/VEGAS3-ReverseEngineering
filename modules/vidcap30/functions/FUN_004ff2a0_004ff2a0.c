/* Module: vidcap30.exe
   Function: FUN_004ff2a0
   Address: 004ff2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ff2a0(int param_1)

{
  if ((*(byte *)(param_1 + 0x4a4) & 8) != 0) {
    FUN_004fdba0(param_1);
  }
  *(undefined4 *)(param_1 + 0x4a0) = 0x7f88;
  *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffef3;
  return 0;
}


