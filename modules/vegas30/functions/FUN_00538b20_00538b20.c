/* Module: vegas30.exe
   Function: FUN_00538b20
   Address: 00538b20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00538c9c) */
/* WARNING: Removing unreachable block (ram,0x00538bd9) */
/* WARNING: Removing unreachable block (ram,0x00538bbb) */
/* WARNING: Removing unreachable block (ram,0x00538c84) */
/* WARNING: Removing unreachable block (ram,0x00538caa) */
/* WARNING: Removing unreachable block (ram,0x00538bcb) */

int FUN_00538b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int local_10;
  
  uVar5 = DAT_0064b138;
  iVar12 = 0;
  local_10 = 0;
  FUN_005b83b0(DAT_0064b138,1);
  lVar13 = FUN_00538780(param_1);
  if (*(int *)(param_1 + 0xc) == 400) {
    iVar6 = FUN_00445d30(param_1,0xffffffff);
    if (iVar6 != 0) {
      if (*(int **)(iVar6 + 0x60) == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = **(int **)(iVar6 + 0x60);
      }
      if (0 < iVar8) {
        do {
          iVar11 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60) + 4) * iVar12;
          iVar1 = *(int *)(iVar9 + 4 + iVar11);
          puVar10 = (undefined4 *)(iVar9 + iVar11);
          if ((iVar1 < 1) && (iVar1 < 0)) {
            lVar4 = 0;
          }
          else {
            lVar4 = CONCAT44(iVar1,*puVar10);
            if (lVar13 < CONCAT44(iVar1,*puVar10)) {
              lVar4 = lVar13;
            }
          }
          if ((lVar4 < CONCAT44(param_3,param_2)) || (CONCAT44(param_5,param_4) < lVar4)) {
            puVar10[8] = puVar10[8] & 0xfffffffb;
          }
          else {
            uVar2 = puVar10[8];
            puVar10[8] = uVar2 >> 1 & 2 | (uVar2 >> 1 & 1) << 2 | uVar2 & 0xfffffff9;
          }
          if ((*(byte *)(puVar10 + 8) & 2) != 0) {
            local_10 = local_10 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar8);
      }
    }
  }
  else if ((*(int *)(param_1 + 0xc) == 0x191) && (iVar6 = FUN_0050c130(param_1), iVar6 != 0)) {
    piVar7 = (int *)FUN_00522a00(0xffffffff);
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7;
    }
    if (0 < iVar6) {
      do {
        uVar3 = *(undefined4 *)(piVar7[1] * iVar12 + 4 + piVar7[2]);
        iVar11 = piVar7[1] * iVar12 + piVar7[2];
        iVar8 = *(int *)(iVar11 + 8);
        if ((iVar8 < 1) && (iVar8 < 0)) {
          lVar4 = 0;
        }
        else {
          lVar4 = CONCAT44(iVar8,uVar3);
          if (lVar13 < CONCAT44(iVar8,uVar3)) {
            lVar4 = lVar13;
          }
        }
        if ((lVar4 < CONCAT44(param_3,param_2)) || (CONCAT44(param_5,param_4) < lVar4)) {
          *(uint *)(iVar11 + 0x14) = *(uint *)(iVar11 + 0x14) & 0xfffffffb;
        }
        else {
          uVar2 = *(uint *)(iVar11 + 0x14);
          *(uint *)(iVar11 + 0x14) = uVar2 >> 1 & 2 | (uVar2 >> 1 & 1) << 2 | uVar2 & 0xfffffff9;
        }
        if ((*(byte *)(iVar11 + 0x14) & 2) != 0) {
          local_10 = local_10 + 1;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar6);
    }
  }
  FUN_005b84d0(uVar5,1);
  return local_10;
}


