/* Module: mp3plug.dll
   Function: FUN_5f6d4070
   Address: 5f6d4070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6d4070(int param_1)

{
  double dVar1;
  uint uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  dVar1 = (double)((*(float *)(param_1 + 0x20) - _DAT_5f75c6dc) /
                   (*(float *)(param_1 + 0x1c) * _DAT_5f75c6d8 * _DAT_5f75c6d0) + _DAT_5f75c6e0);
  uStack_18 = (uint)((ulonglong)dVar1 >> 0x20);
  local_1c = SUB84(dVar1,0);
  uVar2 = uStack_18 >> 0x14 & 0x7ff;
  if (uVar2 < 0x3ff) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uStack_18 << 0xb | local_1c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar2 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar2 = -uVar2;
    }
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return;
}


