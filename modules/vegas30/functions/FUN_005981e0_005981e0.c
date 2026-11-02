/* Module: vegas30.exe
   Function: FUN_005981e0
   Address: 005981e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005981e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  int local_20;
  int local_1c;
  undefined4 local_14;
  int local_10;
  
  piVar6 = (int *)FUN_005b87b0(*(undefined4 *)(param_1 + 0x68));
  uVar7 = 0;
  iVar1 = *piVar6;
  local_14 = 0;
  local_10 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(piVar6[2] + local_10 * 4);
      if (*(int *)(iVar2 + 4) == 2) {
        local_1c = 0;
        FUN_00595760(param_1,iVar2);
        local_20 = 0;
        iVar3 = **(int **)(iVar2 + 0x5d0);
        if (0 < iVar3) {
          do {
            iVar4 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5d0) + 8) + local_20 * 4);
            if (*(int *)(iVar4 + 0x30) < 1) {
              iVar11 = 0;
              if (0 < *(int *)(iVar4 + 0x34)) {
                piVar10 = (int *)(iVar4 + 0x3c);
                pbVar9 = (byte *)(iVar4 + 0xa4);
                do {
                  if ((*pbVar9 & 1) != 0) break;
                  iVar8 = FUN_0058e180(*piVar10);
                  if (iVar8 == 0) goto LAB_0059830f;
                  if (*(int *)(*piVar10 + 0x48) < 0) {
                    *(undefined4 *)(DAT_0065a068 + 0x744) = 1;
                  }
                  iVar11 = iVar11 + 1;
                  piVar10 = piVar10 + 3;
                  pbVar9 = pbVar9 + 0x50;
                } while (iVar11 < *(int *)(iVar4 + 0x34));
              }
              iVar11 = FUN_00592130(param_1,iVar2,iVar4);
              local_14 = 1;
              if (iVar11 != iVar4) {
                *(int *)(*(int *)(*(int *)(iVar2 + 0x5d0) + 8) + local_20 * 4) = iVar11;
              }
              bVar5 = 8 < local_1c;
              local_1c = local_1c + 1;
              if (bVar5) break;
            }
            local_20 = local_20 + 1;
          } while (local_20 < iVar3);
        }
LAB_0059830f:
        FUN_00595790(param_1,iVar2);
        uVar7 = local_14;
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar1);
  }
  return uVar7;
}


