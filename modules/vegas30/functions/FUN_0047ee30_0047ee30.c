/* Module: vegas30.exe
   Function: FUN_0047ee30
   Address: 0047ee30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047f0f3) */
/* WARNING: Removing unreachable block (ram,0x0047eee3) */
/* WARNING: Removing unreachable block (ram,0x0047f050) */

int FUN_0047ee30(int *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int local_24;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar10 = 0;
  if (*param_1 == 0) {
    local_1c = _SfList_CreateExZ_32(param_1,0x10,0x10,0x10,0x40000004,0,0,0);
    if (local_1c < 0) {
      return local_1c;
    }
  }
  else {
    _SfList_DeleteList_16(*param_1,0,0xffffffff,0);
  }
  piVar2 = *(int **)(param_2 + 0x28);
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if ((param_4 == 3) && (param_3 != 0)) {
    param_3 = 1;
  }
  if (param_3 == 0) {
    bVar4 = false;
    if (piVar2 != (int *)0x0) {
      iVar10 = *piVar2;
    }
    iVar11 = 0;
    if (0 < iVar10) {
      do {
        piVar8 = (int *)(piVar2[1] * iVar11 + piVar2[2]);
        if ((*piVar8 == 0) || (uVar3 = *(uint *)(*piVar8 + 0x10), (uVar3 & 8) != 0)) {
LAB_0047f2ed:
          if (bVar4) {
            bVar4 = false;
            local_8 = piVar8[4] - local_10;
            uVar3 = (uint)((uint)piVar8[4] < local_10);
            iVar6 = piVar8[5] - local_c;
            local_4 = iVar6 - uVar3;
            if ((-1 < local_4) &&
               ((local_4 != 0 && SBORROW4(piVar8[5],local_c) == SBORROW4(iVar6,uVar3) ||
                (local_8 != 0)))) {
              _SfList_InsertList_16(*param_1,0xffffffff,&local_10,1);
            }
          }
        }
        else {
          if (param_4 == 1) {
            if (((uVar3 & 0x800000) != 0) && ((uVar3 & 0x1000000) == 0)) goto LAB_0047f366;
            goto LAB_0047f2ed;
          }
          if (param_4 == 2) {
            if (((uVar3 & 0x800000) == 0) || ((uVar3 & 0x1000000) == 0)) goto LAB_0047f2ed;
          }
          else {
            if (param_4 == 3) {
              bVar7 = (byte)(uVar3 >> 4);
            }
            else {
              bVar7 = (byte)(uVar3 >> 0x17);
            }
            if ((bVar7 & 1) == 0) goto LAB_0047f2ed;
          }
LAB_0047f366:
          if (!bVar4) {
            local_10 = piVar8[4];
            bVar4 = true;
            local_c = piVar8[5];
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar10);
    }
  }
  else if (param_3 == 1) {
    bVar4 = false;
    if (piVar2 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *piVar2;
    }
    iVar11 = 0;
    if (0 < iVar10) {
      do {
        piVar8 = (int *)(piVar2[1] * iVar11 + piVar2[2]);
        iVar6 = *piVar8;
        if ((iVar6 == 0) || (uVar3 = *(uint *)(iVar6 + 0x10), (uVar3 & 8) != 0)) {
LAB_0047f19b:
          if (bVar4) {
            if ((((iVar6 == 0) && (iVar11 + 1 < iVar10)) && (piVar8[0x34] != 0)) &&
               (uVar3 = *(uint *)(piVar8[0x34] + 0x10), (uVar3 & 8) == 0)) {
              if (param_4 != 1) {
                if (param_4 == 2) {
                  if (((uVar3 & 0x800000) == 0) || ((uVar3 & 0x1000000) == 0)) goto LAB_0047f271;
                }
                else {
                  if (param_4 == 3) {
                    bVar7 = (byte)(uVar3 >> 4);
                  }
                  else {
                    bVar7 = (byte)(uVar3 >> 0x17);
                  }
                  if ((bVar7 & 1) == 0) goto LAB_0047f271;
                }
                goto LAB_0047f232;
              }
              if (((uVar3 & 0x800000) != 0) && ((uVar3 & 0x1000000) == 0)) goto LAB_0047f232;
            }
LAB_0047f271:
            bVar4 = false;
            local_8 = piVar8[4] - local_10;
            uVar3 = (uint)((uint)piVar8[4] < local_10);
            iVar6 = piVar8[5] - local_c;
            local_4 = iVar6 - uVar3;
            if ((-1 < local_4) &&
               ((local_4 != 0 && SBORROW4(piVar8[5],local_c) == SBORROW4(iVar6,uVar3) ||
                (local_8 != 0)))) {
              _SfList_InsertList_16(*param_1,0xffffffff,&local_10,1);
            }
          }
        }
        else {
          if (param_4 == 1) {
            if (((uVar3 & 0x800000) != 0) && ((uVar3 & 0x1000000) == 0)) goto LAB_0047f217;
            goto LAB_0047f19b;
          }
          if (param_4 == 2) {
            if (((uVar3 & 0x800000) == 0) || ((uVar3 & 0x1000000) == 0)) goto LAB_0047f19b;
          }
          else {
            if (param_4 == 3) {
              bVar7 = (byte)(uVar3 >> 4);
            }
            else {
              bVar7 = (byte)(uVar3 >> 0x17);
            }
            if ((bVar7 & 1) == 0) goto LAB_0047f19b;
          }
LAB_0047f217:
          if (!bVar4) {
            local_10 = piVar8[4];
            bVar4 = true;
            local_c = piVar8[5];
          }
        }
LAB_0047f232:
        iVar11 = iVar11 + 1;
        if (iVar10 <= iVar11) {
          return local_1c;
        }
      } while( true );
    }
  }
  else if (param_3 == 2) {
    lVar12 = FUN_0047edd0(param_2 + 0x638,DAT_006477bc);
    lVar5 = CONCAT44(local_c,local_10);
    if (lVar12 <= CONCAT44(DAT_006477ac,DAT_006477a8)) {
      lVar12 = CONCAT44(DAT_006477ac,DAT_006477a8);
    }
    local_14 = (int)((ulonglong)lVar12 >> 0x20);
    local_18 = (uint)lVar12;
    bVar4 = false;
    if (piVar2 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *piVar2;
    }
    local_24 = 0;
    if (0 < iVar10) {
      do {
        iVar9 = (int)((ulonglong)lVar5 >> 0x20);
        local_10 = (uint)lVar5;
        iVar11 = *(int *)(piVar2[1] * local_24 + piVar2[2]);
        iVar6 = piVar2[1] * local_24 + piVar2[2];
        if ((iVar11 == 0) || (uVar3 = *(uint *)(iVar11 + 0x10), (uVar3 & 8) != 0)) {
LAB_0047ef4d:
          if (bVar4) {
            if ((((iVar11 == 0) && (local_24 + 1 < iVar10)) && (*(int *)(iVar6 + 0xd0) != 0)) &&
               (uVar3 = *(uint *)(*(int *)(iVar6 + 0xd0) + 0x10), (uVar3 & 8) == 0)) {
              if (param_4 != 1) {
                if (param_4 == 2) {
                  if (((uVar3 & 0x800000) == 0) || ((uVar3 & 0x1000000) == 0)) goto LAB_0047f0a5;
                }
                else {
                  if (param_4 == 3) {
                    bVar7 = (byte)(uVar3 >> 4);
                  }
                  else {
                    bVar7 = (byte)(uVar3 >> 0x17);
                  }
                  if ((bVar7 & 1) == 0) goto LAB_0047f0a5;
                }
                goto LAB_0047f12e;
              }
              if (((uVar3 & 0x800000) != 0) && ((uVar3 & 0x1000000) == 0)) goto LAB_0047f12e;
            }
LAB_0047f0a5:
            puVar1 = (uint *)(iVar6 + 0x10);
            bVar4 = false;
            lVar5 = *(longlong *)puVar1;
            if (((iVar11 == 0) && (lVar5 = lVar12 + *(longlong *)puVar1, local_24 + 1 < iVar10)) &&
               (lVar13 = __alldiv(*(uint *)(iVar6 + 0xe0) + *puVar1,
                                  *(int *)(iVar6 + 0xe4) + *(int *)(iVar6 + 0x14) +
                                  (uint)CARRY4(*(uint *)(iVar6 + 0xe0),*puVar1),2,0), lVar13 < lVar5
               )) {
              lVar5 = lVar13;
            }
            iVar6 = (int)((ulonglong)lVar5 >> 0x20);
            local_8 = (uint)lVar5 - local_10;
            uVar3 = (uint)((uint)lVar5 < local_10);
            iVar11 = iVar6 - iVar9;
            local_4 = iVar11 - uVar3;
            lVar5 = CONCAT44(iVar9,local_10);
            if ((-1 < local_4) &&
               ((local_4 != 0 && SBORROW4(iVar6,iVar9) == SBORROW4(iVar11,uVar3) ||
                (lVar5 = CONCAT44(iVar9,local_10), local_8 != 0)))) {
              _SfList_InsertList_16(*param_1,0xffffffff,&local_10,1);
              lVar5 = CONCAT44(local_c,local_10);
            }
          }
        }
        else {
          if (param_4 == 1) {
            if (((uVar3 & 0x800000) != 0) && ((uVar3 & 0x1000000) == 0)) goto LAB_0047efe3;
            goto LAB_0047ef4d;
          }
          if (param_4 == 2) {
            if (((uVar3 & 0x800000) == 0) || ((uVar3 & 0x1000000) == 0)) goto LAB_0047ef4d;
          }
          else {
            if (param_4 == 3) {
              bVar7 = (byte)(uVar3 >> 4);
            }
            else {
              bVar7 = (byte)(uVar3 >> 0x17);
            }
            if ((bVar7 & 1) == 0) goto LAB_0047ef4d;
          }
LAB_0047efe3:
          if (!bVar4) {
            puVar1 = (uint *)(iVar6 + 0x10);
            uVar3 = *puVar1;
            bVar4 = true;
            iVar11 = *(int *)(iVar6 + 0x14);
            local_c = iVar11;
            lVar5 = *(longlong *)puVar1;
            if ((0 < local_24) && (lVar5 = *(longlong *)puVar1, *(int *)(iVar6 + -0xd0) == 0)) {
              local_10 = uVar3;
              lVar13 = __alldiv(*(uint *)(iVar6 + -0xc0) + *(uint *)(iVar6 + 0x10),
                                *(int *)(iVar6 + -0xbc) + *(int *)(iVar6 + 0x14) +
                                (uint)CARRY4(*(uint *)(iVar6 + -0xc0),*(uint *)(iVar6 + 0x10)),2,0);
              local_c = (iVar11 - local_14) - (uint)(uVar3 < local_18);
              lVar5 = CONCAT44(local_c,uVar3 - local_18);
              if (CONCAT44(local_c,uVar3 - local_18) < lVar13) {
                local_c = (int)((ulonglong)lVar13 >> 0x20);
                lVar5 = lVar13;
              }
            }
          }
        }
LAB_0047f12e:
        local_24 = local_24 + 1;
        if (iVar10 <= local_24) {
          return local_1c;
        }
      } while( true );
    }
  }
  return local_1c;
}


