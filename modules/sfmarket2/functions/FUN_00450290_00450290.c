/* Module: sfmarket2.dll
   Function: FUN_00450290
   Address: 00450290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00450290(int param_1)

{
  if (*(byte *)(param_1 + 0x11f) < 8) {
    *(undefined1 *)(param_1 + 0x120) = 8;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 4;
  }
  return;
}


