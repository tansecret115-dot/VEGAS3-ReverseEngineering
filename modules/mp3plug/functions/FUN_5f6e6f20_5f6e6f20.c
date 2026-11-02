/* Module: mp3plug.dll
   Function: FUN_5f6e6f20
   Address: 5f6e6f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_5f6e6f20(int *param_1,int param_2)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  uint local_a0;
  uint uStack_9c;
  int local_78;
  int local_70;
  int local_58;
  
  iVar6 = *param_1;
  fVar10 = (float10)_DAT_5f75d658;
  fVar5 = _DAT_5f75d650;
  if ((((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 3)) || ((iVar6 == 4 || (iVar6 == 6)))) {
    piVar4 = *(int **)param_1[2];
    if (0 < *piVar4) {
      iVar6 = 0;
      do {
        iVar8 = *(int *)(piVar4[1] + iVar6 * 4);
        iVar3 = iVar6 + 1;
        if (0 < iVar8) {
          iVar9 = 0;
          do {
            iVar1 = iVar9 + *(int *)(piVar4[2] + iVar6 * 4) * 4;
            if (_DAT_5f75d664 != *(float *)(param_2 + 8 + iVar1)) {
              if ((float10)_DAT_5f75d648 < fVar10) {
                fVar11 = (float10)log2(fVar10);
                fVar10 = (float10)_DAT_5f75d668;
                fVar5 = (float)((float10)0.6931471805599453 * fVar11 + (float10)fVar5);
              }
              fVar11 = (float10)*(float *)(param_2 + 8 + iVar1);
              fVar10 = (fVar11 * fVar11 *
                        (float10)((float)iVar8 / *(float *)(param_1[8] + iVar6 * 4)) +
                       (float10)_DAT_5f75d670) * fVar10;
            }
            iVar9 = iVar9 + 4;
          } while (iVar9 < iVar8 * 4);
        }
        iVar6 = iVar3;
      } while (iVar3 < *piVar4);
    }
  }
  else if (iVar6 == 2) {
    iVar6 = 0;
    piVar4 = *(int **)(param_1[2] + 4);
    do {
      local_78 = 0;
      if (0 < *piVar4) {
        do {
          iVar8 = *(int *)(piVar4[1] + local_78 * 4);
          iVar3 = local_78 + 1;
          if (0 < iVar8 * 3) {
            iVar9 = 0;
            do {
              iVar1 = iVar9 + (iVar6 + *(int *)(piVar4[2] + local_78 * 4) * 3) * 4;
              if (_DAT_5f75d680 != *(float *)(param_2 + 8 + iVar1)) {
                if ((float10)_DAT_5f75d648 < fVar10) {
                  fVar11 = (float10)log2(fVar10);
                  fVar10 = (float10)_DAT_5f75d688;
                  fVar5 = (float)((float10)0.6931471805599453 * fVar11 + (float10)fVar5);
                }
                fVar11 = (float10)*(float *)(param_2 + 8 + iVar1);
                fVar10 = (fVar11 * fVar11 *
                          (float10)((float)iVar8 / *(float *)(param_1[iVar6 + 9] + local_78 * 4)) +
                         (float10)_DAT_5f75d690) * fVar10;
              }
              iVar9 = iVar9 + 0xc;
            } while (iVar9 < iVar8 * 0xc);
          }
          local_78 = iVar3;
        } while (iVar3 < *piVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
  }
  else if (iVar6 == 5) {
    local_70 = 0;
    while( true ) {
      if (param_1[1] == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = 6;
      }
      if (iVar6 <= local_70) break;
      iVar6 = *(int *)param_1[2];
      iVar3 = *(int *)(*(int *)(iVar6 + 4) + local_70 * 4);
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          iVar9 = iVar8 + *(int *)(*(int *)(iVar6 + 8) + local_70 * 4) * 4;
          if (_DAT_5f75d69c != *(float *)(param_2 + 8 + iVar9)) {
            if ((float10)_DAT_5f75d648 < fVar10) {
              fVar11 = (float10)log2(fVar10);
              fVar10 = (float10)_DAT_5f75d6a0;
              fVar5 = (float)((float10)0.6931471805599453 * fVar11 + (float10)fVar5);
            }
            fVar11 = (float10)*(float *)(param_2 + 8 + iVar9);
            fVar10 = (fVar11 * fVar11 *
                      (float10)((float)iVar3 / *(float *)(param_1[8] + local_70 * 4)) +
                     (float10)_DAT_5f75d6a8) * fVar10;
          }
          iVar8 = iVar8 + 4;
        } while (iVar8 < iVar3 * 4);
      }
      local_70 = local_70 + 1;
    }
    iVar6 = 0;
    piVar4 = (int *)((int *)param_1[2])[1];
    do {
      local_58 = 3;
      if (3 < *piVar4) {
        do {
          iVar8 = *(int *)(piVar4[1] + local_58 * 4);
          iVar3 = local_58 + 1;
          if (0 < iVar8 * 3) {
            iVar9 = 0;
            do {
              iVar1 = iVar9 + (iVar6 + *(int *)(piVar4[2] + local_58 * 4) * 3) * 4;
              if (_DAT_5f75d6b4 != *(float *)(param_2 + 8 + iVar1)) {
                if ((float10)_DAT_5f75d648 < fVar10) {
                  fVar11 = (float10)log2(fVar10);
                  fVar10 = (float10)_DAT_5f75d6b8;
                  fVar5 = (float)((float10)0.6931471805599453 * fVar11 + (float10)fVar5);
                }
                fVar11 = (float10)*(float *)(param_2 + 8 + iVar1);
                fVar10 = (fVar11 * fVar11 *
                          (float10)((float)iVar8 / *(float *)(param_1[iVar6 + 9] + local_58 * 4)) +
                         (float10)_DAT_5f75d6c0) * fVar10;
              }
              iVar9 = iVar9 + 0xc;
            } while (iVar9 < iVar8 * 0xc);
          }
          local_58 = iVar3;
        } while (iVar3 < *piVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
  }
  fVar10 = (float10)log2(fVar10);
  dVar2 = (double)(((float10)0.6931471805599453 * fVar10 + (float10)fVar5) * (float10)_DAT_5f75d640
                  + (float10)_DAT_5f75d678);
  uStack_9c = (uint)((ulonglong)dVar2 >> 0x20);
  local_a0 = SUB84(dVar2,0);
  uVar7 = uStack_9c >> 0x14 & 0x7ff;
  if (uVar7 < 0x3ff) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uStack_9c << 0xb | local_a0 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar7 & 0x1f);
    if ((longlong)dVar2 < 0) {
      uVar7 = -uVar7;
    }
  }
  return uVar7;
}


