/* Module: 28_83260.dll
   Function: FUN_10004e20
   Address: 10004e20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10004e20(void *this,float *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_94 [36];
  
  iVar6 = param_3;
  puVar8 = (undefined4 *)((int)this + 0xa28);
  puVar9 = local_94;
  for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = local_94;
  puVar9 = (undefined4 *)((int)this + 0xa3c);
  for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if (param_3 == 0x24) {
    _DAT_1000ca14 = *(float *)((int)this + 0xbdc);
    _DAT_1000ca18 = *(float *)((int)this + 0xbe0);
    _DAT_1000ca24 = *(float *)((int)this + 0xbe4);
    _DAT_1000ca28 = *(float *)((int)this + 0xbe8);
    _DAT_1000ca1c = *(float *)((int)this + 0xbec);
    _DAT_1000ca20 = *(float *)((int)this + 0xbf0);
    _DAT_1000ca30 = *(float *)((int)this + 0xbf4);
    _DAT_1000ca34 = *(float *)((int)this + 0xbf8);
    _DAT_1000ca2c = *(float *)((int)this + 0xbfc);
    _DAT_1000ca7c = *(float *)((int)this + 0xc00);
    _DAT_1000ca84 = *(float *)((int)this + 0xc04);
    _DAT_1000ca80 = *(float *)((int)this + 0xc08);
    _DAT_1000ca90 = *(float *)((int)this + 0xc0c);
    _DAT_1000ca8c = *(float *)((int)this + 0xc10);
    _DAT_1000caa0 = *(float *)((int)this + 0xc14);
    _DAT_1000ca98 = *(float *)((int)this + 0xc18);
    _DAT_1000ca48 = *(float *)((int)this + 0xc1c);
    _DAT_1000ca40 = *(float *)((int)this + 0xc20);
    _DAT_1000ca5c = *(float *)((int)this + 0xc24);
    _DAT_1000ca88 = *(float *)((int)this + 0xc28);
    _DAT_1000ca9c = *(float *)((int)this + 0xc2c);
    _DAT_1000ca94 = *(float *)((int)this + 0xc30);
    _DAT_1000ca44 = *(float *)((int)this + 0xc34);
    _DAT_1000ca3c = *(float *)((int)this + 0xc38);
    _DAT_1000ca58 = *(float *)((int)this + 0xc3c);
    _DAT_1000ca50 = *(float *)((int)this + 0xc40);
    _DAT_1000ca6c = *(float *)((int)this + 0xc44);
    _DAT_1000ca64 = *(float *)((int)this + 0xc48);
    _DAT_1000ca78 = *(float *)((int)this + 0xc4c);
    _DAT_1000ca38 = *(float *)((int)this + 0xc50);
    _DAT_1000ca54 = *(float *)((int)this + 0xc54);
    _DAT_1000ca4c = *(float *)((int)this + 0xc58);
    _DAT_1000ca68 = *(float *)((int)this + 0xc5c);
    _DAT_1000ca60 = *(float *)((int)this + 0xc60);
    _DAT_1000ca74 = *(float *)((int)this + 0xc64);
    _DAT_1000ca70 = *(float *)((int)this + 0xc68);
    iVar6 = 5;
    pfVar3 = (float *)((int)this + 0xa44);
    do {
      iVar6 = iVar6 + -1;
      fVar2 = -(pfVar3[0x20] * _DAT_1000ca74 +
               _DAT_1000ca24 * *pfVar3 +
               pfVar3[0x21] * _DAT_1000ca70 +
               pfVar3[-2] * _DAT_1000ca14 +
               pfVar3[1] * _DAT_1000ca28 +
               pfVar3[3] * _DAT_1000ca20 +
               pfVar3[2] * _DAT_1000ca1c +
               pfVar3[5] * _DAT_1000ca34 +
               pfVar3[4] * _DAT_1000ca30 +
               pfVar3[6] * _DAT_1000ca2c +
               pfVar3[7] * _DAT_1000ca7c +
               pfVar3[8] * _DAT_1000ca84 +
               pfVar3[0xb] * _DAT_1000ca8c +
               pfVar3[9] * _DAT_1000ca80 +
               pfVar3[10] * _DAT_1000ca90 +
               pfVar3[0xe] * _DAT_1000ca48 +
               pfVar3[0xf] * _DAT_1000ca40 +
               pfVar3[0xd] * _DAT_1000ca98 +
               pfVar3[0xc] * _DAT_1000caa0 +
               pfVar3[0x15] * _DAT_1000ca3c +
               pfVar3[0x14] * _DAT_1000ca44 +
               pfVar3[0x10] * _DAT_1000ca5c +
               pfVar3[0x16] * _DAT_1000ca58 +
               pfVar3[0x11] * _DAT_1000ca88 +
               pfVar3[0x17] * _DAT_1000ca50 +
               pfVar3[0x13] * _DAT_1000ca94 +
               pfVar3[0x12] * _DAT_1000ca9c +
               pfVar3[0x1e] * _DAT_1000ca68 +
               pfVar3[0x1f] * _DAT_1000ca60 +
               pfVar3[0x1d] * _DAT_1000ca4c +
               pfVar3[0x1c] * _DAT_1000ca54 +
               pfVar3[0x18] * _DAT_1000ca6c +
               pfVar3[0x1b] * _DAT_1000ca38 +
               pfVar3[0x19] * _DAT_1000ca64 +
               pfVar3[0x1a] * _DAT_1000ca78 + _DAT_1000ca18 * pfVar3[-1]);
      *param_1 = fVar2;
      pfVar3[-3] = fVar2;
      pfVar3 = pfVar3 + -1;
      param_1 = param_1 + 1;
    } while (iVar6 != 0);
    return;
  }
  if (param_3 == 0x18) {
    _DAT_1000ca14 = *(float *)((int)this + 0xbdc);
    _DAT_1000ca18 = *(float *)((int)this + 0xbe0);
    _DAT_1000ca24 = *(float *)((int)this + 0xbe4);
    _DAT_1000ca28 = *(float *)((int)this + 0xbe8);
    _DAT_1000ca1c = *(float *)((int)this + 0xbec);
    _DAT_1000ca20 = *(float *)((int)this + 0xbf0);
    _DAT_1000ca30 = *(float *)((int)this + 0xbf4);
    _DAT_1000ca34 = *(float *)((int)this + 0xbf8);
    _DAT_1000ca2c = *(float *)((int)this + 0xbfc);
    _DAT_1000ca7c = *(float *)((int)this + 0xc00);
    _DAT_1000ca84 = *(float *)((int)this + 0xc04);
    _DAT_1000ca80 = *(float *)((int)this + 0xc08);
    _DAT_1000ca90 = *(float *)((int)this + 0xc0c);
    _DAT_1000ca8c = *(float *)((int)this + 0xc10);
    _DAT_1000caa0 = *(float *)((int)this + 0xc14);
    _DAT_1000ca98 = *(float *)((int)this + 0xc18);
    _DAT_1000ca48 = *(float *)((int)this + 0xc1c);
    _DAT_1000ca40 = *(float *)((int)this + 0xc20);
    _DAT_1000ca5c = *(float *)((int)this + 0xc24);
    _DAT_1000ca88 = *(float *)((int)this + 0xc28);
    _DAT_1000ca9c = *(float *)((int)this + 0xc2c);
    _DAT_1000ca94 = *(float *)((int)this + 0xc30);
    _DAT_1000ca44 = *(float *)((int)this + 0xc34);
    _DAT_1000ca3c = *(float *)((int)this + 0xc38);
    iVar6 = 5;
    pfVar3 = (float *)((int)this + 0xa44);
    do {
      iVar6 = iVar6 + -1;
      fVar2 = -(_DAT_1000ca24 * *pfVar3 +
               pfVar3[-2] * _DAT_1000ca14 +
               pfVar3[1] * _DAT_1000ca28 +
               pfVar3[5] * _DAT_1000ca34 +
               pfVar3[4] * _DAT_1000ca30 +
               pfVar3[6] * _DAT_1000ca2c +
               pfVar3[7] * _DAT_1000ca7c +
               pfVar3[3] * _DAT_1000ca20 +
               pfVar3[2] * _DAT_1000ca1c +
               pfVar3[0xe] * _DAT_1000ca48 +
               pfVar3[0xf] * _DAT_1000ca40 +
               pfVar3[0xd] * _DAT_1000ca98 +
               pfVar3[0xc] * _DAT_1000caa0 +
               pfVar3[0xb] * _DAT_1000ca8c +
               pfVar3[8] * _DAT_1000ca84 +
               pfVar3[10] * _DAT_1000ca90 +
               pfVar3[9] * _DAT_1000ca80 +
               pfVar3[0x13] * _DAT_1000ca94 +
               pfVar3[0x12] * _DAT_1000ca9c +
               pfVar3[0x15] * _DAT_1000ca3c +
               pfVar3[0x14] * _DAT_1000ca44 +
               pfVar3[0x10] * _DAT_1000ca5c +
               pfVar3[0x11] * _DAT_1000ca88 + _DAT_1000ca18 * pfVar3[-1]);
      *param_1 = fVar2;
      pfVar3[-3] = fVar2;
      pfVar3 = pfVar3 + -1;
      param_1 = param_1 + 1;
    } while (iVar6 != 0);
    return;
  }
  if (param_3 == 0x10) {
    _DAT_1000ca14 = *(float *)((int)this + 0xbdc);
    pfVar3 = (float *)((int)this + 0xa44);
    _DAT_1000ca18 = *(float *)((int)this + 0xbe0);
    _DAT_1000ca24 = *(float *)((int)this + 0xbe4);
    _DAT_1000ca28 = *(float *)((int)this + 0xbe8);
    _DAT_1000ca1c = *(float *)((int)this + 0xbec);
    _DAT_1000ca20 = *(float *)((int)this + 0xbf0);
    _DAT_1000ca30 = *(float *)((int)this + 0xbf4);
    _DAT_1000ca34 = *(float *)((int)this + 0xbf8);
    _DAT_1000ca2c = *(float *)((int)this + 0xbfc);
    _DAT_1000ca7c = *(float *)((int)this + 0xc00);
    _DAT_1000ca84 = *(float *)((int)this + 0xc04);
    _DAT_1000ca80 = *(float *)((int)this + 0xc08);
    _DAT_1000ca90 = *(float *)((int)this + 0xc0c);
    _DAT_1000ca8c = *(float *)((int)this + 0xc10);
    _DAT_1000caa0 = *(float *)((int)this + 0xc14);
    _DAT_1000ca98 = *(float *)((int)this + 0xc18);
    iVar6 = 5;
    do {
      iVar6 = iVar6 + -1;
      fVar2 = -(pfVar3[10] * _DAT_1000ca90 +
               pfVar3[9] * _DAT_1000ca80 +
               pfVar3[0xb] * _DAT_1000ca8c +
               pfVar3[8] * _DAT_1000ca84 +
               pfVar3[0xc] * _DAT_1000caa0 +
               pfVar3[0xd] * _DAT_1000ca98 +
               pfVar3[2] * _DAT_1000ca1c +
               pfVar3[3] * _DAT_1000ca20 +
               pfVar3[4] * _DAT_1000ca30 +
               pfVar3[5] * _DAT_1000ca34 +
               pfVar3[7] * _DAT_1000ca7c +
               pfVar3[6] * _DAT_1000ca2c +
               _DAT_1000ca24 * *pfVar3 +
               pfVar3[-2] * _DAT_1000ca14 + pfVar3[1] * _DAT_1000ca28 + _DAT_1000ca18 * pfVar3[-1]);
      *param_1 = fVar2;
      pfVar3[-3] = fVar2;
      pfVar3 = pfVar3 + -1;
      param_1 = param_1 + 1;
    } while (iVar6 != 0);
    return;
  }
  param_3 = 5;
  pfVar3 = (float *)((int)this + 0xa38);
  do {
    fVar2 = _DAT_100070ec;
    if (0 < iVar6) {
      pfVar5 = (float *)((int)this + 0xbdc);
      iVar4 = iVar6;
      pfVar7 = pfVar3;
      do {
        pfVar7 = pfVar7 + 1;
        fVar1 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        iVar4 = iVar4 + -1;
        fVar2 = fVar2 - fVar1 * *pfVar7;
      } while (iVar4 != 0);
    }
    *param_1 = fVar2;
    param_1 = param_1 + 1;
    *pfVar3 = fVar2;
    param_3 = param_3 + -1;
    pfVar3 = pfVar3 + -1;
  } while (param_3 != 0);
  return;
}


