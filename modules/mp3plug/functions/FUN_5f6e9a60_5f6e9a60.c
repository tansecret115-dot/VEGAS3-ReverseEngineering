/* Module: mp3plug.dll
   Function: FUN_5f6e9a60
   Address: 5f6e9a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_5f6e9a60(int param_1,int param_2)

{
  double dVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 local_24;
  undefined4 uStack_20;
  
  fVar2 = _DAT_5f75d7e4 + _DAT_5f75d7c0;
  fVar4 = FUN_5f6e9060();
  dVar1 = (double)(fVar4 * (float10)*(float *)(*(int *)(param_2 + 0x10 + param_1 * 0x20) +
                                              *(int *)(param_2 + 8 + param_1 * 0x20) * 4) +
                  (float10)fVar2);
  uStack_20 = (uint)((ulonglong)dVar1 >> 0x20);
  local_24 = SUB84(dVar1,0);
  uVar3 = uStack_20 >> 0x14 & 0x7ff;
  if (uVar3 < 0x3ff) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uStack_20 << 0xb | local_24 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar3 = -uVar3;
    }
  }
  return uVar3;
}


