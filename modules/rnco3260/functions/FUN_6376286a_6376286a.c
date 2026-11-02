/* Module: rnco3260.dll
   Function: FUN_6376286a
   Address: 6376286a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_6376286a(uint param_1,uint param_2,ushort param_3,ushort param_4,ushort param_5,ushort param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = param_6;
  _param_6 = (uint)param_6;
  _DAT_6379a0c0 = param_2 * 0x2d0 + param_1;
  _DAT_6379a0c4 = (param_2 >> 1) * 0x2d0 + (param_1 >> 1);
  DAT_6379a0a8 = (uint)param_3;
  DAT_6379a0ac = (uint)param_4;
  uVar1 = (uint)param_5;
  uVar2 = (uint)uVar3;
  _DAT_6379a0c8 = &DAT_6376245b;
  if ((param_3 != param_5) || (param_4 != uVar3)) {
    _DAT_6379a0c8 = &DAT_6376256b;
    if (((ushort)(param_3 * 2) != param_5) || ((ushort)(param_4 * 2) != uVar3)) {
      _DAT_6379a0c8 = &DAT_63762645;
      _DAT_6379a0cc = uVar1;
      DAT_6379a0d0 = uVar2;
      if ((param_5 != 0) && (uVar3 != 0)) {
        _DAT_6379a0d8 = (undefined4)(((ulonglong)(ushort)(param_3 * 2) << 0xf) / (ulonglong)uVar1);
        _DAT_6379a0e4 = (_param_6 << 0x10) / (uint)(param_4 & 0x7fff) + 1;
      }
    }
  }
  return;
}


