/* Module: vegas30.exe
   Function: FUN_00598340
   Address: 00598340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00598340(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_44;
  int local_30;
  undefined4 local_20;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00629978;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  piVar8 = (int *)FUN_005b87b0(*(undefined4 *)(param_1 + 0x68));
  iVar4 = *piVar8;
  local_20 = 0;
  iVar12 = 0;
  do {
    if (iVar4 <= iVar12) {
      ExceptionList = local_14;
      return local_20;
    }
    iVar5 = *(int *)(piVar8[2] + iVar12 * 4);
    if ((*(int *)(iVar5 + 4) == 2) && (*(int *)(iVar5 + 0x240) != 0)) {
      local_30 = 0;
      FUN_00595760(param_1,iVar5);
      piVar2 = (int *)(iVar5 + 0x5d0);
      iVar6 = *(int *)*piVar2;
      if (param_2 == 0) {
        for (local_44 = 0; local_44 < iVar6 + -1; local_44 = local_44 + 1) {
          iVar9 = *(int *)(*(int *)(*piVar2 + 8) + local_44 * 4);
          if ((*(int *)(iVar9 + 0x30) < 1) || (*(int *)(iVar9 + 0x38) != 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) {
            if (*(int *)(iVar9 + 0x30) < 1) break;
            local_20 = 1;
            uVar11 = *(uint *)(iVar5 + 0x238);
            puVar1 = (uint *)(iVar9 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - uVar11;
            *(int *)(iVar9 + 0x24) =
                 (*(int *)(iVar9 + 0x24) - *(int *)(iVar5 + 0x23c)) - (uint)(uVar3 < uVar11);
            uVar11 = *(uint *)(iVar5 + 0x238);
            puVar1 = (uint *)(iVar9 + 0x18);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - uVar11;
            *(int *)(iVar9 + 0x1c) =
                 (*(int *)(iVar9 + 0x1c) - *(int *)(iVar5 + 0x23c)) - (uint)(uVar3 < uVar11);
            local_8 = 0;
            iVar10 = (**(code **)(**(int **)(iVar5 + 0x244) + 0x34))
                               (*(int **)(iVar5 + 0x244),*(undefined4 *)(iVar9 + 0x100),0,
                                *(undefined4 *)(iVar9 + 0x2c),0);
            local_8 = 0xffffffff;
            if (iVar10 < *(int *)(iVar9 + 0x2c)) {
              uVar11 = *(int *)(iVar9 + 0x2c) - iVar10;
              puVar1 = (uint *)(iVar5 + 0x238);
              uVar3 = *puVar1;
              *puVar1 = *puVar1 + uVar11;
              *(int *)(iVar5 + 0x23c) =
                   *(int *)(iVar5 + 0x23c) + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar3,uVar11);
            }
            *(int *)(iVar9 + 0x2c) = iVar10;
            *(undefined4 *)(iVar9 + 0x38) = 0;
            bVar7 = 8 < local_30;
            local_30 = local_30 + 1;
            if (bVar7) break;
          }
        }
      }
      else {
        iVar9 = 0;
        if (0 < iVar6) {
          do {
            *(undefined4 *)(*(int *)(*(int *)(*piVar2 + 8) + iVar9 * 4) + 0x38) = 0;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar6);
        }
      }
      FUN_00595790(param_1,iVar5);
    }
    iVar12 = iVar12 + 1;
  } while( true );
}


