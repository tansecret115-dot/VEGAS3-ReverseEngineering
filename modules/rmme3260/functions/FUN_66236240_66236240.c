/* Module: rmme3260.dll
   Function: FUN_66236240
   Address: 66236240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66236240(int param_1)

{
  if ((*(byte *)(param_1 + 0x58) & 0x20) != 0) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  return *(undefined4 *)(param_1 + 0x24);
}


