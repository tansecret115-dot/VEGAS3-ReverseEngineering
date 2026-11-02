/* Module: ednt3260.dll
   Function: FUN_630f5760
   Address: 630f5760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_630f5760(short param_1,short param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  short asStack_88 [32];
  short asStack_48 [32];
  int local_8;
  
  if (param_1 == 0) {
    if (param_2 < 0xa0) {
      iVar2 = (int)param_2;
    }
    else {
      iVar2 = 0xa0;
    }
  }
  else {
    iVar2 = (int)param_2;
  }
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  if (0x9f < param_1) {
    return 0;
  }
  uVar6 = (uint)param_1;
  uVar7 = (int)uVar6 >> 0x1f;
  iVar10 = (int)(uVar6 + (uVar7 & 7)) >> 3;
  if (((uVar6 ^ uVar7) - uVar7 & 7 ^ uVar7) != uVar7) {
    iVar10 = iVar10 + 1;
  }
  if (iVar10 < iVar2) {
    psVar12 = asStack_88 + iVar10;
    psVar11 = (short *)(iVar10 * 0x10 + param_3);
    iVar9 = iVar2 - iVar10;
    do {
      *psVar12 = 0;
      sVar13 = *psVar12;
      iVar3 = 8;
      do {
        sVar5 = *psVar11;
        psVar11 = psVar11 + 1;
        sVar13 = sVar13 + sVar5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *psVar12 = sVar13;
      uVar7 = (uint)sVar13;
      uVar6 = (int)uVar7 >> 0x1f;
      if ((int)(((uVar7 ^ uVar6) - uVar6 & 7 ^ uVar6) - uVar6) < 5) {
        sVar13 = (short)((int)(uVar7 + (uVar6 & 7)) >> 3);
      }
      else {
        sVar13 = (short)((int)(uVar7 + (uVar6 & 7)) >> 3) + 1;
      }
      *psVar12 = sVar13;
      psVar12 = psVar12 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  local_8 = iVar10;
  if (iVar10 < iVar2) {
    psVar12 = (short *)(iVar10 * 0x10 + param_3);
    do {
      sVar13 = asStack_88[local_8];
      asStack_48[local_8] = 0;
      iVar9 = 8;
      do {
        iVar3 = local_8;
        iVar8 = -(int)*psVar12;
        if (sVar13 + iVar8 < 0) {
          sVar5 = *psVar12 - sVar13;
        }
        else {
          sVar5 = sVar13 + (short)iVar8;
        }
        psVar12 = psVar12 + 1;
        asStack_48[local_8] = asStack_48[local_8] + sVar5;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar6 = (uint)asStack_48[iVar3];
      uVar7 = (int)uVar6 >> 0x1f;
      if ((int)(((uVar6 ^ uVar7) - uVar7 & 7 ^ uVar7) - uVar7) < 5) {
        sVar13 = (short)((int)(uVar6 + (uVar7 & 7)) >> 3);
      }
      else {
        sVar13 = (short)((int)(uVar6 + (uVar7 & 7)) >> 3) + 1;
      }
      asStack_48[iVar3] = sVar13;
      local_8 = iVar3 + 1;
    } while (local_8 < iVar2);
  }
  iVar3 = 0;
  iVar9 = 0;
  _param_1 = 0;
  if (iVar10 < iVar2) {
    psVar12 = asStack_48 + iVar10;
    iVar8 = iVar2 - iVar10;
    do {
      iVar4 = (int)*psVar12;
      iVar3 = iVar3 + iVar4;
      if (iVar9 < iVar4) {
        iVar9 = iVar4;
      }
      psVar12 = psVar12 + 1;
      iVar8 = iVar8 + -1;
      _param_1 = iVar3;
    } while (iVar8 != 0);
  }
  dVar1 = (double)_param_1 / (double)(iVar2 - iVar10);
  if ((_DAT_631028f8 < dVar1) && (3 < iVar9)) {
    return 0;
  }
  if ((dVar1 < _DAT_63102900) && (iVar9 < 2)) {
    return 2;
  }
  if ((dVar1 < _DAT_63102908) && (iVar9 < 2)) {
    return 1;
  }
  return 0xffffffff;
}


