/* Module: vidcap30.exe
   Function: FUN_00539b10
   Address: 00539b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00539b10(int param_1)

{
  if ((*(uint *)(param_1 + 0x2d8) & 0x1000) == 0) {
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  }
  if ((*(uint *)(param_1 + 0x2d8) & 0x180) == 0) {
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x298);
    *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_1 + 0x29c);
  }
  return;
}


