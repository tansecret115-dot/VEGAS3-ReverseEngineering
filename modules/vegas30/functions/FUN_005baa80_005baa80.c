/* Module: vegas30.exe
   Function: FUN_005baa80
   Address: 005baa80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005baa80(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_28;
  int local_20;
  uint local_1c;
  int local_18 [6];
  
  FUN_005b83b0(param_1,1);
  iVar9 = 0;
  if (DAT_00648838 != 0) {
    if (DAT_0064b4e4 == 0) {
      iVar2 = FUN_00601ab0(&local_20,&local_1c,1);
      if (iVar2 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar3 = (local_1c & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar3) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_20;
          DAT_0064b4e4 = uVar3;
        }
      }
    }
    if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
      DAT_00648838 = 0;
    }
  }
  piVar4 = (int *)FUN_005b87b0(param_1);
  if (piVar4 == (int *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = *piVar4;
  }
  local_1c = 0;
  piVar6 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  if (0 < local_20) {
    piVar6 = (int *)piVar4[2];
    iVar2 = local_20;
    do {
      if ((*(byte *)(*piVar6 + 0x10) & 1) != 0) {
        local_18[*(int *)(*piVar6 + 4)] = 1;
      }
      piVar6 = piVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar3 = 0;
  local_28 = 0;
  bVar1 = false;
  if (0 < local_20) {
    do {
      iVar2 = *(int *)(piVar4[2] + iVar9 * 4);
      if ((DAT_00648838 == 0) || (iVar7 = *(int *)(iVar2 + 4), DAT_00648838 == iVar7)) {
        iVar7 = *(int *)(iVar2 + 4);
        if (local_18[iVar7] == 0) {
          uVar5 = *(uint *)(iVar2 + 0x10) >> 1;
        }
        else {
          uVar5 = ~*(uint *)(iVar2 + 0x10);
        }
        uVar5 = uVar5 & 1;
      }
      else {
        uVar5 = 1;
      }
      if (iVar7 == 3) {
        if (uVar3 == 0) {
          uVar8 = *(uint *)(iVar2 + 0x44);
          if ((uVar8 & 0x40) != 0) {
            uVar3 = *(uint *)(iVar2 + 0x10);
            goto LAB_005babd0;
          }
        }
        else {
          uVar8 = *(uint *)(iVar2 + 0x44);
          uVar5 = *(uint *)(iVar2 + 0x10) >> 1 & 1;
          uVar3 = ~uVar8 >> 7;
LAB_005babd0:
          uVar3 = uVar3 & 1;
        }
        if (local_28 == 0) {
          if ((uVar8 & 0x40) != 0) {
            local_28 = uVar5;
          }
        }
        else {
          uVar5 = ~*(uint *)(iVar2 + 0x10) & 1;
          local_28 = ~uVar8 >> 7 & 1;
        }
        if (((uVar8 & 0x20) != 0) && (bVar1)) {
          uVar5 = ~*(uint *)(iVar2 + 0x10) & 1;
        }
        if ((uVar8 & 0x20) != 0) {
          if ((bVar1) || ((*(byte *)(iVar2 + 0x10) & 1) == 0)) {
            if ((uVar8 & 0x80) != 0) {
              bVar1 = false;
            }
          }
          else {
            iVar9 = iVar9 + -1;
            if (-1 < iVar9) {
              piVar6 = (int *)(piVar4[2] + iVar9 * 4);
              do {
                if ((*(int *)(*piVar6 + 4) == 3) && ((*(byte *)(*piVar6 + 0x44) & 0x20) == 0))
                break;
                iVar9 = iVar9 + -1;
                piVar6 = piVar6 + -1;
              } while (-1 < iVar9);
            }
            bVar1 = true;
          }
        }
      }
      if ((*(uint *)(iVar2 + 0x10) >> 0x11 & 1) != (uint)(uVar5 != 0)) {
        local_1c = 1;
        *(uint *)(iVar2 + 0x10) = uVar5 << 0x11 | *(uint *)(iVar2 + 0x10) & 0xfffdffff;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_20);
  }
  Mixer_FlushAll();
  FUN_005b84d0(param_1,1);
  return local_1c;
}


