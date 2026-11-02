/* Module: aviplug.dll
   Function: FUN_5f9bb1d0
   Address: 5f9bb1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9bb1d0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xa8);
  *(ushort *)(param_1 + 0x40) =
       *(ushort *)(param_1 + 0x40) +
       (short)(((uint)*(ushort *)(param_1 + 0x48) - (uint)*(ushort *)(param_1 + 0x40)) * uVar1 >>
              0x10);
  *(ushort *)(param_1 + 0x3e) =
       *(ushort *)(param_1 + 0x3e) +
       (short)(((uint)*(ushort *)(param_1 + 0x46) - (uint)*(ushort *)(param_1 + 0x3e)) * uVar1 >>
              0x10);
  *(ushort *)(param_1 + 0x3c) =
       *(ushort *)(param_1 + 0x3c) +
       (short)(((uint)*(ushort *)(param_1 + 0x44) - (uint)*(ushort *)(param_1 + 0x3c)) * uVar1 >>
              0x10);
  *(ushort *)(param_1 + 0x42) =
       *(ushort *)(param_1 + 0x42) +
       (short)(((uint)*(ushort *)(param_1 + 0x4a) - (uint)*(ushort *)(param_1 + 0x42)) * uVar1 >>
              0x10);
  return;
}


