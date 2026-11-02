/* Module: sipr3260.dll
   Function: FUN_632a10c0
   Address: 632a10c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_632a10c0(void *this,ushort param_1,short param_2,LPSTR param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  
  if (3 < param_1) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = FUN_632a2110((uint)*(ushort *)((int)this + (uint)param_1 * 2 + 0xb0),param_3,
                         (undefined4 *)(param_4 & 0xffff));
  }
  else {
    if (param_2 == 4) {
      uVar1 = FUN_632a2110((uint)*(ushort *)((int)this + (uint)param_1 * 2 + 0xb8),param_3,
                           (undefined4 *)(param_4 & 0xffff));
      return uVar1;
    }
    if (param_2 == 7) {
      uVar1 = FUN_632a2110((uint)*(ushort *)((int)this + (uint)param_1 * 2 + 0xc0),param_3,
                           (undefined4 *)(param_4 & 0xffff));
      return uVar1;
    }
  }
  return uVar1;
}


