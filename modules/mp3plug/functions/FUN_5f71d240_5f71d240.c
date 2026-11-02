/* Module: mp3plug.dll
   Function: FUN_5f71d240
   Address: 5f71d240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f71d240(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  int in_EAX;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int local_7c;
  
  uVar3 = *(uint *)(in_stack_00000018 + 0x10);
  uVar13 = uVar3 & 1;
  if (uVar13 == 0) {
    local_7c = 0x16;
    iVar12 = *(int *)(in_stack_00000010 + 0x54);
  }
  else {
    iVar12 = *(int *)(in_stack_00000010 + 0x54);
    local_7c = iVar12;
  }
  iVar11 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x54) <= iVar12) {
    iVar11 = iVar12;
  }
  iVar12 = 0;
  if (0 < iVar11) {
    do {
      iVar9 = *(int *)(in_stack_00000018 + 0x18) * 0x1bc;
      iVar7 = *(int *)(in_stack_00000018 + 4) * 0x94;
      iVar10 = *(int *)(&DAT_5f7698b4 + iVar7 + iVar9 + iVar12 * 4);
      iVar9 = *(int *)(&DAT_5f7698b0 + iVar12 * 4 + iVar9 + iVar7);
      iVar7 = iVar12 + 1;
      uVar4 = *(uint *)(in_stack_00000014 + 0xf8 + iVar12 * 4);
      uVar5 = *(uint *)(in_stack_00000014 + iVar12 * 4);
      if (iVar12 < local_7c) {
LAB_5f71d304:
        if ((uVar3 & 2) == 0) {
          if ((in_stack_0000001c != 0) && (iVar9 < iVar10)) {
            for (iVar15 = iVar9; iVar15 < (int)((iVar10 - iVar9 & 0xfffffffeU) + iVar9);
                iVar15 = iVar15 + 2) {
              *(float *)(in_EAX + iVar15 * 4) =
                   (*(float *)(param_2 + iVar15 * 4) + *(float *)(in_EAX + iVar15 * 4)) *
                   _DAT_5f766b9c;
              *(float *)(in_EAX + 4 + iVar15 * 4) =
                   (*(float *)(in_EAX + 4 + iVar15 * 4) + *(float *)(param_2 + 4 + iVar15 * 4)) *
                   _DAT_5f766b9c;
            }
            if (iVar15 < iVar10) {
              while( true ) {
                fVar2 = (*(float *)(param_2 + iVar15 * 4) + *(float *)(in_EAX + iVar15 * 4)) *
                        _DAT_5f766b9c;
                iVar15 = iVar15 + 1;
                if (iVar10 <= iVar15) break;
                *(float *)(in_EAX + -4 + iVar15 * 4) = fVar2;
              }
              *(float *)(in_EAX + -4 + iVar15 * 4) = fVar2;
            }
          }
        }
        else if (in_stack_0000001c == 0) {
          if (iVar9 < iVar10) {
            for (iVar15 = iVar9; iVar15 < (int)((iVar10 - iVar9 & 0xfffffffeU) + iVar9);
                iVar15 = iVar15 + 2) {
              fVar6 = (float)_DAT_5f766aa0;
              fVar2 = *(float *)(param_2 + iVar15 * 4);
              fVar1 = *(float *)(in_EAX + iVar15 * 4);
              *(float *)(param_2 + iVar15 * 4) =
                   (*(float *)(in_EAX + iVar15 * 4) - *(float *)(param_2 + iVar15 * 4)) *
                   (float)_DAT_5f766aa0;
              *(float *)(in_EAX + iVar15 * 4) = (fVar2 + fVar1) * fVar6;
              fVar6 = (float)_DAT_5f766aa0;
              fVar2 = *(float *)(in_EAX + 4 + iVar15 * 4);
              fVar1 = *(float *)(param_2 + 4 + iVar15 * 4);
              *(float *)(param_2 + 4 + iVar15 * 4) =
                   (*(float *)(in_EAX + 4 + iVar15 * 4) - *(float *)(param_2 + 4 + iVar15 * 4)) *
                   (float)_DAT_5f766aa0;
              *(float *)(in_EAX + 4 + iVar15 * 4) = (fVar2 + fVar1) * fVar6;
            }
            if (iVar15 < iVar10) {
              while( true ) {
                fVar2 = (*(float *)(param_2 + iVar15 * 4) + *(float *)(in_EAX + iVar15 * 4)) *
                        (float)_DAT_5f766aa0;
                *(float *)(param_2 + iVar15 * 4) =
                     (*(float *)(in_EAX + iVar15 * 4) - *(float *)(param_2 + iVar15 * 4)) *
                     (float)_DAT_5f766aa0;
                iVar15 = iVar15 + 1;
                if (iVar10 <= iVar15) break;
                *(float *)(in_EAX + -4 + iVar15 * 4) = fVar2;
              }
              *(float *)(in_EAX + -4 + iVar15 * 4) = fVar2;
            }
          }
        }
        else if (iVar9 < iVar10) {
          pfVar8 = (float *)(in_EAX + iVar9 * 4);
          iVar15 = in_EAX + iVar10 * 4;
          iVar14 = (iVar15 - (int)pfVar8 & 0xfffffff8U) + (int)pfVar8;
          for (; (int)pfVar8 < iVar14; pfVar8 = pfVar8 + 2) {
            *pfVar8 = (float)_DAT_5f766aa0 * *pfVar8;
            pfVar8[1] = pfVar8[1] * (float)_DAT_5f766aa0;
          }
          for (; (int)pfVar8 < iVar15; pfVar8 = pfVar8 + 1) {
            *pfVar8 = (float)_DAT_5f766aa0 * *pfVar8;
          }
        }
        if (((uVar13 != 0) && (local_7c <= iVar12)) && (uVar5 != uVar4)) {
LAB_5f71d469:
          iVar12 = *(int *)(in_stack_00000010 + 0x48);
          if (*(char *)(in_stack_00000018 + 0x20) == '\0') {
            if (in_stack_0000001c == 0) {
              if ((uVar5 & 1) == 0) {
                iVar15 = (int)uVar5 >> 1;
                if (iVar9 < iVar10) {
                  iVar12 = iVar12 * 0x40;
                  iVar14 = (iVar10 - iVar9 & 0xfffffffeU) + iVar9;
                  for (; iVar9 < iVar14; iVar9 = iVar9 + 2) {
                    *(float *)(param_2 + iVar9 * 4) =
                         *(float *)(&DAT_5f766aa8 + iVar15 * 4 + iVar12) *
                         *(float *)(in_EAX + iVar9 * 4);
                    *(float *)(param_2 + 4 + iVar9 * 4) =
                         *(float *)(&DAT_5f766aa8 + iVar15 * 4 + iVar12) *
                         *(float *)(in_EAX + 4 + iVar9 * 4);
                  }
                  if (iVar9 < iVar10) {
                    while( true ) {
                      fVar2 = *(float *)(&DAT_5f766aa8 + iVar15 * 4 + iVar12) *
                              *(float *)(in_EAX + iVar9 * 4);
                      iVar9 = iVar9 + 1;
                      if (iVar10 <= iVar9) break;
                      *(float *)(param_2 + -4 + iVar9 * 4) = fVar2;
                    }
                    *(float *)(param_2 + -4 + iVar9 * 4) = fVar2;
                  }
                }
              }
              else {
                iVar15 = (int)(uVar5 + 1) >> 1;
                if (iVar9 < iVar10) {
                  iVar12 = iVar12 * 0x40;
                  iVar14 = (iVar10 - iVar9 & 0xfffffffeU) + iVar9;
                  for (; iVar9 < iVar14; iVar9 = iVar9 + 2) {
                    *(undefined4 *)(param_2 + iVar9 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
                    *(float *)(in_EAX + iVar9 * 4) =
                         *(float *)(&DAT_5f766aa8 + iVar15 * 4 + iVar12) *
                         *(float *)(in_EAX + iVar9 * 4);
                    *(undefined4 *)(param_2 + 4 + iVar9 * 4) =
                         *(undefined4 *)(in_EAX + 4 + iVar9 * 4);
                    *(float *)(in_EAX + 4 + iVar9 * 4) =
                         *(float *)(&DAT_5f766aa8 + iVar15 * 4 + iVar12) *
                         *(float *)(in_EAX + 4 + iVar9 * 4);
                  }
                  if (iVar9 < iVar10) {
                    while( true ) {
                      *(undefined4 *)(param_2 + iVar9 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
                      fVar2 = *(float *)(&DAT_5f766aa8 + iVar15 * 4 + iVar12) *
                              *(float *)(in_EAX + iVar9 * 4);
                      iVar9 = iVar9 + 1;
                      if (iVar10 <= iVar9) break;
                      *(float *)(in_EAX + -4 + iVar9 * 4) = fVar2;
                    }
                    *(float *)(in_EAX + -4 + iVar9 * 4) = fVar2;
                  }
                }
              }
            }
            else if (iVar9 < iVar10) {
              iVar12 = iVar12 * 0x40;
              iVar10 = in_EAX + iVar10 * 4;
              pfVar8 = (float *)(in_EAX + iVar9 * 4);
              iVar9 = (iVar10 - (int)pfVar8 & 0xfffffff8U) + (int)pfVar8;
              for (; (int)pfVar8 < iVar9; pfVar8 = pfVar8 + 2) {
                *pfVar8 = (*(float *)(&DAT_5f766aa8 + uVar5 * 4 + iVar12) + _DAT_5f766b94) * *pfVar8
                          * _DAT_5f766b98;
                pfVar8[1] = (*(float *)(&DAT_5f766aa8 + uVar5 * 4 + iVar12) + _DAT_5f766b94) *
                            pfVar8[1] * _DAT_5f766b98;
              }
              if ((int)pfVar8 < iVar10) {
                while( true ) {
                  fVar2 = (*(float *)(&DAT_5f766aa8 + uVar5 * 4 + iVar12) + _DAT_5f766b94) * *pfVar8
                          * _DAT_5f766b98;
                  if (iVar10 <= (int)(pfVar8 + 1)) break;
                  *pfVar8 = fVar2;
                  pfVar8 = pfVar8 + 1;
                }
                *pfVar8 = fVar2;
              }
            }
          }
          else if (in_stack_0000001c == 0) {
            if (iVar9 < iVar10) {
              iVar12 = (iVar10 - iVar9 & 0xfffffffeU) + iVar9;
              for (; iVar9 < iVar12; iVar9 = iVar9 + 2) {
                fVar2 = *(float *)(in_EAX + iVar9 * 4);
                *(float *)(in_EAX + iVar9 * 4) =
                     *(float *)(&DAT_5f766b44 + uVar5 * 4) * *(float *)(in_EAX + iVar9 * 4);
                *(float *)(param_2 + iVar9 * 4) = fVar2 * *(float *)(&DAT_5f766b28 + uVar5 * 4);
                fVar2 = *(float *)(in_EAX + 4 + iVar9 * 4);
                *(float *)(in_EAX + 4 + iVar9 * 4) =
                     *(float *)(&DAT_5f766b44 + uVar5 * 4) * *(float *)(in_EAX + 4 + iVar9 * 4);
                *(float *)(param_2 + 4 + iVar9 * 4) = fVar2 * *(float *)(&DAT_5f766b28 + uVar5 * 4);
              }
              if (iVar9 < iVar10) {
                while( true ) {
                  fVar2 = *(float *)(in_EAX + iVar9 * 4);
                  *(float *)(in_EAX + iVar9 * 4) =
                       *(float *)(&DAT_5f766b44 + uVar5 * 4) * *(float *)(in_EAX + iVar9 * 4);
                  fVar2 = fVar2 * *(float *)(&DAT_5f766b28 + uVar5 * 4);
                  iVar9 = iVar9 + 1;
                  if (iVar10 <= iVar9) break;
                  *(float *)(param_2 + -4 + iVar9 * 4) = fVar2;
                }
                *(float *)(param_2 + -4 + iVar9 * 4) = fVar2;
              }
            }
          }
          else if (iVar9 < iVar10) {
            iVar12 = in_EAX + iVar10 * 4;
            pfVar8 = (float *)(in_EAX + iVar9 * 4);
            iVar10 = (iVar12 - (int)pfVar8 & 0xfffffff8U) + (int)pfVar8;
            for (; (int)pfVar8 < iVar10; pfVar8 = pfVar8 + 2) {
              *pfVar8 = *pfVar8 * _DAT_5f766b90;
              pfVar8[1] = pfVar8[1] * _DAT_5f766b90;
            }
            for (; (int)pfVar8 < iVar12; pfVar8 = pfVar8 + 1) {
              *pfVar8 = *pfVar8 * _DAT_5f766b90;
            }
          }
        }
      }
      else if (uVar13 != 0) {
        if (uVar5 == uVar4) goto LAB_5f71d304;
        goto LAB_5f71d469;
      }
      iVar12 = iVar7;
    } while (iVar7 < iVar11);
  }
  return;
}


