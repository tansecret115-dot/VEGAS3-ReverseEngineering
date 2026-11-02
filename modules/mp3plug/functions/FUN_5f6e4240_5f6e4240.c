/* Module: mp3plug.dll
   Function: FUN_5f6e4240
   Address: 5f6e4240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_5f6e4240(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  void *pvVar6;
  int extraout_EAX;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint local_68;
  uint uStack_64;
  uint local_58;
  uint uStack_54;
  double local_48;
  
  if ((param_5 != 0) && (1 < param_2)) {
    pfVar5 = calloc(1,0x54);
    *param_1 = (int)pfVar5;
    *pfVar5 = (float)(((param_3 * 0x240) / param_4) / param_2);
    *(undefined4 *)(*param_1 + 4) = 0;
    *(undefined4 *)(*param_1 + 0x24) = 0x41700000;
    *(undefined4 *)(*param_1 + 0x20) = 0x3f000000;
    dVar1 = (double)(*(float *)(*param_1 + 0x24) / *(float *)(*param_1 + 0x20));
    uStack_64 = (uint)((ulonglong)dVar1 >> 0x20);
    local_68 = SUB84(dVar1,0);
    uVar7 = uStack_64 >> 0x14 & 0x7ff;
    if (uVar7 < 0x3ff) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uStack_64 << 0xb | local_68 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar7 & 0x1f);
      if ((longlong)dVar1 < 0) {
        uVar7 = -uVar7;
      }
    }
    pvVar6 = calloc(uVar7 + 1,4);
    *(void **)(*param_1 + 0x28) = pvVar6;
    iVar8 = *param_1;
    bVar10 = *(int *)(iVar8 + 0x28) == 0;
    dVar1 = (double)(*(float *)(iVar8 + 0x24) / *(float *)(iVar8 + 0x20));
    uStack_54 = (uint)((ulonglong)dVar1 >> 0x20);
    local_58 = SUB84(dVar1,0);
    uVar7 = uStack_54 >> 0x14 & 0x7ff;
    if (uVar7 < 0x3ff) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uStack_54 << 0xb | local_58 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar7 & 0x1f);
      if ((longlong)dVar1 < 0) {
        uVar7 = -uVar7;
      }
    }
    pvVar6 = calloc(uVar7 + 1,4);
    *(void **)(*param_1 + 0x2c) = pvVar6;
    bVar11 = *(int *)(*param_1 + 0x2c) == 0;
    **(undefined4 **)(*param_1 + 0x28) = 0x3f800000;
    fVar2 = (float)param_4 * _DAT_5f75d3ec;
    **(undefined4 **)(*param_1 + 0x2c) = 0;
    *(undefined4 *)(*param_1 + 0x14) = 1;
    fVar3 = (float)_DAT_5f75d3f0;
    *(float *)(*param_1 + 0xc) = fVar2;
    *(float *)(*param_1 + 0x10) = (float)param_4 * fVar3;
    fVar2 = _DAT_5f75d40c / ((float)param_3 * (float)param_3);
    *(undefined4 *)(*param_1 + 0x34) = 0x40a00000;
    fVar3 = _DAT_5f75d414;
    *(undefined4 *)(*param_1 + 0x3c) = 0x41c80000;
    fVar4 = _DAT_5f75d418;
    *(undefined4 *)(*param_1 + 0x44) = 0x42f00000;
    *(undefined4 *)(*param_1 + 0x40) = 0x41f00000;
    *(undefined4 *)(*param_1 + 0x48) = 0x42c80000;
    *(float *)(*param_1 + 0x50) = fVar2;
    *(float *)(*param_1 + 8) = fVar3 * *(float *)(*param_1 + 0x24);
    iVar8 = *param_1;
    local_48 = (double)(fVar4 + *(float *)(iVar8 + 0x20));
    if ((!bVar11 && (!bVar10 && pfVar5 != (float *)0x0)) &&
       (local_48 <= (double)*(float *)(iVar8 + 0x24))) {
      iVar9 = 1;
      do {
        pow(_DAT_5f75d420,-local_48 * _DAT_5f75d428);
        *(float *)(*(int *)(iVar8 + 0x28) + iVar9 * 4) =
             ((float)extraout_EAX + _DAT_5f75d434) * _DAT_5f75d430;
        *(float *)(*(int *)(*param_1 + 0x2c) + iVar9 * 4) =
             (_DAT_5f75d43c - (float)extraout_EAX) * _DAT_5f75d438;
        iVar8 = *param_1;
        local_48 = local_48 + (double)*(float *)(iVar8 + 0x20);
        iVar9 = iVar9 + 1;
      } while (local_48 <= (double)*(float *)(iVar8 + 0x24));
    }
    return bVar11 || (bVar10 || pfVar5 == (float *)0x0);
  }
  *param_1 = 0;
  return false;
}


