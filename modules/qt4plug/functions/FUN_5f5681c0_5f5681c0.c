/* Module: qt4plug.dll
   Function: FUN_5f5681c0
   Address: 5f5681c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f5681c0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xb2);
  *(byte *)(param_1 + 0x3e) =
       *(byte *)(param_1 + 0x3e) +
       (char)(((uint)*(byte *)(param_1 + 0x46) - (uint)*(byte *)(param_1 + 0x3e)) * uVar1 >> 8);
  *(byte *)(param_1 + 0x3d) =
       *(byte *)(param_1 + 0x3d) +
       (char)(((uint)*(byte *)(param_1 + 0x45) - (uint)*(byte *)(param_1 + 0x3d)) * uVar1 >> 8);
  *(byte *)(param_1 + 0x3c) =
       *(byte *)(param_1 + 0x3c) +
       (char)(((uint)*(byte *)(param_1 + 0x44) - (uint)*(byte *)(param_1 + 0x3c)) * uVar1 >> 8);
  *(byte *)(param_1 + 0x3f) =
       *(byte *)(param_1 + 0x3f) +
       (char)(((uint)*(byte *)(param_1 + 0x47) - (uint)*(byte *)(param_1 + 0x3f)) * uVar1 >> 8);
  return;
}


