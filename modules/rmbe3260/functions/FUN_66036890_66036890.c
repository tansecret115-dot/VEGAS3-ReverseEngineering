/* Module: rmbe3260.dll
   Function: FUN_66036890
   Address: 66036890
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66036890(int param_1)

{
  return (uint)*(ushort *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x1e) +
         (uint)*(ushort *)(param_1 + 0x18) + 0x12 + (uint)*(ushort *)(param_1 + 0x12);
}


