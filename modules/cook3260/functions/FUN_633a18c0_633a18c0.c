/* Module: cook3260.dll
   Function: FUN_633a18c0
   Address: 633a18c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_633a18c0(void *this,ushort param_1)

{
  if (0x1a < param_1) {
    return 0x80004005;
  }
  *(uint *)((int)this + 0x24) = (uint)param_1;
  return 0;
}


