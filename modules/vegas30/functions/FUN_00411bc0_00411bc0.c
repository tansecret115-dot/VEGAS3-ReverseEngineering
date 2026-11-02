/* Module: vegas30.exe
   Function: FUN_00411bc0
   Address: 00411bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411bc0(undefined4 *param_1)

{
  WPARAM WVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  WPARAM WVar6;
  WPARAM *pWVar7;
  WPARAM *pWVar8;
  uint *puVar9;
  int local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  WPARAM local_98 [38];
  
  SendMessageA((HWND)*param_1,0x111,0x9dee,0);
  iVar5 = 0;
  puVar9 = &local_9c;
  for (iVar4 = 0x27; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  WVar6 = 0;
  pWVar7 = &DAT_0064b5b0;
  pWVar8 = local_98 + 1;
  do {
    if (DAT_0064b4e4 == 0) {
      iVar4 = FUN_00601ab0(&local_a8,&local_ac,1);
      if (iVar4 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar3 = (local_ac & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar3) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_a8;
          DAT_0064b4e4 = uVar3;
        }
      }
    }
    if (((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) ||
       ((WVar1 = *pWVar7, WVar1 != 0x9de1 && ((WVar1 != 0x9de2 && (WVar1 != 0x9de3)))))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    WVar1 = *pWVar7;
    if (((WVar1 != 0) && (!bVar2)) && (((byte)pWVar7[1] & 3) != 3)) {
      iVar5 = iVar5 + 1;
      pWVar8[-2] = pWVar7[2] & 0xffffffdf;
      *pWVar8 = WVar6;
      pWVar8[-1] = WVar1;
      pWVar8 = pWVar8 + 3;
    }
    pWVar7 = pWVar7 + 0x10;
    WVar6 = WVar6 + 1;
  } while (pWVar7 < &DAT_0064b8b0);
  local_b0 = iVar5;
  if ((DAT_00649424 != 0) && (((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0xac) + 0xc) & 3) != 3)
     ) {
    local_b0 = iVar5 + 1;
    local_98[iVar5 * 3 + -1] = *(uint *)(*(int *)(DAT_0064762c + 0xac) + 0x10) & 0xffffffdf;
    local_98[iVar5 * 3 + 1] = 0x5f;
    local_98[iVar5 * 3] = 0xffffffff;
  }
  local_ac = 0;
  local_a8 = 0x10;
  WVar6 = 0;
  pWVar7 = &DAT_0064b5b0;
  pWVar8 = local_98 + local_b0 * 3 + 1;
  while( true ) {
    while( true ) {
      do {
        if (DAT_0064b4e4 == 0) {
          iVar4 = FUN_00601ab0(&local_a0,&local_a4,1);
          if (iVar4 < 0) {
            DAT_0064b4f0 = 1;
          }
          else {
            uVar3 = (local_a4 & 0xffff) >> 8;
            if ((int)DAT_0064b4e4 <= (int)uVar3) {
              DAT_0064b4f0 = 0;
              _DAT_0064b4f4 = local_a0;
              DAT_0064b4e4 = uVar3;
            }
          }
        }
        if (((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) ||
           ((WVar1 = *pWVar7, WVar1 != 0x9de1 && ((WVar1 != 0x9de2 && (WVar1 != 0x9de3)))))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        WVar1 = *pWVar7;
        if ((((WVar1 != 0) && (!bVar2)) && (((byte)pWVar7[1] & 3) == 3)) &&
           ((uVar3 = pWVar7[2], (uVar3 >> 8 & 0xf) == local_ac &&
            ((uVar3 >> 0xc & 0xf) == local_a8 - 1U)))) {
          pWVar8[-2] = uVar3;
          *pWVar8 = WVar6;
          pWVar8[-1] = WVar1;
          local_b0 = local_b0 + 1;
          pWVar8 = pWVar8 + 3;
        }
        pWVar7 = pWVar7 + 0x10;
        WVar6 = WVar6 + 1;
      } while (pWVar7 < &DAT_0064b8b0);
      if (((DAT_00649424 != 0) &&
          (((byte)*(undefined4 *)(*(int *)(DAT_0064762c + 0xac) + 0xc) & 3) == 3)) &&
         ((uVar3 = *(uint *)(*(int *)(DAT_0064762c + 0xac) + 0x10), (uVar3 >> 8 & 0xf) == local_ac
          && ((uVar3 >> 0xc & 0xf) == local_a8 - 1U)))) {
        local_98[local_b0 * 3 + -1] = uVar3;
        local_98[local_b0 * 3 + 1] = 0x5f;
        local_98[local_b0 * 3] = 0xffffffff;
        local_b0 = local_b0 + 1;
      }
      local_a8 = local_a8 + -1;
      if (local_a8 == 0) break;
      WVar6 = 0;
      pWVar7 = &DAT_0064b5b0;
      pWVar8 = local_98 + local_b0 * 3 + 1;
    }
    local_ac = local_ac + 1;
    if (0xf < local_ac) break;
    local_a8 = 0x10;
    WVar6 = 0;
    pWVar7 = &DAT_0064b5b0;
    pWVar8 = local_98 + local_b0 * 3 + 1;
  }
  local_a8 = 0;
  if (local_b0 != 0) {
    pWVar8 = local_98;
    iVar4 = local_b0;
    do {
      if (pWVar8[1] == 0x5f) {
        FUN_00439fe0(*param_1,0,0);
      }
      else {
        SendMessageA((HWND)*param_1,0x111,*pWVar8,(LPARAM)*param_1);
      }
      pWVar8 = pWVar8 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_b0 != 0) {
    pWVar8 = local_98 + 1;
    do {
      if ((pWVar8[-2] & 0x20) != 0) {
        FUN_00416020(param_1[0xd],*pWVar8);
      }
      pWVar8 = pWVar8 + 3;
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  return;
}


