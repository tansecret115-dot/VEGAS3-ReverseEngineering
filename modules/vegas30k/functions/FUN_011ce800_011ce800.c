/* Module: vegas30k.dll
   Function: FUN_011ce800
   Address: 011ce800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011ced07) */
/* WARNING: Removing unreachable block (ram,0x011cedf9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_011ce800(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  bool bVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  HANDLE hEvent;
  uint local_38;
  
  pcVar13 = ResetEvent_exref;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    return 0;
  }
  do {
    WaitForSingleObject((HANDLE)param_1[0xca],param_1[0xcb]);
    uVar11 = param_1[0xcd];
    if (uVar11 < 0x3bc) {
      if ((uVar11 == 0x3bb) || (uVar11 == 1)) goto LAB_011cf0a0;
      if (uVar11 == 3) {
        if ((*(byte *)(param_1 + 9) & 4) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          if ((*(byte *)(param_1 + 9) & 0x86) != 0) {
            while( true ) {
              uVar11 = 0;
              if (param_1[0x1e] != 0) {
                do {
                  iVar10 = *(int *)(param_1[0xce] + uVar11 * 4);
                  uVar3 = *(uint *)(iVar10 + 0x10);
                  if ((uVar3 & 1) != 0) {
                    *(uint *)(iVar10 + 0x10) = uVar3 & 0xfffffffe;
                    *(undefined4 *)(*(int *)(param_1[0xce] + uVar11 * 4) + 4) = 0;
                    if (param_1[0x1f] != 0) {
                      param_1[0x1f] = param_1[0x1f] + -1;
                    }
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < (uint)param_1[0x1e]);
              }
              if (param_1[0x1f] == param_1[0x1e]) break;
              iVar10 = param_1[0x1d];
              iVar12 = param_1[0x1c];
              piVar4 = *(int **)(param_1[0xce] + iVar10 * 4);
              iVar5 = piVar4[1];
              uVar2 = *(ushort *)(param_1[0x18] + 0xc);
              uVar9 = ftol();
              iVar10 = (*(code *)param_1[0xb])
                                 (param_1,2,param_1[0xc],iVar10,iVar5 + *piVar4,uVar9,
                                  (uint)(iVar12 - iVar5) / (uint)uVar2);
              piVar4 = (int *)(param_1[0xce] + param_1[0x1d] * 4);
              uVar11 = iVar10 + *(uint *)(*piVar4 + 4) / (uint)*(ushort *)(param_1[0x18] + 0xc);
              if ((int)uVar11 < 0) {
                if (uVar11 == 0xfffffffe) {
                  param_1[10] = 1;
                  SetEvent((HANDLE)param_1[0xcc]);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                  ResetEvent((HANDLE)param_1[0xca]);
                }
                else {
                  iVar10 = param_1[0x21];
                  if ((param_1[0x23] <= iVar10) &&
                     ((param_1[0x23] < iVar10 || ((uint)param_1[0x22] < (uint)param_1[0x20])))) {
                    param_1[0x22] = param_1[0x20];
                    param_1[0x23] = iVar10;
                  }
                  param_1[9] = param_1[9] | 0x80;
                  (**(code **)(*param_1 + 0x2c))(param_1,0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                }
                goto LAB_011cebf5;
              }
              if (uVar11 != 0) {
                uVar3 = param_1[0x92];
                iVar10 = param_1[0x93];
                if (uVar3 != 0 || iVar10 != 0) {
                  iVar12 = (int)uVar11 >> 0x1f;
                  if ((iVar12 < iVar10) || ((iVar12 <= iVar10 && (uVar11 < uVar3)))) {
                    uVar6 = param_1[0x94];
                    param_1[0x94] = uVar6 + uVar11;
                    param_1[0x92] = uVar3 - uVar11;
                    param_1[0x93] = (iVar10 - iVar12) - (uint)(uVar3 < uVar11);
                    param_1[0x95] = param_1[0x95] + iVar12 + (uint)CARRY4(uVar6,uVar11);
                    goto LAB_011cea7a;
                  }
                  uVar6 = param_1[0x94];
                  uVar11 = uVar11 - param_1[0x92];
                  param_1[0x94] = uVar6 + uVar3;
                  param_1[0x95] = param_1[0x95] + iVar10 + (uint)CARRY4(uVar6,uVar3);
                  param_1[0x92] = 0;
                  param_1[0x93] = 0;
                }
                if (uVar11 != 0) {
                  if (param_1[0xd3] == 0) {
                    (**(code **)(*param_1 + 0x38))(param_1,*(undefined4 *)*piVar4,uVar11);
                  }
                  else {
                    uVar3 = param_1[0x22];
                    param_1[0x22] = uVar3 + uVar11;
                    param_1[0x23] =
                         param_1[0x23] + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar3,uVar11);
                    *(uint *)(*piVar4 + 4) = uVar11;
                  }
                  iVar10 = param_1[0x1d];
                  param_1[0x1d] = iVar10 + 1;
                  if (iVar10 + 1 == param_1[0x1e]) {
                    param_1[0x1d] = 0;
                  }
                }
              }
LAB_011cea7a:
              iVar10 = param_1[0x23];
              iVar12 = param_1[0x21];
              if ((iVar12 < iVar10) ||
                 (((iVar12 <= iVar10 && ((uint)param_1[0x20] <= (uint)param_1[0x22])) ||
                  (param_1[0x1f] == param_1[0x1e])))) {
                if (param_1[0xd3] == 0) {
                  if (((param_1[0x1f] == param_1[0x1e]) && (iVar10 <= iVar12)) &&
                     ((iVar10 < iVar12 || ((uint)param_1[0x22] < (uint)param_1[0x20])))) {
                    hEvent = (HANDLE)param_1[0xcc];
                    goto LAB_011cead4;
                  }
                }
                else {
                  hEvent = (HANDLE)param_1[0xcc];
LAB_011cead4:
                  SetEvent(hEvent);
                }
                if (((param_1[9] & 4U) != 0) && ((param_1[9] & 2U) != 0)) {
                  (**(code **)(*param_1 + 0x2c))(param_1,0);
                }
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
              if ((uint)param_1[0x1e] <= (uint)param_1[0x1f]) goto LAB_011cebf5;
              if ((param_1[0x21] < param_1[0x23]) ||
                 ((param_1[0x21] <= param_1[0x23] && ((uint)param_1[0x20] <= (uint)param_1[0x22]))))
              goto LAB_011cebf5;
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
              if ((*(byte *)(param_1 + 9) & 0x86) == 0) goto LAB_011ceb61;
            }
            SetEvent((HANDLE)param_1[0xcc]);
            if (((param_1[9] & 4U) != 0) && ((param_1[9] & 2U) != 0)) {
              (**(code **)(*param_1 + 0x2c))(param_1,0);
            }
          }
LAB_011ceb61:
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          ResetEvent((HANDLE)param_1[0xca]);
LAB_011cebf5:
          ResetEvent((HANDLE)param_1[0xca]);
          pcVar13 = ResetEvent_exref;
          goto LAB_011cf0a9;
        }
        SetEvent((HANDLE)param_1[0xcc]);
        if (((param_1[9] & 4U) != 0) && ((param_1[9] & 2U) != 0)) {
          param_1[0x22] = param_1[0x20];
          param_1[0x23] = param_1[0x21];
          (**(code **)(*param_1 + 0x2c))(param_1,0);
        }
LAB_011cec46:
        iVar10 = param_1[0xca];
        goto LAB_011cf0a7;
      }
    }
    else {
      if (uVar11 != 0x3bc) {
        if (uVar11 == 0x3bd) {
          if (((param_1[9] & 2U) == 0) || ((param_1[9] & 0x80U) != 0)) goto LAB_011cec46;
          if (param_1[0xae] == 0) {
            FUN_011ce440();
          }
          else {
            FUN_011ce5b0();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          bVar1 = *(byte *)(param_1 + 9);
          while ((bVar1 & 0x86) != 0) {
            bVar7 = false;
            uVar11 = 0;
            if (param_1[0x1e] != 0) {
              do {
                iVar10 = *(int *)(param_1[0xce] + uVar11 * 4);
                uVar3 = *(uint *)(iVar10 + 0x10);
                if ((uVar3 & 1) != 0) {
                  *(uint *)(iVar10 + 0x10) = uVar3 & 0xfffffffe;
                  *(undefined4 *)(*(int *)(param_1[0xce] + uVar11 * 4) + 4) = 0;
                  if (param_1[0x1f] != 0) {
                    param_1[0x1f] = param_1[0x1f] + -1;
                  }
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < (uint)param_1[0x1e]);
            }
            bVar14 = param_1[0x1f] == 0;
            lVar15 = FUN_011cdaf0();
            uVar11 = param_1[0x28];
            if (*(longlong *)(param_1 + 0x28) < lVar15) {
              param_1[0x22] = 0;
              param_1[0x23] = 0;
            }
            else {
              param_1[0x22] = uVar11 - (uint)lVar15;
              param_1[0x23] =
                   (param_1[0x29] - (int)((ulonglong)lVar15 >> 0x20)) -
                   (uint)(uVar11 < (uint)lVar15);
            }
            uVar2 = *(ushort *)(param_1[0x18] + 0xc);
            lVar15 = ftol();
            uVar16 = ftol();
            uVar11 = (uint)param_1[0x2a] / (uint)uVar2;
            if (((longlong)uVar16 < 0x100000000) &&
               (((longlong)uVar16 < 0 || ((uint)uVar16 <= uVar11)))) {
              uVar16 = (ulonglong)uVar11;
            }
            lVar17 = __allrem(uVar16,param_1[0x2b],0);
            lVar8 = uVar16 - lVar17;
            if (lVar15 < (longlong)(uVar16 - lVar17)) {
              lVar8 = lVar15;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
            local_38 = 0;
            if ((lVar8 != 0) && ((*(byte *)(param_1 + 9) & 2) != 0)) {
              piVar4 = *(int **)(param_1[0xce] + param_1[0x1d] * 4);
              iVar10 = (*(code *)param_1[0xb])
                                 (param_1,2,param_1[0xc],param_1[0x1d],piVar4[1] + *piVar4,
                                  (int)lVar8,(int)lVar15);
              local_38 = iVar10 + *(uint *)(*(int *)(param_1[0xce] + param_1[0x1d] * 4) + 4) /
                                  (uint)*(ushort *)(param_1[0x18] + 0xc);
              if ((int)local_38 < 0) {
                if (local_38 == 0xfffffffe) {
                  ResetEvent((HANDLE)param_1[0xca]);
                }
                goto LAB_011cf04a;
              }
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
              if ((local_38 != 0) && ((*(byte *)(param_1 + 9) & 2) != 0)) {
                uVar11 = param_1[0x92];
                iVar10 = param_1[0x93];
                if (uVar11 != 0 || iVar10 != 0) {
                  iVar12 = (int)local_38 >> 0x1f;
                  if ((iVar12 < iVar10) || ((iVar12 <= iVar10 && (local_38 < uVar11)))) {
                    param_1[0x92] = uVar11 - local_38;
                    param_1[0x93] = (iVar10 - iVar12) - (uint)(uVar11 < local_38);
                    uVar11 = param_1[0x94];
                    param_1[0x94] = uVar11 + local_38;
                    param_1[0x95] = param_1[0x95] + iVar12 + (uint)CARRY4(uVar11,local_38);
                    local_38 = 0;
                  }
                  else {
                    uVar3 = param_1[0x94];
                    local_38 = local_38 - uVar11;
                    param_1[0x94] = uVar3 + uVar11;
                    param_1[0x92] = 0;
                    param_1[0x95] = param_1[0x95] + iVar10 + (uint)CARRY4(uVar3,uVar11);
                    param_1[0x93] = 0;
                  }
                }
                if (local_38 != 0) {
                  uVar11 = 0;
                  if (param_1[0x1e] != 0) {
                    do {
                      iVar10 = *(int *)(param_1[0xce] + uVar11 * 4);
                      uVar3 = *(uint *)(iVar10 + 0x10);
                      if ((uVar3 & 1) != 0) {
                        *(uint *)(iVar10 + 0x10) = uVar3 & 0xfffffffe;
                        *(undefined4 *)(*(int *)(param_1[0xce] + uVar11 * 4) + 4) = 0;
                        if (param_1[0x1f] != 0) {
                          param_1[0x1f] = param_1[0x1f] + -1;
                        }
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar11 < (uint)param_1[0x1e]);
                  }
                  bVar14 = param_1[0x1f] == 0;
                  (**(code **)(*param_1 + 0x38))
                            (param_1,**(undefined4 **)(param_1[0xce] + param_1[0x1d] * 4),local_38);
                  iVar10 = param_1[0x1d];
                  param_1[0x1d] = iVar10 + 1;
                  if (iVar10 + 1 == param_1[0x1e]) {
                    param_1[0x1d] = 0;
                  }
                  param_1[0xcb] = -1;
                }
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
            }
            if (!bVar14) {
              if ((local_38 == 0) ||
                 ((*(byte *)(*(int *)(param_1[0xce] + param_1[0x1d] * 4) + 0x10) & 0x10) != 0))
              goto LAB_011cf04a;
              if ((param_1[0x21] < param_1[0x23]) ||
                 ((param_1[0x21] <= param_1[0x23] && ((uint)param_1[0x20] <= (uint)param_1[0x22]))))
              goto LAB_011cf04a;
            }
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
            pcVar13 = ResetEvent_exref;
            bVar1 = *(byte *)(param_1 + 9);
          }
          bVar14 = false;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          (*pcVar13)(param_1[0xca]);
          bVar7 = true;
LAB_011cf04a:
          pcVar13 = ResetEvent_exref;
          if (param_1[0x1f] != 0) {
            ResetEvent((HANDLE)param_1[0xca]);
            param_1[0xcb] = -1;
          }
          if ((bVar14) && (!bVar7)) {
            param_1[0xcb] = 100;
            ResetEvent((HANDLE)param_1[0xca]);
          }
          FUN_011cb930(6,0,0);
        }
        goto LAB_011cf0a9;
      }
LAB_011cf0a0:
      iVar10 = param_1[0xca];
LAB_011cf0a7:
      (*pcVar13)(iVar10);
    }
LAB_011cf0a9:
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
      return 0;
    }
  } while( true );
}


