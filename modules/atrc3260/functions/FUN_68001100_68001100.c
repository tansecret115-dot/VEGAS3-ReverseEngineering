/* Module: atrc3260.dll
   Function: FUN_68001100
   Address: 68001100
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_68001100(void *this,ushort param_1,short param_2,LPSTR param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  
  if (7 < param_1) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = FUN_680027c0((uint)*(ushort *)((int)this + (uint)param_1 * 2 + 0x1d8),param_3,
                         (undefined4 *)(param_4 & 0xffff));
  }
  else {
    if (param_2 == 4) {
      uVar1 = FUN_680027c0((uint)*(ushort *)((int)this + (uint)param_1 * 2 + 0x1e8),param_3,
                           (undefined4 *)(param_4 & 0xffff));
      return uVar1;
    }
    if (param_2 == 7) {
      uVar1 = FUN_680027c0((uint)*(ushort *)((int)this + (uint)param_1 * 2 + 0x1f8),param_3,
                           (undefined4 *)(param_4 & 0xffff));
      return uVar1;
    }
  }
  return uVar1;
}


