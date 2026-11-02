/* Module: mp3plug.dll
   Function: FUN_5f6e51d0
   Address: 5f6e51d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6e51d0(int *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  uint local_1c;
  uint uStack_18;
  
  iVar1 = *param_1;
  fVar2 = (float)((uint)param_1[0x130] % (uint)param_1[1]) / (float)param_1[1];
  dVar4 = floor((double)((float)(uint)param_1[iVar1 + 1] * (_DAT_5f75d4a4 - fVar2) +
                        fVar2 * (float)(uint)param_1[0x12f]));
  uStack_18 = (uint)((ulonglong)dVar4 >> 0x20);
  local_1c = SUB84(dVar4,0);
  uVar3 = uStack_18 >> 0x14 & 0x7ff;
  if (uVar3 < 0x3ff) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uStack_18 << 0xb | local_1c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
    if ((longlong)dVar4 < 0) {
      uVar3 = -uVar3;
    }
  }
  param_1[iVar1 + 2] = uVar3;
  return;
}


