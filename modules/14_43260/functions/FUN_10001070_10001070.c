/* Module: 14_43260.dll
   Function: FUN_10001070
   Address: 10001070
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_10001070(void *this,short param_1,short param_2,LPSTR param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 != 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = FUN_100066e0((uint)*(ushort *)((int)this + 0x2a),param_3,
                         (undefined4 *)(param_4 & 0xffff));
  }
  else {
    if (param_2 == 4) {
      uVar1 = FUN_100066e0((uint)*(ushort *)((int)this + 0x2c),param_3,
                           (undefined4 *)(param_4 & 0xffff));
      return uVar1;
    }
    if (param_2 == 7) {
      uVar1 = FUN_100066e0((uint)*(ushort *)((int)this + 0x2e),param_3,
                           (undefined4 *)(param_4 & 0xffff));
      return uVar1;
    }
  }
  return uVar1;
}


