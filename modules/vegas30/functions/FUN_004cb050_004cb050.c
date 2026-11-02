/* Module: vegas30.exe
   Function: FUN_004cb050
   Address: 004cb050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cb050(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar4 = param_1;
  iVar9 = 0;
  puVar1 = *(uint **)(param_1 + 0x5d0);
  if ((*(int *)(param_1 + 0xbc8) != 0) &&
     (iVar5 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar5 != 0)) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar5 = *piVar6;
    if (0 < iVar5) {
      uVar2 = *(uint *)(param_1 + 0xbb0);
      local_10 = 0;
      uVar7 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) >> 1;
      lVar3 = (longlong)*(int *)(param_1 + 0xbac) * 10;
      if (lVar3 < 0) {
        lVar3 = CONCAT44((int)((ulonglong)lVar3 >> 0x20) - (uint)((uint)lVar3 < uVar7),
                         (uint)lVar3 - uVar7);
        uVar7 = 0;
      }
      param_1 = (int)((longlong)(lVar3 + (ulonglong)uVar7) / (longlong)(int)uVar2);
      local_18 = 0;
      if (7 < param_1) {
        param_1 = 8;
      }
      if (*(int *)(iVar4 + 0xbc8) == 0) {
        local_c = 0;
      }
      else {
        local_c = FUN_005b87b0(*(int *)(iVar4 + 0xbc8));
      }
      iVar8 = 0;
      if (0 < iVar5) {
        piVar6 = *(int **)(local_c + 8);
        do {
          uVar2 = *(uint *)(*piVar6 + 0x10);
          if ((uVar2 & 4) == 0) {
            if ((*(byte *)(iVar4 + 0x1a) & 8) == 0) {
              iVar10 = 0x18;
              if ((uVar2 & 0x10000) == 0) {
                iVar10 = *(int *)(*piVar6 + 0x694);
              }
            }
            else {
              iVar10 = *(int *)(iVar4 + 0xbac);
            }
            param_2 = param_2 - iVar10;
            if (param_2 < -param_1) {
              iVar10 = 1;
              local_18 = iVar9;
              local_10 = iVar8;
              goto LAB_004cb17c;
            }
            iVar9 = iVar9 + iVar10;
          }
          iVar8 = iVar8 + 1;
          piVar6 = piVar6 + 1;
          local_18 = iVar9;
        } while (iVar8 < iVar5);
      }
      iVar10 = 0;
LAB_004cb17c:
      param_2 = param_3 + param_2;
      local_14 = local_10;
      if ((param_1 < param_2) && (iVar8 = iVar8 + 1, iVar8 < iVar5)) {
        piVar6 = (int *)(*(int *)(local_c + 8) + iVar8 * 4);
        do {
          uVar2 = *(uint *)(*piVar6 + 0x10);
          if ((uVar2 & 4) == 0) {
            if ((*(byte *)(iVar4 + 0x1a) & 8) == 0) {
              iVar9 = 0x18;
              if ((uVar2 & 0x10000) == 0) {
                iVar9 = *(int *)(*piVar6 + 0x694);
              }
            }
            else {
              iVar9 = *(int *)(iVar4 + 0xbac);
            }
            if (param_2 < param_1) break;
            param_2 = param_2 - iVar9;
            iVar10 = iVar10 + 1;
            local_14 = iVar8;
          }
          iVar8 = iVar8 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar8 < iVar5);
      }
      if (0 < iVar10) {
        if (iVar10 == 1) {
          *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) | 0x80000;
          FUN_004549b0(iVar4,*(int *)(iVar4 + 0xbb0) * local_10,*(int *)(iVar4 + 0xbb0),4);
        }
        else {
          *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) & 0xfff7ffff;
          iVar10 = *(int *)(iVar4 + 0xbac) / iVar10;
          if (iVar10 < 0x18) {
            iVar9 = 0x18;
          }
          else {
            iVar9 = 500;
            if (iVar10 < 0x1f5) {
              iVar9 = iVar10;
            }
          }
          for (; local_10 <= local_14; local_10 = local_10 + 1) {
            iVar5 = *(int *)(*(int *)(local_c + 8) + local_10 * 4);
            uVar2 = *(uint *)(iVar5 + 0x10);
            if ((uVar2 & 4) == 0) {
              if (iVar9 < 0x19) {
                *(uint *)(iVar5 + 0x10) = uVar2 | 0x10000;
              }
              else {
                *(int *)(iVar5 + 0x694) = iVar9;
                *(uint *)(iVar5 + 0x10) = uVar2 & 0xfffeffff;
                *(undefined4 *)(iVar5 + 0x698) = 0;
              }
            }
          }
          FUN_004cac70(iVar4,local_18,*(undefined4 *)(iVar4 + 0xbac),4);
        }
        *puVar1 = *puVar1 | 1;
        *(uint *)**(undefined4 **)(iVar4 + 0xbc8) = *(uint *)**(undefined4 **)(iVar4 + 0xbc8) | 0x10
        ;
      }
    }
  }
  return;
}


