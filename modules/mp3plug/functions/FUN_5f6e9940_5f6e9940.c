/* Module: mp3plug.dll
   Function: FUN_5f6e9940
   Address: 5f6e9940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_5f6e9940(int param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_14;
  undefined4 uStack_10;
  
  iVar2 = param_1 - param_2;
  if (iVar2 == 0) {
    return 0;
  }
  if (0 < iVar2) {
    dVar1 = (double)((float)(iVar2 * 0x10) / (float)(param_3 * 3) + _DAT_5f75d7d4);
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
    if ((int)uVar3 < 1) {
      uVar3 = 1;
    }
    return uVar3;
  }
  dVar1 = (double)((float)(iVar2 * 0x10) / (float)(param_3 * 3) + _DAT_5f75d7dc);
  uStack_10 = (uint)((ulonglong)dVar1 >> 0x20);
  local_14 = SUB84(dVar1,0);
  uVar3 = uStack_10 >> 0x14 & 0x7ff;
  if (uVar3 < 0x3ff) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uStack_10 << 0xb | local_14 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar3 = -uVar3;
    }
  }
  if (-1 < (int)uVar3) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


