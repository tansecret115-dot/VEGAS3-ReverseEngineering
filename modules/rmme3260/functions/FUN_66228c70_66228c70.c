/* Module: rmme3260.dll
   Function: FUN_66228c70
   Address: 66228c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66228c70(int param_1)

{
  *(uint *)(param_1 + 0xd6) = *(ushort *)(param_1 + 0x38) + 4 + (uint)*(ushort *)(param_1 + 0x14);
  return 0;
}


