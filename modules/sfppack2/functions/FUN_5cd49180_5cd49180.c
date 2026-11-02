/* Module: sfppack2.dll
   Function: FUN_5cd49180
   Address: 5cd49180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd49180(int param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_7c;
  int local_74;
  uint local_70;
  uint *local_6c;
  uint *local_68;
  int local_64;
  uint local_60 [5];
  uint local_4c;
  uint local_48 [18];
  
  local_48[5] = 0xffffffff;
  local_48[1] = 0xffffffff;
  local_48[2] = 0xffffffff;
  local_48[3] = 0xffffffff;
  local_48[4] = 0xffffffff;
  local_48[0] = 0x7ffff;
  FUN_5cd48d00(local_60);
  iVar2 = 0;
  iVar9 = 2;
  puVar5 = (uint *)(param_1 + 8);
  do {
    uVar7 = *puVar5;
    for (iVar6 = ((iVar9 < 1) - 1 & 7) + 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
      if ((uVar7 & 1) != 0) {
        local_60[(&DAT_5cd75774)[iVar2]] = local_60[(&DAT_5cd75774)[iVar2]] | (&DAT_5cd754a8)[iVar2]
        ;
        local_60[(&DAT_5cd758d8)[iVar2]] = local_60[(&DAT_5cd758d8)[iVar2]] | (&DAT_5cd7560c)[iVar2]
        ;
      }
      iVar2 = iVar2 + 1;
      uVar7 = uVar7 >> 1;
    }
    iVar9 = iVar9 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar9);
  FUN_5cd48d00(local_48 + 0xc);
  FUN_5cd48d00(local_48 + 6);
  uVar8 = 5;
  uVar7 = 0;
  local_48[0xb] = 1;
  local_74 = 0;
  local_70 = 5;
  local_7c = 0;
  do {
    local_64 = 6;
    bVar1 = (&DAT_5cd763ac)[local_4c & 0xff];
    local_74 = local_74 + (uint)bVar1;
    puVar5 = local_60;
    uVar3 = 0;
    do {
      uVar4 = *puVar5;
      local_64 = local_64 + -1;
      *puVar5 = uVar3 << (0x20 - bVar1 & 0x1f) | uVar4 >> (bVar1 & 0x1f);
      puVar5 = puVar5 + 1;
      uVar3 = uVar4;
    } while (local_64 != 0);
  } while ((bVar1 == 8) && ((local_4c & 1) == 0));
  uVar3 = 0;
  puVar5 = local_60;
  do {
    if (*puVar5 != 0) {
      if (uVar3 < 5) goto LAB_5cd492d8;
      break;
    }
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar3 < 5);
  if (local_4c == 1) {
LAB_5cd495ee:
    FUN_5cd49040((int)(local_48 + 6),0xb3 - local_74 % 0xb3,local_48 + 6);
    if ((local_48[0xb] & 1) == 0) {
      FUN_5cd48cc0(param_2);
    }
    else {
      FUN_5cd4d910(param_2);
    }
    iVar9 = 0;
    iVar2 = 2;
    puVar5 = param_2 + 2;
    do {
      uVar8 = 0;
      uVar7 = 1;
      do {
        if (((&DAT_5cd754a8)[iVar9] & local_48[(&DAT_5cd75774)[iVar9] + 6]) != 0) {
          uVar8 = uVar8 ^ uVar7;
        }
        uVar7 = uVar7 << 1;
        iVar9 = iVar9 + 1;
      } while ((uVar7 & ((iVar2 < 1) - 1 & 0xfe000000) + 0x1ffffff) != 0);
      iVar2 = iVar2 + -1;
      *puVar5 = *puVar5 ^ uVar8;
      puVar5 = puVar5 + -1;
    } while (-1 < iVar2);
    return;
  }
LAB_5cd492d8:
  uVar3 = local_60[uVar7];
  while ((uVar3 == 0 && (local_7c = uVar7, local_48[uVar7] == 0))) {
    uVar3 = local_60[uVar7 + 1];
    uVar7 = uVar7 + 1;
    local_7c = uVar7;
  }
  iVar2 = uVar7 * 4;
  local_68 = local_60 + uVar7;
  local_6c = local_48 + uVar7;
  if (*local_68 < local_48[uVar7]) goto LAB_5cd494a3;
  do {
    if (uVar7 < 6) {
      do {
        *(uint *)((int)local_60 + iVar2) =
             *(uint *)((int)local_60 + iVar2) ^ *(uint *)((int)local_48 + iVar2);
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0x15);
    }
    if (uVar8 < 6) {
      iVar2 = uVar8 * 4;
      do {
        *(uint *)((int)local_48 + iVar2 + 0x18) =
             *(uint *)((int)local_48 + iVar2 + 0x18) ^ *(uint *)((int)local_48 + iVar2 + 0x30);
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0x15);
    }
    do {
      bVar1 = (&DAT_5cd763ac)[local_4c & 0xff];
      local_74 = local_74 + (uint)bVar1;
      if ((int)uVar8 < 6) {
        iVar9 = 6 - uVar8;
        iVar2 = -iVar9;
        uVar3 = iVar2 + 5;
        uVar7 = 0;
        puVar5 = (uint *)register0x00000010;
        do {
          puVar5 = puVar5 + -1;
          uVar4 = *puVar5 >> (0x20 - bVar1 & 0x1f);
          iVar9 = iVar9 + -1;
          *puVar5 = *puVar5 << (bVar1 & 0x1f) | uVar7;
          uVar7 = uVar4;
        } while (iVar9 != 0);
        uVar8 = local_70;
        uVar7 = local_7c;
        if (uVar4 != 0) {
          local_48[iVar2 + 0x11] = uVar4;
          uVar8 = uVar3;
          local_70 = uVar3;
        }
      }
      if (uVar7 < 6) {
        iVar2 = 6 - uVar7;
        puVar5 = local_68;
        uVar3 = 0;
        do {
          uVar7 = *puVar5;
          iVar2 = iVar2 + -1;
          *puVar5 = uVar3 << (0x20 - bVar1 & 0x1f) | uVar7 >> (bVar1 & 0x1f);
          puVar5 = puVar5 + 1;
          uVar8 = local_70;
          uVar3 = uVar7;
          uVar7 = local_7c;
        } while (iVar2 != 0);
      }
      uVar3 = uVar7;
    } while ((bVar1 == 8) && ((local_4c & 1) == 0));
    for (; uVar3 < 5; uVar3 = uVar3 + 1) {
      if (*local_68 != 0) {
        if (uVar3 < 5) goto LAB_5cd492d8;
        break;
      }
      local_68 = local_68 + 1;
    }
    if (local_4c != 1) goto LAB_5cd492d8;
    if (0 < (int)uVar3) goto LAB_5cd495ee;
LAB_5cd49460:
    uVar3 = *local_6c;
    while ((uVar3 == 0 && (local_7c = uVar7, local_60[uVar7] == 0))) {
      uVar3 = local_48[uVar7 + 1];
      uVar7 = uVar7 + 1;
      local_7c = uVar7;
    }
    iVar2 = uVar7 * 4;
    local_68 = local_60 + uVar7;
    local_6c = local_48 + uVar7;
    if (local_60[uVar7] <= *local_6c) {
LAB_5cd494a3:
      if (uVar7 < 6) {
        do {
          *(uint *)((int)local_48 + iVar2) =
               *(uint *)((int)local_48 + iVar2) ^ *(uint *)((int)local_60 + iVar2);
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x15);
      }
      if (uVar8 < 6) {
        iVar2 = uVar8 * 4;
        do {
          *(uint *)((int)local_48 + iVar2 + 0x30) =
               *(uint *)((int)local_48 + iVar2 + 0x30) ^ *(uint *)((int)local_48 + iVar2 + 0x18);
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x15);
      }
      do {
        bVar1 = (&DAT_5cd763ac)[local_48[5] & 0xff];
        local_74 = local_74 + (uint)bVar1;
        if ((int)uVar8 < 6) {
          iVar9 = 6 - uVar8;
          iVar2 = -iVar9;
          uVar3 = iVar2 + 5;
          uVar7 = 0;
          puVar5 = local_48 + 0xb;
          do {
            uVar4 = *puVar5 >> (0x20 - bVar1 & 0x1f);
            iVar9 = iVar9 + -1;
            *puVar5 = *puVar5 << (bVar1 & 0x1f) | uVar7;
            uVar7 = uVar4;
            puVar5 = puVar5 + -1;
          } while (iVar9 != 0);
          uVar8 = local_70;
          uVar7 = local_7c;
          if (uVar4 != 0) {
            local_48[iVar2 + 0xb] = uVar4;
            uVar8 = uVar3;
            local_70 = uVar3;
          }
        }
        if (uVar7 < 6) {
          iVar2 = 6 - uVar7;
          puVar5 = local_6c;
          uVar3 = 0;
          do {
            uVar7 = *puVar5;
            iVar2 = iVar2 + -1;
            *puVar5 = uVar3 << (0x20 - bVar1 & 0x1f) | uVar7 >> (bVar1 & 0x1f);
            puVar5 = puVar5 + 1;
            uVar8 = local_70;
            uVar3 = uVar7;
            uVar7 = local_7c;
          } while (iVar2 != 0);
        }
        uVar3 = uVar7;
        puVar5 = local_6c;
      } while ((bVar1 == 8) && ((local_48[5] & 1) == 0));
      for (; uVar3 < 5; uVar3 = uVar3 + 1) {
        if (*puVar5 != 0) {
          if (uVar3 < 5) goto LAB_5cd49460;
          break;
        }
        puVar5 = puVar5 + 1;
      }
      if (local_48[5] == 1) {
        FUN_5cd48d20((int)(local_48 + 0xc),local_48 + 6);
        goto LAB_5cd495ee;
      }
      goto LAB_5cd49460;
    }
  } while( true );
}


