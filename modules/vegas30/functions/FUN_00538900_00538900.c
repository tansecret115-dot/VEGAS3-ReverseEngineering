/* Module: vegas30.exe
   Function: FUN_00538900
   Address: 00538900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00538a9b) */
/* WARNING: Removing unreachable block (ram,0x005389b9) */
/* WARNING: Removing unreachable block (ram,0x0053899b) */
/* WARNING: Removing unreachable block (ram,0x00538a83) */
/* WARNING: Removing unreachable block (ram,0x00538aa9) */
/* WARNING: Removing unreachable block (ram,0x005389ab) */

int FUN_00538900(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  int local_10;
  
  iVar12 = 0;
  local_10 = 0;
  lVar13 = FUN_00538780(param_1);
  uVar4 = DAT_0064b138;
  FUN_005b83b0(DAT_0064b138,1);
  if (*(int *)(param_1 + 0xc) == 400) {
    iVar5 = FUN_00445d30(param_1,0xffffffff);
    if (iVar5 != 0) {
      if (*(int **)(iVar5 + 0x60) == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = **(int **)(iVar5 + 0x60);
      }
      if (0 < iVar7) {
        do {
          iVar10 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
          iVar8 = *(int *)(*(int *)(iVar5 + 0x60) + 4) * iVar12;
          iVar1 = *(int *)(iVar8 + 4 + iVar10);
          puVar9 = (undefined4 *)(iVar8 + iVar10);
          if ((iVar1 < 1) && (iVar1 < 0)) {
            lVar3 = 0;
          }
          else {
            lVar3 = CONCAT44(iVar1,*puVar9);
            if (lVar13 < CONCAT44(iVar1,*puVar9)) {
              lVar3 = lVar13;
            }
          }
          if ((lVar3 < CONCAT44(param_4,param_3)) || (CONCAT44(param_6,param_5) < lVar3)) {
            if (param_2 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (uint)puVar9[8] >> 1 & 1;
            }
          }
          else if (param_2 == 0) {
            uVar11 = 1;
          }
          else {
            uVar11 = (uint)~puVar9[8] >> 1 & 1;
          }
          puVar9[8] = uVar11 << 1 | puVar9[8] & 0xfffffffd;
          if (uVar11 != 0) {
            local_10 = local_10 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar7);
      }
    }
  }
  else if ((*(int *)(param_1 + 0xc) == 0x191) && (iVar5 = FUN_0050c130(param_1), iVar5 != 0)) {
    piVar6 = (int *)FUN_00522a00(0xffffffff);
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6;
    }
    if (0 < iVar5) {
      do {
        uVar2 = *(undefined4 *)(piVar6[1] * iVar12 + 4 + piVar6[2]);
        iVar10 = piVar6[1] * iVar12 + piVar6[2];
        iVar7 = *(int *)(iVar10 + 8);
        if ((iVar7 < 1) && (iVar7 < 0)) {
          lVar3 = 0;
        }
        else {
          lVar3 = CONCAT44(iVar7,uVar2);
          if (lVar13 < CONCAT44(iVar7,uVar2)) {
            lVar3 = lVar13;
          }
        }
        if ((lVar3 < CONCAT44(param_4,param_3)) || (CONCAT44(param_6,param_5) < lVar3)) {
          if (param_2 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(uint *)(iVar10 + 0x14) >> 1 & 1;
          }
        }
        else if (param_2 == 0) {
          uVar11 = 1;
        }
        else {
          uVar11 = ~*(uint *)(iVar10 + 0x14) >> 1 & 1;
        }
        *(uint *)(iVar10 + 0x14) = uVar11 << 1 | *(uint *)(iVar10 + 0x14) & 0xfffffffd;
        if (uVar11 != 0) {
          local_10 = local_10 + 1;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar5);
    }
  }
  FUN_005b84d0(uVar4,1);
  return local_10;
}


