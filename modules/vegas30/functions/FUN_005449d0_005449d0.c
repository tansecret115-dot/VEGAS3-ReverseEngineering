/* Module: vegas30.exe
   Function: FUN_005449d0
   Address: 005449d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00544c34) */
/* WARNING: Removing unreachable block (ram,0x00544c67) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005449d0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int iStack_34;
  undefined8 local_30;
  int local_28 [9];
  
  piVar11 = local_28;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  if (*(int *)(param_1 + 0x44) == 0) {
    local_48 = *(undefined4 *)(param_1 + 0x200);
    uStack_44 = *(undefined4 *)(param_1 + 0x204);
    if (_DAT_00610fd8 == *(double *)(param_1 + 0x200)) {
      bVar4 = true;
      goto LAB_00544a3e;
    }
  }
  else {
    local_48 = *(undefined4 *)(param_1 + 0x50);
    uStack_44 = *(undefined4 *)(param_1 + 0x54);
  }
  bVar4 = false;
LAB_00544a3e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  if (bVar4) {
    local_40 = 0xa2c2b;
    local_3c = 0;
  }
  else {
    uVar12 = ftol();
    local_40 = 1 - (uint)uVar12;
    local_3c = -(uint)(1 < (uint)uVar12) - (int)((ulonglong)uVar12 >> 0x20);
  }
  if (DAT_0064a540 == 0x4d2) {
    local_50 = ftol();
    do {
      uVar15 = 1;
      uVar12 = ftol(1);
      FUN_005463e0(uVar12,uVar15);
      local_50 = local_50 + 1;
      FUN_005448c0(local_28);
    } while (local_28[0] == 0);
    return;
  }
  if ((DAT_0064a4a4 != 0) && (iVar8 = FUN_005624d0(&DAT_0064b538), iVar8 != 0)) {
    FUN_00562970(iVar8);
    FUN_00562540(&DAT_0064b538,iVar8);
  }
  puVar1 = (uint *)(param_1 + 0x1d8);
  FUN_00544940(puVar1);
  bVar4 = true;
  do {
    FUN_005463e0(*puVar1,*(undefined4 *)(param_1 + 0x1dc),1);
    FUN_00544940(&local_50);
    iStack_34 = *(int *)(param_1 + 0x1dc);
    local_38 = *puVar1;
    if ((iStack_34 <= local_50._4_4_) &&
       ((iStack_34 < local_50._4_4_ || (local_38 <= (uint)local_50)))) {
      iVar8 = (local_50._4_4_ - iStack_34) - (uint)((uint)local_50 < local_38);
      if ((iVar8 <= local_3c) && ((iVar8 < local_3c || ((uint)local_50 - local_38 <= local_40)))) {
        lVar13 = ftol();
        local_30 = lVar13 + 1;
        lVar13 = ftol();
        iVar8 = (int)((ulonglong)lVar13 >> 0x20);
        FUN_00544940(&local_50);
        if ((*(int *)(param_1 + 0x1dc) <= local_50._4_4_) &&
           ((*(int *)(param_1 + 0x1dc) < local_50._4_4_ || (*puVar1 <= (uint)local_50)))) {
          do {
            iVar5 = (uint)lVar13 - (uint)local_50;
            uVar3 = (uint)((uint)lVar13 < (uint)local_50);
            iVar7 = iVar8 - local_50._4_4_;
            iVar9 = iVar7 - uVar3;
            if ((-1 < iVar9) &&
               ((iVar9 != 0 && SBORROW4(iVar8,local_50._4_4_) == SBORROW4(iVar7,uVar3) ||
                (iVar5 != 0)))) {
              lVar14 = __alldiv(iVar5,iVar9,10000,0);
              DVar6 = (DWORD)lVar14;
              if (lVar14 < 2) {
                DVar6 = 1;
              }
              DVar6 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xc),DVar6);
              if (DVar6 == 0) goto LAB_00544cae;
              iVar7 = FUN_005448c0(local_28);
              if (iVar7 != 0) goto LAB_00544cae;
            }
            if (lVar13 <= CONCAT44(local_50._4_4_,(uint)local_50)) goto LAB_00544cae;
            FUN_00544940(&local_50);
          } while ((*(int *)(param_1 + 0x1dc) < local_50._4_4_) ||
                  ((*(int *)(param_1 + 0x1dc) <= local_50._4_4_ && (*puVar1 <= (uint)local_50))));
        }
        Sleep(-(uint)(DAT_0064a540 != 0x4d2) & DAT_0064a540);
      }
    }
LAB_00544cae:
    uVar3 = *puVar1;
    iVar8 = *(int *)(param_1 + 0x1dc);
    FUN_00544940(puVar1);
    iVar7 = *(int *)(param_1 + 0x1dc);
    uVar2 = *puVar1;
    if ((iVar8 <= iVar7) && (((iVar8 < iVar7 || (uVar3 < uVar2)) && (!bVar4)))) {
      uVar10 = *(uint *)(param_1 + 0xc4) & 0x1f;
      *(uint *)(param_1 + 200 + uVar10 * 8) = uVar2 - uVar3;
      *(uint *)(param_1 + 0xcc + uVar10 * 8) = (iVar7 - iVar8) - (uint)(uVar2 < uVar3);
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
    }
    bVar4 = false;
    FUN_005448c0(local_28);
    if (local_28[0] != 0) {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      return;
    }
  } while( true );
}


