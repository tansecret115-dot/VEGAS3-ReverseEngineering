/* Module: vidpcore.dll
   Function: SfDibBrightness
   Address: 5de6cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibBrightness(void *,struct tagRECT *,long,struct tagRECT *,long,float) */

long SfDibBrightness(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,long param_5,
                    float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int local_120;
  int local_11c;
  int local_118 [2];
  undefined1 local_110 [16];
  byte local_100 [256];
  
                    /* 0x6cda0  14  ?SfDibBrightness@@YGJPAXPAUtagRECT@@J1JM@Z */
  lVar4 = FUN_5debc1e0(local_110,local_118,&local_11c,&local_120,&local_120,param_1,param_2,param_3,
                       param_4,param_1,param_2,param_3,param_4,param_5);
  if (lVar4 < 0) {
    return lVar4;
  }
  if (param_5 == 4) {
    iVar5 = ftol();
    iVar11 = 0x100;
    iVar6 = iVar5;
    do {
      if (iVar6 < 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0xff;
        if (iVar6 < 0x100) {
          iVar9 = iVar6;
        }
      }
      local_100[iVar6 - iVar5] = (byte)iVar9;
      iVar6 = iVar6 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    iVar6 = 0;
    if (0 < local_11c) {
      do {
        iVar5 = 0;
        if (0 < local_118[0]) {
          pbVar7 = (byte *)(local_120 + 3);
          do {
            bVar8 = *pbVar7;
            if (local_100[pbVar7[-3]] < *pbVar7) {
              bVar8 = local_100[pbVar7[-3]];
            }
            pbVar7[-3] = bVar8;
            bVar8 = local_100[pbVar7[-2]];
            if (*pbVar7 <= local_100[pbVar7[-2]]) {
              bVar8 = *pbVar7;
            }
            pbVar7[-2] = bVar8;
            bVar8 = local_100[pbVar7[-1]];
            if (*pbVar7 <= local_100[pbVar7[-1]]) {
              bVar8 = *pbVar7;
            }
            pbVar7[-1] = bVar8;
            iVar5 = iVar5 + 1;
            pbVar7 = pbVar7 + 4;
          } while (iVar5 < local_118[0]);
        }
        local_120 = local_120 + param_3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_11c);
      return lVar4;
    }
  }
  else {
    iVar6 = 0;
    if (0 < local_11c) {
      do {
        iVar5 = 0;
        if (0 < local_118[0]) {
          pfVar10 = (float *)(local_120 + 0xc);
          do {
            fVar1 = param_6 + *pfVar10;
            fVar2 = _DAT_5df205cc;
            if ((_DAT_5df205cc <= fVar1) && (fVar2 = fVar1, _DAT_5df205c8 < fVar1)) {
              fVar2 = _DAT_5df205c8;
            }
            *pfVar10 = fVar2;
            fVar3 = param_6 + pfVar10[-3];
            fVar1 = _DAT_5df205cc;
            if ((_DAT_5df205cc <= fVar3) && (fVar1 = fVar3, fVar2 < fVar3)) {
              fVar1 = fVar2;
            }
            pfVar10[-3] = fVar1;
            fVar1 = param_6 + pfVar10[-2];
            fVar2 = _DAT_5df205cc;
            if ((_DAT_5df205cc <= fVar1) && (fVar2 = fVar1, *pfVar10 < fVar1)) {
              fVar2 = *pfVar10;
            }
            pfVar10[-2] = fVar2;
            fVar1 = param_6 + pfVar10[-1];
            fVar2 = _DAT_5df205cc;
            if ((_DAT_5df205cc <= fVar1) && (fVar2 = fVar1, *pfVar10 < fVar1)) {
              fVar2 = *pfVar10;
            }
            pfVar10[-1] = fVar2;
            iVar5 = iVar5 + 1;
            pfVar10 = pfVar10 + 4;
          } while (iVar5 < local_118[0]);
        }
        local_120 = local_120 + param_3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_11c);
    }
  }
  return lVar4;
}


