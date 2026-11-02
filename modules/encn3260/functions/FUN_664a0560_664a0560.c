/* Module: encn3260.dll
   Function: FUN_664a0560
   Address: 664a0560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a0560(int param_1)

{
  if ((*(byte *)(param_1 + 0x58) & 0x20) != 0) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  return *(undefined4 *)(param_1 + 0x24);
}


