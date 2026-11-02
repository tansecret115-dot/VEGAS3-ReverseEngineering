/* Module: vegas30k.dll
   Function: FUN_011d0b50
   Address: 011d0b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011d10c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_011d0b50(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  int iStack_18;
  undefined4 uStack_14;
  uint local_10;
  
  local_38 = 0;
  local_34 = 0;
  bVar1 = *(byte *)(param_1 + 9);
  pcVar11 = ResetEvent_exref;
  do {
    if ((bVar1 & 1) == 0) {
      return 0;
    }
    WaitForSingleObject((HANDLE)param_1[0xca],param_1[0xcb]);
    uVar10 = param_1[0xcd];
    if (uVar10 < 0x3bc) {
      if (uVar10 == 0x3bb) {
LAB_011d0edc:
        iVar9 = param_1[0xca];
      }
      else {
        if (uVar10 != 1) {
          if (uVar10 != 3) goto LAB_011d0f26;
          if ((*(byte *)(param_1 + 9) & 4) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
            bVar1 = *(byte *)(param_1 + 9);
            while ((bVar1 & 0x86) != 0) {
              uVar10 = 0;
              if (param_1[0x1e] != 0) {
                do {
                  iVar9 = *(int *)(param_1[0xce] + uVar10 * 4);
                  uVar3 = *(uint *)(iVar9 + 0x10);
                  if ((uVar3 & 1) != 0) {
                    *(uint *)(iVar9 + 0x10) = uVar3 & 0xfffffffe;
                    *(undefined4 *)(*(int *)(param_1[0xce] + uVar10 * 4) + 4) = 0;
                    if (param_1[0x1f] != 0) {
                      param_1[0x1f] = param_1[0x1f] + -1;
                    }
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < (uint)param_1[0x1e]);
              }
              if (param_1[0x1f] == param_1[0x1e]) {
                SetEvent((HANDLE)param_1[0xcc]);
                if (((param_1[9] & 4U) != 0) && ((param_1[9] & 2U) != 0)) {
                  (**(code **)(*param_1 + 0x2c))(param_1,0);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                (*pcVar11)(param_1[0xca]);
                iVar9 = param_1[0xca];
                goto LAB_011d0f24;
              }
              iVar9 = param_1[0x1d];
              piVar4 = *(int **)(param_1[0xce] + iVar9 * 4);
              iVar5 = piVar4[1];
              local_10 = (uint)(param_1[0x1c] - iVar5) / (uint)*(ushort *)(param_1[0x18] + 0xc);
              uVar8 = ftol();
              iVar9 = (*(code *)param_1[0xb])
                                (param_1,2,param_1[0xc],iVar9,iVar5 + *piVar4,uVar8,local_10);
              puVar6 = *(undefined4 **)(param_1[0xce] + param_1[0x1d] * 4);
              iVar9 = iVar9 + (uint)puVar6[1] / (uint)*(ushort *)(param_1[0x18] + 0xc);
              if (iVar9 < 0) {
                if (iVar9 == -2) {
                  param_1[10] = 1;
                  SetEvent((HANDLE)param_1[0xcc]);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                  pcVar11 = ResetEvent_exref;
                  ResetEvent((HANDLE)param_1[0xca]);
                  iVar9 = param_1[0xca];
                  goto LAB_011d0f24;
                }
                iVar9 = param_1[0x21];
                if ((param_1[0x23] <= iVar9) &&
                   ((param_1[0x23] < iVar9 || ((uint)param_1[0x22] < (uint)param_1[0x20])))) {
                  param_1[0x22] = param_1[0x20];
                  param_1[0x23] = iVar9;
                }
                (**(code **)(*param_1 + 0x2c))(param_1,0);
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                pcVar11 = ResetEvent_exref;
                goto LAB_011d0edc;
              }
              if (iVar9 != 0) {
                (**(code **)(*param_1 + 0x38))(param_1,*puVar6,iVar9);
                iVar9 = *(int *)(param_1[0xce] + param_1[0x1d] * 4);
                *(uint *)(iVar9 + 0x10) = *(uint *)(iVar9 + 0x10) | 1;
                iVar9 = *(int *)(param_1[0xce] + param_1[0x1d] * 4);
                *(uint *)(iVar9 + 0x10) = *(uint *)(iVar9 + 0x10) & 0xffffffef;
                iVar9 = param_1[0x1d];
                param_1[0x1d] = iVar9 + 1;
                if (iVar9 + 1 == param_1[0x1e]) {
                  param_1[0x1d] = 0;
                }
              }
              iVar9 = param_1[0x23];
              iVar5 = param_1[0x21];
              if ((iVar5 < iVar9) ||
                 (((iVar5 <= iVar9 && ((uint)param_1[0x20] <= (uint)param_1[0x22])) ||
                  (param_1[0x1f] == param_1[0x1e])))) {
                if (((param_1[0x1f] == param_1[0x1e]) && (iVar9 <= iVar5)) &&
                   ((iVar9 < iVar5 || ((uint)param_1[0x22] < (uint)param_1[0x20])))) {
                  SetEvent((HANDLE)param_1[0xcc]);
                }
                if (((param_1[9] & 4U) != 0) && ((param_1[9] & 2U) != 0)) {
                  (**(code **)(*param_1 + 0x2c))(param_1,0);
                }
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
              pcVar11 = ResetEvent_exref;
              if ((uint)param_1[0x1e] <= (uint)param_1[0x1f]) goto LAB_011d0edc;
              if ((param_1[0x21] < param_1[0x23]) ||
                 ((param_1[0x21] <= param_1[0x23] && ((uint)param_1[0x20] <= (uint)param_1[0x22]))))
              goto LAB_011d0edc;
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
              pcVar11 = ResetEvent_exref;
              bVar1 = *(byte *)(param_1 + 9);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
            (*pcVar11)(param_1[0xca]);
            iVar9 = param_1[0xca];
            goto LAB_011d0f24;
          }
          SetEvent((HANDLE)param_1[0xcc]);
          if (((param_1[9] & 4U) != 0) && ((param_1[9] & 2U) != 0)) {
            param_1[0x22] = param_1[0x20];
            param_1[0x23] = param_1[0x21];
            (**(code **)(*param_1 + 0x2c))(param_1,0);
          }
        }
LAB_011d0f1d:
        iVar9 = param_1[0xca];
      }
LAB_011d0f24:
      (*pcVar11)(iVar9);
    }
    else {
      if (uVar10 == 0x3bc) goto LAB_011d0f1d;
      if (uVar10 == 0x3bd) {
        if (((param_1[9] & 2U) == 0) || ((param_1[9] & 0x80U) != 0)) {
          iVar9 = param_1[0xca];
          goto LAB_011d0f24;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        bVar1 = *(byte *)(param_1 + 9);
        while ((bVar1 & 0x86) != 0) {
          uVar10 = 0;
          if (param_1[0x1e] != 0) {
            do {
              iVar9 = *(int *)(param_1[0xce] + uVar10 * 4);
              uVar3 = *(uint *)(iVar9 + 0x10);
              if ((uVar3 & 1) != 0) {
                *(uint *)(iVar9 + 0x10) = uVar3 & 0xfffffffe;
                *(undefined4 *)(*(int *)(param_1[0xce] + uVar10 * 4) + 4) = 0;
                if (param_1[0x1f] != 0) {
                  param_1[0x1f] = param_1[0x1f] + -1;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < (uint)param_1[0x1e]);
          }
          (**(code **)(*param_1 + 0x48))(param_1,&local_38);
          iVar9 = param_1[0x29];
          uVar10 = param_1[0x28];
          if ((local_34 < iVar9) || ((local_34 <= iVar9 && (local_38 <= uVar10)))) {
            param_1[0x22] = uVar10 - local_38;
            param_1[0x23] = (iVar9 - local_34) - (uint)(uVar10 < local_38);
          }
          else {
            param_1[0x22] = 0;
            param_1[0x23] = 0;
          }
          uStack_24 = 0;
          uVar2 = *(ushort *)(param_1[0x18] + 0xc);
          iStack_28 = param_1[0x1c] - *(int *)(*(int *)(param_1[0xce] + param_1[0x1d] * 4) + 4);
          lVar12 = ftol();
          iStack_2c = param_1[0x27];
          iStack_30 = param_1[0x26];
          uVar13 = ftol();
          uVar10 = (uint)param_1[0x2a] / (uint)uVar2;
          if (((longlong)uVar13 < 0x100000000) &&
             (((longlong)uVar13 < 0 || ((uint)uVar13 <= uVar10)))) {
            uVar13 = (ulonglong)uVar10;
          }
          lVar14 = __allrem(uVar13,param_1[0x2b],0);
          lVar7 = uVar13 - lVar14;
          if (lVar12 < (longlong)(uVar13 - lVar14)) {
            lVar7 = lVar12;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          if ((lVar7 == 0) || ((*(byte *)(param_1 + 9) & 2) == 0)) goto LAB_011d1273;
          piVar4 = *(int **)(param_1[0xce] + param_1[0x1d] * 4);
          iVar9 = (*(code *)param_1[0xb])
                            (param_1,2,param_1[0xc],param_1[0x1d],piVar4[1] + *piVar4,(int)lVar7,
                             (int)lVar12);
          iVar9 = iVar9 + *(uint *)(*(int *)(param_1[0xce] + param_1[0x1d] * 4) + 4) /
                          (uint)*(ushort *)(param_1[0x18] + 0xc);
          if (iVar9 < 0) {
            if (iVar9 == -2) {
              ResetEvent((HANDLE)param_1[0xca]);
            }
            goto LAB_011d1273;
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          if ((iVar9 != 0) && ((*(byte *)(param_1 + 9) & 2) != 0)) {
            uVar10 = 0;
            if (param_1[0x1e] != 0) {
              do {
                iVar5 = *(int *)(param_1[0xce] + uVar10 * 4);
                uVar3 = *(uint *)(iVar5 + 0x10);
                if ((uVar3 & 1) != 0) {
                  *(uint *)(iVar5 + 0x10) = uVar3 & 0xfffffffe;
                  *(undefined4 *)(*(int *)(param_1[0xce] + uVar10 * 4) + 4) = 0;
                  if (param_1[0x1f] != 0) {
                    param_1[0x1f] = param_1[0x1f] + -1;
                  }
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < (uint)param_1[0x1e]);
            }
            (**(code **)(*param_1 + 0x38))
                      (param_1,**(undefined4 **)(param_1[0xce] + param_1[0x1d] * 4),iVar9);
            iVar5 = *(int *)(param_1[0xce] + param_1[0x1d] * 4);
            *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 1;
            iVar5 = *(int *)(param_1[0xce] + param_1[0x1d] * 4);
            *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) & 0xffffffef;
            iVar5 = param_1[0x1d];
            param_1[0x1d] = iVar5 + 1;
            if (iVar5 + 1 == param_1[0x1e]) {
              param_1[0x1d] = 0;
            }
            param_1[0xcb] = -1;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          if ((iVar9 == 0) ||
             ((*(byte *)(*(int *)(param_1[0xce] + param_1[0x1d] * 4) + 0x10) & 0x10) != 0))
          goto LAB_011d1273;
          if ((param_1[0x21] < param_1[0x23]) ||
             ((param_1[0x21] <= param_1[0x23] && ((uint)param_1[0x20] <= (uint)param_1[0x22]))))
          goto LAB_011d1273;
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
          pcVar11 = ResetEvent_exref;
          bVar1 = *(byte *)(param_1 + 9);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
        (*pcVar11)(param_1[0xca]);
LAB_011d1273:
        pcVar11 = ResetEvent_exref;
        if (param_1[0x1f] != 0) {
          ResetEvent((HANDLE)param_1[0xca]);
        }
        iVar9 = *(int *)(param_1[0x18] + 4);
        if (iVar9 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = __alldiv(param_1[0x20],param_1[0x21],param_1[0x1e],0);
          uStack_14 = 0;
          iStack_18 = iVar9;
          uStack_20 = uVar15;
          uVar15 = ftol();
        }
        iVar9 = __alldiv(uVar15,10000,0);
        param_1[0xcb] = iVar9;
        FUN_011cf340(6,0,0);
      }
    }
LAB_011d0f26:
    bVar1 = *(byte *)(param_1 + 9);
  } while( true );
}


