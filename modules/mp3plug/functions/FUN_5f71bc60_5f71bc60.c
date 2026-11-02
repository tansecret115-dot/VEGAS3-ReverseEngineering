/* Module: mp3plug.dll
   Function: FUN_5f71bc60
   Address: 5f71bc60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f71bc60(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  int in_EAX;
  int iVar6;
  float *pfVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int local_d4;
  int local_c8;
  int local_b4;
  
  uVar14 = *(uint *)(in_stack_00000018 + 0x10) & 2;
  uVar10 = *(uint *)(in_stack_00000018 + 0x10) & 1;
  local_b4 = *(int *)(in_stack_00000010 + 0x58);
  if (local_b4 < *(int *)(param_1 + 0x58)) {
    local_b4 = *(int *)(param_1 + 0x58);
  }
  if ((uVar10 == 0) || (*(int *)(in_stack_00000010 + 0x50) == 0)) {
    local_d4 = 0x16;
  }
  else {
    local_d4 = *(int *)(in_stack_00000010 + 0x54);
  }
  cVar8 = *(char *)(in_stack_00000018 + 0x20);
  iVar12 = 0;
LAB_5f71bccd:
  iVar11 = iVar12;
  if (cVar8 == '\0') {
    iVar12 = 6;
  }
  else {
    iVar12 = 8;
  }
  if (iVar12 <= iVar11) {
    iVar12 = 0;
    iVar11 = 0;
    do {
      if (uVar10 == 0) {
        local_c8 = 0xd;
      }
      else if (*(int *)(in_stack_00000010 + 0x50) == 0) {
        local_c8 = *(int *)(in_stack_00000010 + 0x5c + iVar12 * 4);
      }
      else {
        local_c8 = 0;
      }
      iVar13 = 3;
      if (3 < local_b4) {
        do {
          iVar9 = *(int *)(in_stack_00000018 + 0x18) * 0x1bc;
          iVar6 = *(int *)(in_stack_00000018 + 4) * 0x94;
          iVar15 = *(int *)(&DAT_5f769910 + iVar6 + iVar9 + iVar13 * 4) -
                   *(int *)(&DAT_5f76990c + iVar13 * 4 + iVar9 + iVar6);
          iVar9 = iVar12 * iVar15 + *(int *)(&DAT_5f76990c + iVar13 * 4 + iVar9 + iVar6) * 3;
          iVar15 = iVar15 + iVar9;
          uVar3 = *(uint *)(in_stack_00000014 + 0x5c + iVar11 + iVar13 * 4);
          uVar4 = *(uint *)(in_stack_00000014 + 0x154 + iVar13 * 4);
          iVar6 = iVar13 + 1;
          if (iVar13 < local_c8) {
LAB_5f71c4c3:
            if (uVar14 == 0) {
              if ((in_stack_0000001c != 0) && (iVar9 < iVar15)) {
                for (iVar17 = iVar9; iVar17 < (int)((iVar15 - iVar9 & 0xfffffffeU) + iVar9);
                    iVar17 = iVar17 + 2) {
                  *(float *)(in_EAX + iVar17 * 4) =
                       (*(float *)(param_2 + iVar17 * 4) + *(float *)(in_EAX + iVar17 * 4)) *
                       _DAT_5f766b7c;
                  *(float *)(in_EAX + 4 + iVar17 * 4) =
                       (*(float *)(in_EAX + 4 + iVar17 * 4) + *(float *)(param_2 + 4 + iVar17 * 4))
                       * _DAT_5f766b7c;
                }
                if (iVar17 < iVar15) {
                  while( true ) {
                    fVar2 = (*(float *)(param_2 + iVar17 * 4) + *(float *)(in_EAX + iVar17 * 4)) *
                            _DAT_5f766b7c;
                    iVar17 = iVar17 + 1;
                    if (iVar15 <= iVar17) break;
                    *(float *)(in_EAX + -4 + iVar17 * 4) = fVar2;
                  }
                  *(float *)(in_EAX + -4 + iVar17 * 4) = fVar2;
                }
              }
            }
            else if (in_stack_0000001c == 0) {
              if (iVar9 < iVar15) {
                for (iVar17 = iVar9; iVar17 < (int)((iVar15 - iVar9 & 0xfffffffeU) + iVar9);
                    iVar17 = iVar17 + 2) {
                  fVar5 = (float)_DAT_5f766aa0;
                  fVar2 = *(float *)(param_2 + iVar17 * 4);
                  fVar1 = *(float *)(in_EAX + iVar17 * 4);
                  *(float *)(param_2 + iVar17 * 4) =
                       (*(float *)(in_EAX + iVar17 * 4) - *(float *)(param_2 + iVar17 * 4)) *
                       (float)_DAT_5f766aa0;
                  *(float *)(in_EAX + iVar17 * 4) = (fVar2 + fVar1) * fVar5;
                  fVar5 = (float)_DAT_5f766aa0;
                  fVar2 = *(float *)(in_EAX + 4 + iVar17 * 4);
                  fVar1 = *(float *)(param_2 + 4 + iVar17 * 4);
                  *(float *)(param_2 + 4 + iVar17 * 4) =
                       (*(float *)(in_EAX + 4 + iVar17 * 4) - *(float *)(param_2 + 4 + iVar17 * 4))
                       * (float)_DAT_5f766aa0;
                  *(float *)(in_EAX + 4 + iVar17 * 4) = (fVar2 + fVar1) * fVar5;
                }
                if (iVar17 < iVar15) {
                  while( true ) {
                    fVar2 = (*(float *)(param_2 + iVar17 * 4) + *(float *)(in_EAX + iVar17 * 4)) *
                            (float)_DAT_5f766aa0;
                    *(float *)(param_2 + iVar17 * 4) =
                         (*(float *)(in_EAX + iVar17 * 4) - *(float *)(param_2 + iVar17 * 4)) *
                         (float)_DAT_5f766aa0;
                    iVar17 = iVar17 + 1;
                    if (iVar15 <= iVar17) break;
                    *(float *)(in_EAX + -4 + iVar17 * 4) = fVar2;
                  }
                  *(float *)(in_EAX + -4 + iVar17 * 4) = fVar2;
                }
              }
            }
            else if (iVar9 < iVar15) {
              pfVar7 = (float *)(in_EAX + iVar9 * 4);
              iVar17 = in_EAX + iVar15 * 4;
              iVar16 = (iVar17 - (int)pfVar7 & 0xfffffff8U) + (int)pfVar7;
              for (; (int)pfVar7 < iVar16; pfVar7 = pfVar7 + 2) {
                *pfVar7 = (float)_DAT_5f766aa0 * *pfVar7;
                pfVar7[1] = pfVar7[1] * (float)_DAT_5f766aa0;
              }
              for (; (int)pfVar7 < iVar17; pfVar7 = pfVar7 + 1) {
                *pfVar7 = (float)_DAT_5f766aa0 * *pfVar7;
              }
            }
            if (((uVar10 != 0) && (local_c8 <= iVar13)) && (uVar3 != uVar4)) {
LAB_5f71c649:
              iVar13 = *(int *)(in_stack_00000010 + 0x48);
              if (*(char *)(in_stack_00000018 + 0x20) == '\0') {
                if (in_stack_0000001c == 0) {
                  if ((uVar3 & 1) == 0) {
                    iVar17 = (int)uVar3 >> 1;
                    if (iVar9 < iVar15) {
                      iVar13 = iVar13 * 0x40;
                      iVar16 = (iVar15 - iVar9 & 0xfffffffeU) + iVar9;
                      for (; iVar9 < iVar16; iVar9 = iVar9 + 2) {
                        *(float *)(param_2 + iVar9 * 4) =
                             *(float *)(&DAT_5f766aa8 + iVar17 * 4 + iVar13) *
                             *(float *)(in_EAX + iVar9 * 4);
                        *(float *)(param_2 + 4 + iVar9 * 4) =
                             *(float *)(&DAT_5f766aa8 + iVar17 * 4 + iVar13) *
                             *(float *)(in_EAX + 4 + iVar9 * 4);
                      }
                      if (iVar9 < iVar15) {
                        while( true ) {
                          fVar2 = *(float *)(&DAT_5f766aa8 + iVar17 * 4 + iVar13) *
                                  *(float *)(in_EAX + iVar9 * 4);
                          iVar9 = iVar9 + 1;
                          if (iVar15 <= iVar9) break;
                          *(float *)(param_2 + -4 + iVar9 * 4) = fVar2;
                        }
                        *(float *)(param_2 + -4 + iVar9 * 4) = fVar2;
                      }
                    }
                  }
                  else {
                    iVar17 = (int)(uVar3 + 1) >> 1;
                    if (iVar9 < iVar15) {
                      iVar13 = iVar13 * 0x40;
                      iVar16 = (iVar15 - iVar9 & 0xfffffffeU) + iVar9;
                      for (; iVar9 < iVar16; iVar9 = iVar9 + 2) {
                        *(undefined4 *)(param_2 + iVar9 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4);
                        *(float *)(in_EAX + iVar9 * 4) =
                             *(float *)(&DAT_5f766aa8 + iVar17 * 4 + iVar13) *
                             *(float *)(in_EAX + iVar9 * 4);
                        *(undefined4 *)(param_2 + 4 + iVar9 * 4) =
                             *(undefined4 *)(in_EAX + 4 + iVar9 * 4);
                        *(float *)(in_EAX + 4 + iVar9 * 4) =
                             *(float *)(&DAT_5f766aa8 + iVar17 * 4 + iVar13) *
                             *(float *)(in_EAX + 4 + iVar9 * 4);
                      }
                      if (iVar9 < iVar15) {
                        while( true ) {
                          *(undefined4 *)(param_2 + iVar9 * 4) = *(undefined4 *)(in_EAX + iVar9 * 4)
                          ;
                          fVar2 = *(float *)(&DAT_5f766aa8 + iVar17 * 4 + iVar13) *
                                  *(float *)(in_EAX + iVar9 * 4);
                          iVar9 = iVar9 + 1;
                          if (iVar15 <= iVar9) break;
                          *(float *)(in_EAX + -4 + iVar9 * 4) = fVar2;
                        }
                        *(float *)(in_EAX + -4 + iVar9 * 4) = fVar2;
                      }
                    }
                  }
                }
                else if (iVar9 < iVar15) {
                  iVar13 = iVar13 * 0x40;
                  iVar15 = in_EAX + iVar15 * 4;
                  pfVar7 = (float *)(in_EAX + iVar9 * 4);
                  iVar9 = (iVar15 - (int)pfVar7 & 0xfffffff8U) + (int)pfVar7;
                  for (; (int)pfVar7 < iVar9; pfVar7 = pfVar7 + 2) {
                    *pfVar7 = (*(float *)(&DAT_5f766aa8 + uVar3 * 4 + iVar13) + _DAT_5f766b74) *
                              *pfVar7 * _DAT_5f766b78;
                    pfVar7[1] = (*(float *)(&DAT_5f766aa8 + uVar3 * 4 + iVar13) + _DAT_5f766b74) *
                                pfVar7[1] * _DAT_5f766b78;
                  }
                  if ((int)pfVar7 < iVar15) {
                    while( true ) {
                      fVar2 = (*(float *)(&DAT_5f766aa8 + uVar3 * 4 + iVar13) + _DAT_5f766b74) *
                              *pfVar7 * _DAT_5f766b78;
                      if (iVar15 <= (int)(pfVar7 + 1)) break;
                      *pfVar7 = fVar2;
                      pfVar7 = pfVar7 + 1;
                    }
                    *pfVar7 = fVar2;
                  }
                }
              }
              else if (in_stack_0000001c == 0) {
                if (iVar9 < iVar15) {
                  iVar13 = (iVar15 - iVar9 & 0xfffffffeU) + iVar9;
                  for (; iVar9 < iVar13; iVar9 = iVar9 + 2) {
                    fVar2 = *(float *)(in_EAX + iVar9 * 4);
                    *(float *)(in_EAX + iVar9 * 4) =
                         *(float *)(&DAT_5f766b44 + uVar3 * 4) * *(float *)(in_EAX + iVar9 * 4);
                    *(float *)(param_2 + iVar9 * 4) = fVar2 * *(float *)(&DAT_5f766b28 + uVar3 * 4);
                    fVar2 = *(float *)(in_EAX + 4 + iVar9 * 4);
                    *(float *)(in_EAX + 4 + iVar9 * 4) =
                         *(float *)(&DAT_5f766b44 + uVar3 * 4) * *(float *)(in_EAX + 4 + iVar9 * 4);
                    *(float *)(param_2 + 4 + iVar9 * 4) =
                         fVar2 * *(float *)(&DAT_5f766b28 + uVar3 * 4);
                  }
                  if (iVar9 < iVar15) {
                    while( true ) {
                      fVar2 = *(float *)(in_EAX + iVar9 * 4);
                      *(float *)(in_EAX + iVar9 * 4) =
                           *(float *)(&DAT_5f766b44 + uVar3 * 4) * *(float *)(in_EAX + iVar9 * 4);
                      fVar2 = fVar2 * *(float *)(&DAT_5f766b28 + uVar3 * 4);
                      iVar9 = iVar9 + 1;
                      if (iVar15 <= iVar9) break;
                      *(float *)(param_2 + -4 + iVar9 * 4) = fVar2;
                    }
                    *(float *)(param_2 + -4 + iVar9 * 4) = fVar2;
                  }
                }
              }
              else if (iVar9 < iVar15) {
                iVar13 = in_EAX + iVar15 * 4;
                pfVar7 = (float *)(in_EAX + iVar9 * 4);
                iVar9 = (iVar13 - (int)pfVar7 & 0xfffffff8U) + (int)pfVar7;
                for (; (int)pfVar7 < iVar9; pfVar7 = pfVar7 + 2) {
                  *pfVar7 = *pfVar7 * _DAT_5f766b70;
                  pfVar7[1] = pfVar7[1] * _DAT_5f766b70;
                }
                for (; (int)pfVar7 < iVar13; pfVar7 = pfVar7 + 1) {
                  *pfVar7 = *pfVar7 * _DAT_5f766b70;
                }
              }
            }
          }
          else if (uVar10 != 0) {
            if (uVar3 == uVar4) goto LAB_5f71c4c3;
            goto LAB_5f71c649;
          }
          iVar13 = iVar6;
        } while (iVar6 < local_b4);
      }
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 0x34;
      if (2 < iVar12) {
        return;
      }
    } while( true );
  }
  iVar6 = *(int *)(in_stack_00000018 + 0x18) * 0x1bc;
  iVar9 = *(int *)(in_stack_00000018 + 4) * 0x94;
  iVar13 = *(int *)(&DAT_5f7698b0 + iVar11 * 4 + iVar6 + iVar9);
  iVar12 = iVar11 + 1;
  iVar6 = *(int *)(&DAT_5f7698b4 + iVar9 + iVar6 + iVar11 * 4);
  uVar3 = *(uint *)(in_stack_00000014 + 0xf8 + iVar11 * 4);
  uVar4 = *(uint *)(in_stack_00000014 + iVar11 * 4);
  if (local_d4 <= iVar11) goto code_r0x5f71bd42;
  goto LAB_5f71bd58;
code_r0x5f71bd42:
  if (uVar10 != 0) {
    if (uVar4 == uVar3) {
LAB_5f71bd58:
      if (uVar14 == 0) {
        if ((in_stack_0000001c != 0) && (iVar13 < iVar6)) {
          for (iVar9 = iVar13; iVar9 < (int)((iVar6 - iVar13 & 0xfffffffeU) + iVar13);
              iVar9 = iVar9 + 2) {
            *(float *)(in_EAX + iVar9 * 4) =
                 (*(float *)(param_2 + iVar9 * 4) + *(float *)(in_EAX + iVar9 * 4)) * _DAT_5f766b6c;
            *(float *)(in_EAX + 4 + iVar9 * 4) =
                 (*(float *)(in_EAX + 4 + iVar9 * 4) + *(float *)(param_2 + 4 + iVar9 * 4)) *
                 _DAT_5f766b6c;
          }
          if (iVar9 < iVar6) {
            while( true ) {
              fVar2 = (*(float *)(param_2 + iVar9 * 4) + *(float *)(in_EAX + iVar9 * 4)) *
                      _DAT_5f766b6c;
              iVar9 = iVar9 + 1;
              if (iVar6 <= iVar9) break;
              *(float *)(in_EAX + -4 + iVar9 * 4) = fVar2;
            }
            *(float *)(in_EAX + -4 + iVar9 * 4) = fVar2;
          }
        }
      }
      else if (in_stack_0000001c == 0) {
        if (iVar13 < iVar6) {
          for (iVar9 = iVar13; iVar9 < (int)((iVar6 - iVar13 & 0xfffffffeU) + iVar13);
              iVar9 = iVar9 + 2) {
            fVar5 = (float)_DAT_5f766aa0;
            fVar2 = *(float *)(param_2 + iVar9 * 4);
            fVar1 = *(float *)(in_EAX + iVar9 * 4);
            *(float *)(param_2 + iVar9 * 4) =
                 (*(float *)(in_EAX + iVar9 * 4) - *(float *)(param_2 + iVar9 * 4)) *
                 (float)_DAT_5f766aa0;
            *(float *)(in_EAX + iVar9 * 4) = (fVar2 + fVar1) * fVar5;
            fVar5 = (float)_DAT_5f766aa0;
            fVar2 = *(float *)(in_EAX + 4 + iVar9 * 4);
            fVar1 = *(float *)(param_2 + 4 + iVar9 * 4);
            *(float *)(param_2 + 4 + iVar9 * 4) =
                 (*(float *)(in_EAX + 4 + iVar9 * 4) - *(float *)(param_2 + 4 + iVar9 * 4)) *
                 (float)_DAT_5f766aa0;
            *(float *)(in_EAX + 4 + iVar9 * 4) = (fVar2 + fVar1) * fVar5;
          }
          if (iVar9 < iVar6) {
            while( true ) {
              fVar2 = (*(float *)(param_2 + iVar9 * 4) + *(float *)(in_EAX + iVar9 * 4)) *
                      (float)_DAT_5f766aa0;
              *(float *)(param_2 + iVar9 * 4) =
                   (*(float *)(in_EAX + iVar9 * 4) - *(float *)(param_2 + iVar9 * 4)) *
                   (float)_DAT_5f766aa0;
              iVar9 = iVar9 + 1;
              if (iVar6 <= iVar9) break;
              *(float *)(in_EAX + -4 + iVar9 * 4) = fVar2;
            }
            *(float *)(in_EAX + -4 + iVar9 * 4) = fVar2;
          }
        }
      }
      else if (iVar13 < iVar6) {
        iVar9 = in_EAX + iVar6 * 4;
        pfVar7 = (float *)(in_EAX + iVar13 * 4);
        iVar15 = (iVar9 - (int)pfVar7 & 0xfffffff8U) + (int)pfVar7;
        for (; (int)pfVar7 < iVar15; pfVar7 = pfVar7 + 2) {
          *pfVar7 = (float)_DAT_5f766aa0 * *pfVar7;
          pfVar7[1] = pfVar7[1] * (float)_DAT_5f766aa0;
        }
        for (; (int)pfVar7 < iVar9; pfVar7 = pfVar7 + 1) {
          *pfVar7 = (float)_DAT_5f766aa0 * *pfVar7;
        }
      }
      if (uVar10 == 0) {
        cVar8 = *(char *)(in_stack_00000018 + 0x20);
        goto LAB_5f71bccd;
      }
      if (iVar11 < local_d4) {
        cVar8 = *(char *)(in_stack_00000018 + 0x20);
        goto LAB_5f71bccd;
      }
      if (uVar4 == uVar3) {
        cVar8 = *(char *)(in_stack_00000018 + 0x20);
        goto LAB_5f71bccd;
      }
    }
    iVar11 = *(int *)(in_stack_00000010 + 0x48);
    if (*(char *)(in_stack_00000018 + 0x20) == '\0') {
      if (in_stack_0000001c == 0) {
        if ((uVar4 & 1) == 0) {
          iVar9 = (int)uVar4 >> 1;
          if (iVar13 < iVar6) {
            iVar11 = iVar11 * 0x40;
            iVar15 = (iVar6 - iVar13 & 0xfffffffeU) + iVar13;
            for (; iVar13 < iVar15; iVar13 = iVar13 + 2) {
              *(float *)(param_2 + iVar13 * 4) =
                   *(float *)(&DAT_5f766aa8 + iVar9 * 4 + iVar11) * *(float *)(in_EAX + iVar13 * 4);
              *(float *)(param_2 + 4 + iVar13 * 4) =
                   *(float *)(&DAT_5f766aa8 + iVar9 * 4 + iVar11) *
                   *(float *)(in_EAX + 4 + iVar13 * 4);
            }
            if (iVar13 < iVar6) {
              while( true ) {
                fVar2 = *(float *)(&DAT_5f766aa8 + iVar9 * 4 + iVar11) *
                        *(float *)(in_EAX + iVar13 * 4);
                iVar13 = iVar13 + 1;
                if (iVar6 <= iVar13) break;
                *(float *)(param_2 + -4 + iVar13 * 4) = fVar2;
              }
              *(float *)(param_2 + -4 + iVar13 * 4) = fVar2;
            }
            cVar8 = *(char *)(in_stack_00000018 + 0x20);
          }
          else {
            cVar8 = *(char *)(in_stack_00000018 + 0x20);
          }
        }
        else {
          iVar9 = (int)(uVar4 + 1) >> 1;
          if (iVar13 < iVar6) {
            iVar11 = iVar11 * 0x40;
            iVar15 = (iVar6 - iVar13 & 0xfffffffeU) + iVar13;
            for (; iVar13 < iVar15; iVar13 = iVar13 + 2) {
              *(undefined4 *)(param_2 + iVar13 * 4) = *(undefined4 *)(in_EAX + iVar13 * 4);
              *(float *)(in_EAX + iVar13 * 4) =
                   *(float *)(&DAT_5f766aa8 + iVar9 * 4 + iVar11) * *(float *)(in_EAX + iVar13 * 4);
              *(undefined4 *)(param_2 + 4 + iVar13 * 4) = *(undefined4 *)(in_EAX + 4 + iVar13 * 4);
              *(float *)(in_EAX + 4 + iVar13 * 4) =
                   *(float *)(&DAT_5f766aa8 + iVar9 * 4 + iVar11) *
                   *(float *)(in_EAX + 4 + iVar13 * 4);
            }
            if (iVar13 < iVar6) {
              while( true ) {
                *(undefined4 *)(param_2 + iVar13 * 4) = *(undefined4 *)(in_EAX + iVar13 * 4);
                fVar2 = *(float *)(&DAT_5f766aa8 + iVar9 * 4 + iVar11) *
                        *(float *)(in_EAX + iVar13 * 4);
                iVar13 = iVar13 + 1;
                if (iVar6 <= iVar13) break;
                *(float *)(in_EAX + -4 + iVar13 * 4) = fVar2;
              }
              *(float *)(in_EAX + -4 + iVar13 * 4) = fVar2;
            }
            cVar8 = *(char *)(in_stack_00000018 + 0x20);
          }
          else {
            cVar8 = *(char *)(in_stack_00000018 + 0x20);
          }
        }
      }
      else if (iVar13 < iVar6) {
        iVar11 = iVar11 * 0x40;
        iVar6 = in_EAX + iVar6 * 4;
        pfVar7 = (float *)(in_EAX + iVar13 * 4);
        iVar13 = (iVar6 - (int)pfVar7 & 0xfffffff8U) + (int)pfVar7;
        for (; (int)pfVar7 < iVar13; pfVar7 = pfVar7 + 2) {
          *pfVar7 = (*(float *)(&DAT_5f766aa8 + uVar4 * 4 + iVar11) + _DAT_5f766b64) * *pfVar7 *
                    _DAT_5f766b68;
          pfVar7[1] = (*(float *)(&DAT_5f766aa8 + uVar4 * 4 + iVar11) + _DAT_5f766b64) * pfVar7[1] *
                      _DAT_5f766b68;
        }
        if ((int)pfVar7 < iVar6) {
          while( true ) {
            fVar2 = (*(float *)(&DAT_5f766aa8 + uVar4 * 4 + iVar11) + _DAT_5f766b64) * *pfVar7 *
                    _DAT_5f766b68;
            if (iVar6 <= (int)(pfVar7 + 1)) break;
            *pfVar7 = fVar2;
            pfVar7 = pfVar7 + 1;
          }
          *pfVar7 = fVar2;
        }
        cVar8 = *(char *)(in_stack_00000018 + 0x20);
      }
      else {
        cVar8 = *(char *)(in_stack_00000018 + 0x20);
      }
    }
    else if (in_stack_0000001c == 0) {
      if (iVar13 < iVar6) {
        iVar11 = (iVar6 - iVar13 & 0xfffffffeU) + iVar13;
        for (; iVar13 < iVar11; iVar13 = iVar13 + 2) {
          fVar2 = *(float *)(in_EAX + iVar13 * 4);
          *(float *)(in_EAX + iVar13 * 4) =
               *(float *)(&DAT_5f766b44 + uVar4 * 4) * *(float *)(in_EAX + iVar13 * 4);
          *(float *)(param_2 + iVar13 * 4) = fVar2 * *(float *)(&DAT_5f766b28 + uVar4 * 4);
          fVar2 = *(float *)(in_EAX + 4 + iVar13 * 4);
          *(float *)(in_EAX + 4 + iVar13 * 4) =
               *(float *)(&DAT_5f766b44 + uVar4 * 4) * *(float *)(in_EAX + 4 + iVar13 * 4);
          *(float *)(param_2 + 4 + iVar13 * 4) = fVar2 * *(float *)(&DAT_5f766b28 + uVar4 * 4);
        }
        if (iVar13 < iVar6) {
          while( true ) {
            fVar2 = *(float *)(in_EAX + iVar13 * 4);
            *(float *)(in_EAX + iVar13 * 4) =
                 *(float *)(&DAT_5f766b44 + uVar4 * 4) * *(float *)(in_EAX + iVar13 * 4);
            fVar2 = fVar2 * *(float *)(&DAT_5f766b28 + uVar4 * 4);
            iVar13 = iVar13 + 1;
            if (iVar6 <= iVar13) break;
            *(float *)(param_2 + -4 + iVar13 * 4) = fVar2;
          }
          *(float *)(param_2 + -4 + iVar13 * 4) = fVar2;
        }
        cVar8 = *(char *)(in_stack_00000018 + 0x20);
      }
      else {
        cVar8 = *(char *)(in_stack_00000018 + 0x20);
      }
    }
    else if (iVar13 < iVar6) {
      iVar11 = in_EAX + iVar6 * 4;
      pfVar7 = (float *)(in_EAX + iVar13 * 4);
      iVar13 = (iVar11 - (int)pfVar7 & 0xfffffff8U) + (int)pfVar7;
      for (; (int)pfVar7 < iVar13; pfVar7 = pfVar7 + 2) {
        *pfVar7 = *pfVar7 * _DAT_5f766b60;
        pfVar7[1] = pfVar7[1] * _DAT_5f766b60;
      }
      if ((int)pfVar7 < iVar11) {
        while( true ) {
          if (iVar11 <= (int)(pfVar7 + 1)) break;
          *pfVar7 = *pfVar7 * _DAT_5f766b60;
          pfVar7 = pfVar7 + 1;
        }
        *pfVar7 = *pfVar7 * _DAT_5f766b60;
      }
      cVar8 = *(char *)(in_stack_00000018 + 0x20);
    }
    else {
      cVar8 = *(char *)(in_stack_00000018 + 0x20);
    }
  }
  goto LAB_5f71bccd;
}


