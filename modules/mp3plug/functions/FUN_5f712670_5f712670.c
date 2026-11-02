/* Module: mp3plug.dll
   Function: FUN_5f712670
   Address: 5f712670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_5f712670(void *this,float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint local_3c;
  uint uStack_38;
  uint local_2c;
  uint uStack_28;
  uint local_1c;
  uint uStack_18;
  
  fVar2 = _DAT_5f764804;
  if ((_DAT_5f764800 <= param_1) && (fVar2 = param_1, _DAT_5f764814 < param_1)) {
    fVar2 = _DAT_5f764818;
  }
  if (((*(char *)((int)this + 5) != '\0') && (uVar6 = *(uint *)((int)this + 0x40), uVar6 != 0)) &&
     ((*(uint *)((int)this + 0x70) & 4) != 0)) {
    dVar1 = (double)fVar2;
    uStack_38 = (uint)((ulonglong)dVar1 >> 0x20);
    local_3c = SUB84(dVar1,0);
    uVar5 = uStack_38 >> 0x14 & 0x7ff;
    if (uVar5 < 0x3ff) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uStack_38 << 0xb | local_3c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar5 & 0x1f);
      if ((longlong)dVar1 < 0) {
        uVar5 = -uVar5;
      }
    }
    if (99 < uVar5) {
      uVar5 = 99;
    }
    fVar3 = (float)*(byte *)((int)this + uVar5 + 0x7c);
    fVar4 = _DAT_5f76480c;
    if (uVar5 < 99) {
      fVar4 = (float)*(byte *)(uVar5 + 0x7d + (int)this);
    }
    dVar1 = (double)(((fVar2 - (float)uVar5) * (fVar4 - fVar3) + fVar3) * _DAT_5f764808 *
                    (float)uVar6);
    uStack_28 = (uint)((ulonglong)dVar1 >> 0x20);
    local_2c = SUB84(dVar1,0);
    uVar5 = uStack_28 >> 0x14 & 0x7ff;
    if (uVar5 < 0x3ff) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uStack_28 << 0xb | local_2c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar5 & 0x1f);
      if ((longlong)dVar1 < 0) {
        uVar5 = -uVar5;
      }
    }
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    return uVar5;
  }
  dVar1 = (double)((float)*(uint *)((int)this + 0x12) * fVar2 * _DAT_5f764810);
  uStack_18 = (uint)((ulonglong)dVar1 >> 0x20);
  local_1c = SUB84(dVar1,0);
  uVar6 = uStack_18 >> 0x14 & 0x7ff;
  if (uVar6 < 0x3ff) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uStack_18 << 0xb | local_1c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar6 & 0x1f);
    if ((longlong)dVar1 < 0) {
      uVar6 = -uVar6;
    }
  }
  uVar6 = (**(code **)(*(int *)this + 0x10))(uVar6);
  return uVar6;
}


