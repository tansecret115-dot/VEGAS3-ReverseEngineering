/* Module: vegas30.exe
   Function: FUN_004d30b0
   Address: 004d30b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d30b0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int local_48;
  int local_40;
  undefined4 local_1c;
  int local_10;
  int local_8;
  
  iVar12 = param_1;
  puVar1 = *(uint **)(param_1 + 0x5d0);
  iVar2 = *(int *)(param_1 + 0xac4);
  iVar3 = *(int *)(param_1 + 0xacc);
  if ((*(int *)(param_1 + 0xbc8) != 0) &&
     (piVar14 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8)), piVar14 != (int *)0x0)) {
    iVar4 = *(int *)(param_1 + 0xbc4);
    uVar5 = *(uint *)(param_1 + 0xb88);
    uVar6 = *(undefined4 *)(param_1 + 0xac0);
    local_48 = *(int *)(param_1 + 0xac4);
    uVar7 = *(undefined4 *)(param_1 + 0xac8);
    local_40 = *(int *)(param_1 + 0xacc);
    lVar18 = ftol();
    iVar8 = *(int *)(param_1 + 0xb8c);
    lVar19 = ftol();
    uVar9 = *(undefined4 *)(param_1 + 0xb8c);
    local_8 = *(int *)(param_1 + 0xba8);
    uVar15 = FUN_005b8900(*(undefined4 *)(param_1 + 0xbc8),3);
    local_1c = 1;
    *puVar1 = (uint)(1 < uVar15) << 0xc | *puVar1 & 0xffffefff;
    param_1 = 0;
    if (iVar4 < 1) {
      *(undefined4 *)(iVar12 + 0x5cc) = 1;
      return;
    }
    do {
      uVar13 = local_1c;
      if ((param_1 < 0) || (*piVar14 + -1 < param_1)) {
        local_10 = 0;
      }
      else {
        local_10 = *(int *)(piVar14[2] + param_1 * 4);
      }
      if (local_10 == 0) break;
      iVar10 = *(int *)(local_10 + 0x69c);
      *(undefined4 *)(iVar10 + 0x18) = uVar6;
      *(int *)(iVar10 + 0x1c) = local_48;
      *(undefined4 *)(iVar10 + 0x20) = uVar7;
      *(uint *)(iVar10 + 8) = (uint)lVar18 + uVar5;
      *(int *)(iVar10 + 0x24) = local_40;
      lVar11 = (lVar19 + CONCAT44(uVar9,uVar5)) - (lVar18 + CONCAT44(iVar8,uVar5));
      *(int *)(iVar10 + 0x10) = (int)lVar11;
      *(uint *)(iVar10 + 0xc) =
           (int)((ulonglong)lVar18 >> 0x20) + iVar8 + (uint)CARRY4((uint)lVar18,uVar5);
      *(int *)(iVar10 + 0x14) = (int)((ulonglong)lVar11 >> 0x20);
      if (((*(uint *)(local_10 + 0x10) & 4) == 0) && (*(int *)(iVar12 + 0xbc0) <= param_1)) {
        if ((*(uint *)(iVar12 + 0x18) & 0x80000) == 0) {
          iVar16 = 0x18;
          if ((*(uint *)(local_10 + 0x10) & 0x10000) == 0) {
            iVar16 = *(int *)(local_10 + 0x694);
          }
          local_8 = local_8 + iVar16;
          uVar15 = *(uint *)(iVar12 + 0xbac);
          if (uVar15 == 0) {
            local_40 = -1;
          }
          else {
            uVar17 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f) >> 1;
            lVar11 = (longlong)(local_8 - *(int *)(iVar12 + 0xba8)) *
                     (longlong)*(int *)(iVar12 + 0xbb0);
            if (lVar11 < 0) {
              lVar11 = CONCAT44((int)((ulonglong)lVar11 >> 0x20) - (uint)((uint)lVar11 < uVar17),
                                (uint)lVar11 - uVar17);
              uVar17 = 0;
            }
            local_40 = *(int *)(iVar12 + 0xac4) +
                       (int)((longlong)(lVar11 + (ulonglong)uVar17) / (longlong)(int)uVar15);
            if (local_40 < -0x4000) {
              local_40 = -0x4000;
            }
            else if (0x3fff < local_40) {
              local_40 = 0x3fff;
            }
          }
          if ((local_48 == *(int *)(iVar12 + 0xac4)) &&
             (iVar16 = *(int *)(iVar12 + 0xacc) + 1, iVar16 <= local_40)) {
            local_40 = iVar16;
          }
          *(int *)(iVar10 + 0x24) = local_40;
          local_48 = local_40;
        }
        else {
          local_8 = local_8 + *(int *)(iVar12 + 0xbac);
          local_48 = *(int *)(iVar12 + 0xacc) + 1;
          *(int *)(iVar10 + 0x24) = local_48;
          local_40 = local_48;
        }
      }
      else {
        *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(iVar10 + 0x1c);
      }
      if ((*(int *)(iVar10 + 0x50) != *(int *)(local_10 + 4)) || (*(int *)(iVar10 + 0x54) == 0)) {
        FUN_004d2fd0(iVar12,local_10,param_1);
      }
      iVar16 = *(int *)(iVar10 + 0x50);
      if (iVar16 == 3) {
        local_1c = 0;
      }
      if ((iVar2 < *(int *)(iVar10 + 0x24)) && (*(int *)(iVar10 + 0x1c) <= iVar3)) {
        if (iVar16 == 2) {
          FUN_004cf1b0(iVar12,local_10,param_1);
        }
        else if (iVar16 == 3) {
          FUN_004cfc80(iVar12,local_10,param_1,uVar13);
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar4);
  }
  *(undefined4 *)(iVar12 + 0x5cc) = 1;
  return;
}


