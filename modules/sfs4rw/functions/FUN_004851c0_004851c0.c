/* Module: sfs4rw.dll
   Function: FUN_004851c0
   Address: 004851c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004851c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int *local_30;
  int *piStack_2c;
  int *local_28;
  int iStack_24;
  int local_20;
  int local_10 [4];
  
  iVar10 = 0;
  iVar1 = *(int *)(param_1 + 0x175);
  if (0 < *(int *)(param_1 + 0x111)) {
    local_28 = local_10;
    local_30 = (int *)(param_1 + 0x115);
    do {
      iVar3 = *(int *)(*local_30 + 0xc);
      iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)(iVar1 + 0x40 + *(int *)(*local_30 + 4) * 4),
                         *(int *)(iVar1 + 8) * iVar3,iVar3,0);
      iVar10 = iVar10 + 1;
      local_30 = local_30 + 1;
      *local_28 = iVar3;
      local_28 = local_28 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x111));
  }
  iVar10 = *(int *)(iVar1 + 0x10);
  if (iVar10 < *(int *)(iVar1 + 0x14)) {
    do {
      uVar12 = *(uint *)(iVar1 + 0xc);
      if (uVar12 < *(uint *)(param_1 + 0x125)) {
        do {
          iVar3 = 0;
          local_20 = 0;
          if (0 < *(int *)(param_1 + 0x111)) {
            local_28 = local_10;
            piStack_2c = (int *)(param_1 + 0x115);
            do {
              iStack_24 = 0;
              iVar2 = *piStack_2c;
              iVar8 = *(int *)(iVar2 + 0x31);
              iVar4 = iVar8 * uVar12;
              if (0 < *(int *)(iVar2 + 0x35)) {
                piVar11 = (int *)(*local_28 + iVar10 * 4);
                do {
                  iVar5 = *piVar11 + iVar4 * 0x80;
                  iVar9 = 0;
                  if (0 < iVar8) {
                    piVar13 = (int *)(iVar1 + 0x18 + iVar3 * 4);
                    do {
                      *piVar13 = iVar5;
                      iVar8 = *(int *)(iVar2 + 0x31);
                      iVar3 = iVar3 + 1;
                      piVar13 = piVar13 + 1;
                      iVar5 = iVar5 + 0x80;
                      iVar9 = iVar9 + 1;
                    } while (iVar9 < iVar8);
                  }
                  iStack_24 = iStack_24 + 1;
                  piVar11 = piVar11 + 1;
                } while (iStack_24 < *(int *)(iVar2 + 0x35));
              }
              piStack_2c = piStack_2c + 1;
              local_28 = local_28 + 1;
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)(param_1 + 0x111));
          }
          uVar6 = (**(code **)(*(int *)(param_1 + 0x189) + 4))(param_1,iVar1 + 0x18);
          if ((char)uVar6 == '\0') {
            *(uint *)(iVar1 + 0xc) = uVar12;
            *(int *)(iVar1 + 0x10) = iVar10;
            return uVar6 & 0xffffff00;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(param_1 + 0x125));
      }
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    } while (iVar10 < *(int *)(iVar1 + 0x14));
  }
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  uVar7 = FUN_00484cc0(param_1);
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}


