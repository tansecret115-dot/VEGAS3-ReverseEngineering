/* Module: vegas30k.dll
   Function: FUN_01170390
   Address: 01170390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01170390(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *local_30;
  int *piStack_2c;
  int *local_28;
  int iStack_24;
  int local_20;
  int local_10 [4];
  
  iVar9 = 0;
  iVar1 = *(int *)(param_1 + 0x175);
  if (0 < *(int *)(param_1 + 0x111)) {
    local_28 = local_10;
    local_30 = (int *)(param_1 + 0x115);
    do {
      iVar4 = *(int *)(*local_30 + 0xc);
      iVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)(iVar1 + 0x40 + *(int *)(*local_30 + 4) * 4),
                         *(int *)(iVar1 + 8) * iVar4,iVar4,0);
      iVar9 = iVar9 + 1;
      local_30 = local_30 + 1;
      *local_28 = iVar4;
      local_28 = local_28 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x111));
  }
  iVar9 = *(int *)(iVar1 + 0x10);
  if (iVar9 < *(int *)(iVar1 + 0x14)) {
    do {
      uVar11 = *(uint *)(iVar1 + 0xc);
      if (uVar11 < *(uint *)(param_1 + 0x125)) {
        do {
          iVar4 = 0;
          local_20 = 0;
          if (0 < *(int *)(param_1 + 0x111)) {
            local_28 = local_10;
            piStack_2c = (int *)(param_1 + 0x115);
            do {
              iStack_24 = 0;
              iVar2 = *piStack_2c;
              iVar7 = *(int *)(iVar2 + 0x31);
              iVar5 = iVar7 * uVar11;
              if (0 < *(int *)(iVar2 + 0x35)) {
                piVar10 = (int *)(*local_28 + iVar9 * 4);
                do {
                  iVar6 = *piVar10 + iVar5 * 0x80;
                  iVar8 = 0;
                  if (0 < iVar7) {
                    piVar12 = (int *)(iVar1 + 0x18 + iVar4 * 4);
                    do {
                      *piVar12 = iVar6;
                      iVar7 = *(int *)(iVar2 + 0x31);
                      iVar4 = iVar4 + 1;
                      piVar12 = piVar12 + 1;
                      iVar6 = iVar6 + 0x80;
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < iVar7);
                  }
                  iStack_24 = iStack_24 + 1;
                  piVar10 = piVar10 + 1;
                } while (iStack_24 < *(int *)(iVar2 + 0x35));
              }
              piStack_2c = piStack_2c + 1;
              local_28 = local_28 + 1;
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)(param_1 + 0x111));
          }
          cVar3 = (**(code **)(*(int *)(param_1 + 0x189) + 4))(param_1,iVar1 + 0x18);
          if (cVar3 == '\0') {
            *(uint *)(iVar1 + 0xc) = uVar11;
            *(int *)(iVar1 + 0x10) = iVar9;
            return 0;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_1 + 0x125));
      }
      iVar9 = iVar9 + 1;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    } while (iVar9 < *(int *)(iVar1 + 0x14));
  }
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  FUN_0116fe90(param_1);
  return 1;
}


