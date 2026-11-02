/* Module: mp3plug.dll
   Function: FUN_5f6e7430
   Address: 5f6e7430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6e7430(int param_1,uint *param_2)

{
  double dVar1;
  uint *in_EAX;
  uint uVar2;
  float10 in_ST0;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float in_stack_00000014;
  uint local_4c;
  uint uStack_48;
  uint local_3c;
  uint uStack_38;
  uint local_2c;
  uint uStack_28;
  uint local_1c;
  uint uStack_18;
  
  fVar3 = (float10)(int)(*param_2 - *in_EAX) * (float10)_DAT_5f75d6c8;
  fVar4 = (float10)(int)*in_EAX + fVar3;
  fVar7 = in_ST0 - fVar4;
  fVar5 = (fVar7 / fVar3) * (float10)_DAT_5f75d6d0;
  if ((float10)_DAT_5f75d6d4 < fVar5) {
    fVar5 = (float10)_DAT_5f75d6d8;
  }
  if (fVar5 < (float10)_DAT_5f75d6dc) {
    fVar5 = (float10)_DAT_5f75d6e0;
  }
  fVar5 = (fVar5 + (float10)_DAT_5f75d6e4) * (float10)in_stack_00000014;
  fVar3 = (ABS(fVar7) - fVar3) * fVar5 + fVar3;
  dVar1 = (double)(_DAT_5f75d6e8 * (float)param_1);
  uStack_48 = (uint)((ulonglong)dVar1 >> 0x20);
  local_4c = SUB84(dVar1,0);
  uVar2 = uStack_48 >> 0x14 & 0x7ff;
  if (uVar2 < 0x3ff) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uStack_48 << 0xb | local_4c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar2 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar2 = -uVar2;
    }
  }
  fVar6 = (float10)(int)uVar2;
  if (fVar3 < fVar6) {
    fVar6 = fVar3;
  }
  dVar1 = (double)((float)param_1 * _DAT_5f75d6ec);
  uStack_38 = (uint)((ulonglong)dVar1 >> 0x20);
  local_3c = SUB84(dVar1,0);
  uVar2 = uStack_38 >> 0x14 & 0x7ff;
  if (uVar2 < 0x3ff) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uStack_38 << 0xb | local_3c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar2 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar2 = -uVar2;
    }
  }
  fVar3 = (float10)(int)uVar2;
  if (fVar3 < fVar6) {
    fVar3 = fVar6;
  }
  fVar4 = fVar4 + fVar5 * fVar7;
  if ((float10)_DAT_5f75d6f0 * fVar4 < fVar3) {
    fVar3 = (float10)_DAT_5f75d6f0 * fVar4;
  }
  dVar1 = (double)((fVar4 - fVar3) + (float10)_DAT_5f75d6f4);
  uStack_28 = (uint)((ulonglong)dVar1 >> 0x20);
  local_2c = SUB84(dVar1,0);
  uVar2 = uStack_28 >> 0x14 & 0x7ff;
  if (uVar2 < 0x3ff) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uStack_28 << 0xb | local_2c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar2 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar2 = -uVar2;
    }
  }
  *in_EAX = uVar2;
  dVar1 = (double)(fVar4 + (float10)_DAT_5f75d6f8 + fVar3);
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
  *param_2 = uVar2;
  return;
}


