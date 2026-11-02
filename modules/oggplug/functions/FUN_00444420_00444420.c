/* Module: oggplug.dll
   Function: FUN_00444420
   Address: 00444420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_00444420(int *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  short *psVar11;
  int local_8;
  
  iVar1 = FUN_00444410();
  if (param_1[0x16] < 2) {
    return -0x83;
  }
  if (param_1[0x16] != 2) {
    while ((param_1[0x16] < 3 || (uVar2 = FUN_00432040((int)(param_1 + 0x78),&local_8), uVar2 == 0))
          ) {
      uVar3 = FUN_00443e20(param_1,1);
      switch(uVar3) {
      case 0xffffff77:
        return -0x89;
      case 0xfffffffd:
        return -3;
      case 0xfffffffe:
      case 0:
        return 0;
      }
    }
    iVar4 = FUN_00444390((int)param_1,-1);
    iVar4 = *(int *)(iVar4 + 4);
    iVar8 = iVar4 * param_5;
    uVar5 = param_3 / iVar8;
    if ((int)uVar5 < (int)uVar2) {
      uVar2 = uVar5;
    }
    if (param_5 == 1) {
      iVar1 = 0;
      if (0 < (int)uVar2) {
        do {
          iVar6 = 0;
          if (0 < iVar4) {
            do {
              iVar9 = (int)ROUND(*(float *)(*(int *)(local_8 + iVar6 * 4) + iVar1 * 4) *
                                 _DAT_0044d4b0);
              if (iVar9 < 0x80) {
                if (iVar9 < -0x80) {
                  iVar9 = -0x80;
                }
              }
              else {
                iVar9 = 0x7f;
              }
              *(byte *)param_2 = (-(param_6 != 0) & 0x80U) + 0x80 + (char)iVar9;
              param_2 = (short *)((int)param_2 + 1);
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar4);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar2);
      }
    }
    else {
      iVar6 = (-(uint)(param_6 != 0) & 0xffff8000) + 0x8000;
      if (iVar1 == param_4) {
        if (param_6 == 0) {
          param_5 = 0;
          if (0 < iVar4) {
            do {
              pfVar10 = *(float **)(local_8 + param_5 * 4);
              psVar11 = param_2;
              uVar5 = uVar2;
              if (0 < (int)uVar2) {
                do {
                  iVar1 = (int)ROUND(*pfVar10 * _DAT_0044d4b4);
                  if (iVar1 < 0x8000) {
                    if (iVar1 < -0x8000) {
                      iVar1 = -0x8000;
                    }
                  }
                  else {
                    iVar1 = 0x7fff;
                  }
                  pfVar10 = pfVar10 + 1;
                  *psVar11 = (short)iVar1 + -0x8000;
                  uVar5 = uVar5 - 1;
                  psVar11 = psVar11 + iVar4;
                } while (uVar5 != 0);
              }
              param_5 = param_5 + 1;
              param_2 = param_2 + 1;
            } while (param_5 < iVar4);
          }
        }
        else {
          iVar1 = 0;
          if (0 < iVar4) {
            do {
              pfVar10 = *(float **)(local_8 + iVar1 * 4);
              psVar11 = param_2;
              uVar5 = uVar2;
              if (0 < (int)uVar2) {
                do {
                  iVar6 = (int)ROUND(*pfVar10 * _DAT_0044d4b4);
                  if (iVar6 < 0x8000) {
                    if (iVar6 < -0x8000) {
                      iVar6 = -0x8000;
                    }
                  }
                  else {
                    iVar6 = 0x7fff;
                  }
                  *psVar11 = (short)iVar6;
                  pfVar10 = pfVar10 + 1;
                  uVar5 = uVar5 - 1;
                  psVar11 = psVar11 + iVar4;
                } while (uVar5 != 0);
              }
              iVar1 = iVar1 + 1;
              param_2 = param_2 + 1;
            } while (iVar1 < iVar4);
          }
        }
      }
      else {
        iVar1 = 0;
        if (param_4 == 0) {
          param_5 = 0;
          if (0 < (int)uVar2) {
            do {
              iVar1 = 0;
              if (0 < iVar4) {
                do {
                  iVar9 = (int)ROUND(*(float *)(*(int *)(local_8 + iVar1 * 4) + param_5 * 4) *
                                     _DAT_0044d4b4);
                  if (iVar9 < 0x8000) {
                    if (iVar9 < -0x8000) {
                      iVar9 = -0x8000;
                    }
                  }
                  else {
                    iVar9 = 0x7fff;
                  }
                  iVar9 = iVar9 + iVar6;
                  *(char *)param_2 = (char)iVar9;
                  *(char *)((int)param_2 + 1) = (char)((uint)iVar9 >> 8);
                  param_2 = param_2 + 1;
                  iVar1 = iVar1 + 1;
                } while (iVar1 < iVar4);
              }
              param_5 = param_5 + 1;
            } while (param_5 < (int)uVar2);
          }
        }
        else if (0 < (int)uVar2) {
          do {
            iVar9 = 0;
            if (0 < iVar4) {
              do {
                iVar7 = (int)ROUND(*(float *)(*(int *)(local_8 + iVar9 * 4) + iVar1 * 4) *
                                   _DAT_0044d4b4);
                if (iVar7 < 0x8000) {
                  if (iVar7 < -0x8000) {
                    iVar7 = -0x8000;
                  }
                }
                else {
                  iVar7 = 0x7fff;
                }
                iVar7 = iVar7 + iVar6;
                *(char *)param_2 = (char)((uint)iVar7 >> 8);
                *(char *)((int)param_2 + 1) = (char)iVar7;
                param_2 = param_2 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar4);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar2);
        }
      }
    }
    FUN_004320a0((int)(param_1 + 0x78),uVar2);
    uVar5 = param_1[0x14];
    param_1[0x14] = uVar5 + uVar2;
    param_1[0x15] = param_1[0x15] + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar5,uVar2);
    if (param_7 != (int *)0x0) {
      *param_7 = param_1[0x18];
    }
    return iVar8 * uVar2;
  }
  return -2;
}


