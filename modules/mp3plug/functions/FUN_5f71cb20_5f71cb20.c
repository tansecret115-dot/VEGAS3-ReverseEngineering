/* Module: mp3plug.dll
   Function: FUN_5f71cb20
   Address: 5f71cb20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f71cb20(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int local_94;
  int local_88;
  
  uVar3 = *(uint *)(in_stack_00000018 + 0x10);
  uVar13 = uVar3 & 1;
  local_94 = *(int *)(in_stack_00000010 + 0x58);
  if (local_94 < *(int *)(param_1 + 0x58)) {
    local_94 = *(int *)(param_1 + 0x58);
  }
  iVar7 = 0;
  iVar11 = 0;
  do {
    if (uVar13 == 0) {
      local_88 = 0xd;
    }
    else {
      local_88 = *(int *)(in_stack_00000010 + 0x5c + iVar7 * 4);
    }
    iVar12 = 0;
    if (0 < local_94) {
      do {
        iVar10 = *(int *)(in_stack_00000018 + 0x18) * 0x1bc;
        iVar8 = *(int *)(in_stack_00000018 + 4) * 0x94;
        iVar14 = *(int *)(&DAT_5f769910 + iVar8 + iVar10 + iVar12 * 4) -
                 *(int *)(&DAT_5f76990c + iVar12 * 4 + iVar10 + iVar8);
        iVar10 = iVar7 * iVar14 + *(int *)(&DAT_5f76990c + iVar12 * 4 + iVar10 + iVar8) * 3;
        iVar14 = iVar14 + iVar10;
        uVar4 = *(uint *)(in_stack_00000014 + 0x5c + iVar11 + iVar12 * 4);
        uVar5 = *(uint *)(in_stack_00000014 + 0x154 + iVar12 * 4);
        iVar8 = iVar12 + 1;
        if (iVar12 < local_88) {
LAB_5f71cc2f:
          if ((uVar3 & 2) == 0) {
            if ((in_stack_0000001c != 0) && (iVar10 < iVar14)) {
              for (iVar16 = iVar10; iVar16 < (int)((iVar14 - iVar10 & 0xfffffffeU) + iVar10);
                  iVar16 = iVar16 + 2) {
                *(float *)(in_EAX + iVar16 * 4) =
                     (*(float *)(param_2 + iVar16 * 4) + *(float *)(in_EAX + iVar16 * 4)) *
                     _DAT_5f766b8c;
                *(float *)(in_EAX + 4 + iVar16 * 4) =
                     (*(float *)(in_EAX + 4 + iVar16 * 4) + *(float *)(param_2 + 4 + iVar16 * 4)) *
                     _DAT_5f766b8c;
              }
              if (iVar16 < iVar14) {
                while( true ) {
                  fVar2 = (*(float *)(param_2 + iVar16 * 4) + *(float *)(in_EAX + iVar16 * 4)) *
                          _DAT_5f766b8c;
                  iVar16 = iVar16 + 1;
                  if (iVar14 <= iVar16) break;
                  *(float *)(in_EAX + -4 + iVar16 * 4) = fVar2;
                }
                *(float *)(in_EAX + -4 + iVar16 * 4) = fVar2;
              }
            }
          }
          else if (in_stack_0000001c == 0) {
            if (iVar10 < iVar14) {
              for (iVar16 = iVar10; iVar16 < (int)((iVar14 - iVar10 & 0xfffffffeU) + iVar10);
                  iVar16 = iVar16 + 2) {
                fVar6 = (float)_DAT_5f766aa0;
                fVar2 = *(float *)(param_2 + iVar16 * 4);
                fVar1 = *(float *)(in_EAX + iVar16 * 4);
                *(float *)(param_2 + iVar16 * 4) =
                     (*(float *)(in_EAX + iVar16 * 4) - *(float *)(param_2 + iVar16 * 4)) *
                     (float)_DAT_5f766aa0;
                *(float *)(in_EAX + iVar16 * 4) = (fVar2 + fVar1) * fVar6;
                fVar6 = (float)_DAT_5f766aa0;
                fVar2 = *(float *)(in_EAX + 4 + iVar16 * 4);
                fVar1 = *(float *)(param_2 + 4 + iVar16 * 4);
                *(float *)(param_2 + 4 + iVar16 * 4) =
                     (*(float *)(in_EAX + 4 + iVar16 * 4) - *(float *)(param_2 + 4 + iVar16 * 4)) *
                     (float)_DAT_5f766aa0;
                *(float *)(in_EAX + 4 + iVar16 * 4) = (fVar2 + fVar1) * fVar6;
              }
              if (iVar16 < iVar14) {
                while( true ) {
                  fVar2 = (*(float *)(param_2 + iVar16 * 4) + *(float *)(in_EAX + iVar16 * 4)) *
                          (float)_DAT_5f766aa0;
                  *(float *)(param_2 + iVar16 * 4) =
                       (*(float *)(in_EAX + iVar16 * 4) - *(float *)(param_2 + iVar16 * 4)) *
                       (float)_DAT_5f766aa0;
                  iVar16 = iVar16 + 1;
                  if (iVar14 <= iVar16) break;
                  *(float *)(in_EAX + -4 + iVar16 * 4) = fVar2;
                }
                *(float *)(in_EAX + -4 + iVar16 * 4) = fVar2;
              }
            }
          }
          else if (iVar10 < iVar14) {
            pfVar9 = (float *)(in_EAX + iVar10 * 4);
            iVar16 = in_EAX + iVar14 * 4;
            iVar15 = (iVar16 - (int)pfVar9 & 0xfffffff8U) + (int)pfVar9;
            for (; (int)pfVar9 < iVar15; pfVar9 = pfVar9 + 2) {
              *pfVar9 = (float)_DAT_5f766aa0 * *pfVar9;
              pfVar9[1] = pfVar9[1] * (float)_DAT_5f766aa0;
            }
            for (; (int)pfVar9 < iVar16; pfVar9 = pfVar9 + 1) {
              *pfVar9 = (float)_DAT_5f766aa0 * *pfVar9;
            }
          }
          if (((uVar13 != 0) && (local_88 <= iVar12)) && (uVar4 != uVar5)) {
LAB_5f71cd99:
            iVar12 = *(int *)(in_stack_00000010 + 0x48);
            if (*(char *)(in_stack_00000018 + 0x20) == '\0') {
              if (in_stack_0000001c == 0) {
                if ((uVar4 & 1) == 0) {
                  iVar16 = (int)uVar4 >> 1;
                  if (iVar10 < iVar14) {
                    iVar12 = iVar12 * 0x40;
                    iVar15 = (iVar14 - iVar10 & 0xfffffffeU) + iVar10;
                    for (; iVar10 < iVar15; iVar10 = iVar10 + 2) {
                      *(float *)(param_2 + iVar10 * 4) =
                           *(float *)(&DAT_5f766aa8 + iVar16 * 4 + iVar12) *
                           *(float *)(in_EAX + iVar10 * 4);
                      *(float *)(param_2 + 4 + iVar10 * 4) =
                           *(float *)(&DAT_5f766aa8 + iVar16 * 4 + iVar12) *
                           *(float *)(in_EAX + 4 + iVar10 * 4);
                    }
                    if (iVar10 < iVar14) {
                      while( true ) {
                        fVar2 = *(float *)(&DAT_5f766aa8 + iVar16 * 4 + iVar12) *
                                *(float *)(in_EAX + iVar10 * 4);
                        iVar10 = iVar10 + 1;
                        if (iVar14 <= iVar10) break;
                        *(float *)(param_2 + -4 + iVar10 * 4) = fVar2;
                      }
                      *(float *)(param_2 + -4 + iVar10 * 4) = fVar2;
                    }
                  }
                }
                else {
                  iVar16 = (int)(uVar4 + 1) >> 1;
                  if (iVar10 < iVar14) {
                    iVar12 = iVar12 * 0x40;
                    iVar15 = (iVar14 - iVar10 & 0xfffffffeU) + iVar10;
                    for (; iVar10 < iVar15; iVar10 = iVar10 + 2) {
                      *(undefined4 *)(param_2 + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar10 * 4);
                      *(float *)(in_EAX + iVar10 * 4) =
                           *(float *)(&DAT_5f766aa8 + iVar16 * 4 + iVar12) *
                           *(float *)(in_EAX + iVar10 * 4);
                      *(undefined4 *)(param_2 + 4 + iVar10 * 4) =
                           *(undefined4 *)(in_EAX + 4 + iVar10 * 4);
                      *(float *)(in_EAX + 4 + iVar10 * 4) =
                           *(float *)(&DAT_5f766aa8 + iVar16 * 4 + iVar12) *
                           *(float *)(in_EAX + 4 + iVar10 * 4);
                    }
                    if (iVar10 < iVar14) {
                      while( true ) {
                        *(undefined4 *)(param_2 + iVar10 * 4) = *(undefined4 *)(in_EAX + iVar10 * 4)
                        ;
                        fVar2 = *(float *)(&DAT_5f766aa8 + iVar16 * 4 + iVar12) *
                                *(float *)(in_EAX + iVar10 * 4);
                        iVar10 = iVar10 + 1;
                        if (iVar14 <= iVar10) break;
                        *(float *)(in_EAX + -4 + iVar10 * 4) = fVar2;
                      }
                      *(float *)(in_EAX + -4 + iVar10 * 4) = fVar2;
                    }
                  }
                }
              }
              else if (iVar10 < iVar14) {
                iVar12 = iVar12 * 0x40;
                iVar14 = in_EAX + iVar14 * 4;
                pfVar9 = (float *)(in_EAX + iVar10 * 4);
                iVar10 = (iVar14 - (int)pfVar9 & 0xfffffff8U) + (int)pfVar9;
                for (; (int)pfVar9 < iVar10; pfVar9 = pfVar9 + 2) {
                  *pfVar9 = (*(float *)(&DAT_5f766aa8 + uVar4 * 4 + iVar12) + _DAT_5f766b84) *
                            *pfVar9 * _DAT_5f766b88;
                  pfVar9[1] = (*(float *)(&DAT_5f766aa8 + uVar4 * 4 + iVar12) + _DAT_5f766b84) *
                              pfVar9[1] * _DAT_5f766b88;
                }
                if ((int)pfVar9 < iVar14) {
                  while( true ) {
                    fVar2 = (*(float *)(&DAT_5f766aa8 + uVar4 * 4 + iVar12) + _DAT_5f766b84) *
                            *pfVar9 * _DAT_5f766b88;
                    if (iVar14 <= (int)(pfVar9 + 1)) break;
                    *pfVar9 = fVar2;
                    pfVar9 = pfVar9 + 1;
                  }
                  *pfVar9 = fVar2;
                }
              }
            }
            else if (in_stack_0000001c == 0) {
              if (iVar10 < iVar14) {
                iVar12 = (iVar14 - iVar10 & 0xfffffffeU) + iVar10;
                for (; iVar10 < iVar12; iVar10 = iVar10 + 2) {
                  fVar2 = *(float *)(in_EAX + iVar10 * 4);
                  *(float *)(in_EAX + iVar10 * 4) =
                       *(float *)(&DAT_5f766b44 + uVar4 * 4) * *(float *)(in_EAX + iVar10 * 4);
                  *(float *)(param_2 + iVar10 * 4) = fVar2 * *(float *)(&DAT_5f766b28 + uVar4 * 4);
                  fVar2 = *(float *)(in_EAX + 4 + iVar10 * 4);
                  *(float *)(in_EAX + 4 + iVar10 * 4) =
                       *(float *)(&DAT_5f766b44 + uVar4 * 4) * *(float *)(in_EAX + 4 + iVar10 * 4);
                  *(float *)(param_2 + 4 + iVar10 * 4) =
                       fVar2 * *(float *)(&DAT_5f766b28 + uVar4 * 4);
                }
                if (iVar10 < iVar14) {
                  while( true ) {
                    fVar2 = *(float *)(in_EAX + iVar10 * 4);
                    *(float *)(in_EAX + iVar10 * 4) =
                         *(float *)(&DAT_5f766b44 + uVar4 * 4) * *(float *)(in_EAX + iVar10 * 4);
                    fVar2 = fVar2 * *(float *)(&DAT_5f766b28 + uVar4 * 4);
                    iVar10 = iVar10 + 1;
                    if (iVar14 <= iVar10) break;
                    *(float *)(param_2 + -4 + iVar10 * 4) = fVar2;
                  }
                  *(float *)(param_2 + -4 + iVar10 * 4) = fVar2;
                }
              }
            }
            else if (iVar10 < iVar14) {
              iVar12 = in_EAX + iVar14 * 4;
              pfVar9 = (float *)(in_EAX + iVar10 * 4);
              iVar10 = (iVar12 - (int)pfVar9 & 0xfffffff8U) + (int)pfVar9;
              for (; (int)pfVar9 < iVar10; pfVar9 = pfVar9 + 2) {
                *pfVar9 = *pfVar9 * _DAT_5f766b80;
                pfVar9[1] = pfVar9[1] * _DAT_5f766b80;
              }
              for (; (int)pfVar9 < iVar12; pfVar9 = pfVar9 + 1) {
                *pfVar9 = *pfVar9 * _DAT_5f766b80;
              }
            }
          }
        }
        else if (uVar13 != 0) {
          if (uVar4 == uVar5) goto LAB_5f71cc2f;
          goto LAB_5f71cd99;
        }
        iVar12 = iVar8;
      } while (iVar8 < local_94);
    }
    iVar7 = iVar7 + 1;
    iVar11 = iVar11 + 0x34;
    if (2 < iVar7) {
      return;
    }
  } while( true );
}


