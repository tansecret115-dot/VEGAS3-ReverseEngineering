/* Module: sfpaplug.dll
   Function: FUN_0040e5f0
   Address: 0040e5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0040e5f0(void *this,undefined4 *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  uint local_4;
  
  local_c = param_1;
  uVar3 = (uint)*(ushort *)(*(int *)((int)this + 0x58) + 0xc);
  local_10 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0xdc) != 0) {
    uVar4 = *(uint *)((int)this + 0xe8);
    iVar7 = *(int *)((int)this + 0xec);
    iVar1 = *(int *)((int)this + 0x2c);
    iVar2 = iVar7 + (uint)CARRY4(*(uint *)((int)this + 0xe0),uVar4);
    if ((iVar1 <= iVar2) &&
       ((((iVar1 < iVar2 || (*(uint *)((int)this + 0x28) < *(uint *)((int)this + 0xe0) + uVar4)) &&
         (iVar7 <= iVar1)) && ((iVar7 < iVar1 || (uVar4 <= *(uint *)((int)this + 0x28))))))) {
      iVar7 = (*(int *)((int)this + 0x28) - *(int *)((int)this + 0xe8)) * uVar3;
      local_10 = *(int *)((int)this + 0xa0) - iVar7;
      if (uVar3 * param_2 <= local_10) {
        local_10 = uVar3 * param_2;
      }
      if (local_10 != 0) {
        puVar8 = (undefined4 *)(*(int *)((int)this + 0x9c) + iVar7);
        puVar9 = param_1;
        for (uVar4 = local_10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = local_10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        local_c = (undefined4 *)(local_10 + (int)param_1);
      }
      uVar4 = *(uint *)((int)this + 0x28);
      local_10 = local_10 / uVar3;
      *(uint *)((int)this + 0x28) = uVar4 + local_10;
      *(uint *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + (uint)CARRY4(uVar4,local_10);
    }
  }
  if (local_10 < param_2) {
    do {
      uVar6 = param_2;
      uVar4 = *(uint *)((int)this + 0xf0);
      uVar5 = *(int *)((int)this + 0x38) - *(ushort *)(*(int *)((int)this + 0x50) + 0xc) * uVar4;
      if (*(uint *)((int)this + 0x90) <= uVar5) {
        uVar5 = *(uint *)((int)this + 0x90);
      }
      if (uVar5 == 0) {
        return 1;
      }
      local_8 = FUN_0040e1d0(this,uVar4,(int)uVar4 >> 0x1f,uVar5,*(LPVOID *)((int)this + 0x8c),uVar5
                             ,&local_4,(int *)&param_1);
      if (((int)local_8 < 0) || ((int)local_4 < 1)) {
        *(undefined4 *)((int)this + 0x94) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        iVar7 = acmStreamConvert(*(undefined4 *)((int)this + 0x7c),(int)this + 0x80,0x20);
        if (iVar7 == 0) {
          if ((*(uint *)((int)this + 0x84) & 0x10000) == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar4 = *(uint *)((int)this + 0xe8);
          uVar5 = *(uint *)((int)this + 0x48);
          *(uint *)((int)this + 0xe8) = uVar4 + *(uint *)((int)this + 0xe0);
          *(undefined4 *)((int)this + 0xdc) = 1;
          *(uint *)((int)this + 0xec) =
               *(int *)((int)this + 0xec) + (uint)CARRY4(uVar4,*(uint *)((int)this + 0xe0));
          *(uint *)((int)this + 0x48) = uVar5 + *(uint *)((int)this + 0x94);
          *(uint *)((int)this + 0x4c) =
               *(int *)((int)this + 0x4c) + (uint)CARRY4(uVar5,*(uint *)((int)this + 0x94));
          uVar4 = *(uint *)((int)this + 0xa4) / uVar3;
          uVar6 = uVar6 - local_10;
          *(uint *)((int)this + 0xe0) = uVar4;
          if (uVar6 < uVar4) {
            uVar4 = uVar6;
          }
          uVar4 = uVar4 * uVar3;
          puVar8 = *(undefined4 **)((int)this + 0x9c);
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *local_c = *puVar8;
            puVar8 = puVar8 + 1;
            local_c = local_c + 1;
          }
          uVar3 = uVar4 / uVar3;
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)local_c = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            local_c = (undefined4 *)((int)local_c + 1);
          }
          uVar4 = *(uint *)((int)this + 0x28);
          local_10 = local_10 + uVar3;
          *(uint *)((int)this + 0x28) = uVar4 + uVar3;
          *(uint *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + (uint)CARRY4(uVar4,uVar3);
          *(int *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + (int)param_1;
        }
        if (local_10 == 0) {
          local_8 = 1;
        }
        break;
      }
      *(uint *)((int)this + 0x94) = local_4;
      *(uint *)((int)this + 0x90) = local_4;
      *(undefined4 *)((int)this + 0xa4) = 0;
      if (local_4 < *(ushort *)(*(int *)((int)this + 0x50) + 0xc)) {
        uVar10 = *(undefined4 *)((int)this + 0x7c);
        uVar11 = 0;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0x7c);
        uVar11 = 4;
      }
      iVar7 = acmStreamConvert(uVar10,(int)this + 0x80,uVar11);
      if (iVar7 != 0) {
        return 0x8004e01e;
      }
      if ((*(uint *)((int)this + 0x84) & 0x10000) == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_0040dfb0(this,*(int **)((int)this + 0x28),*(int *)((int)this + 0x2c),
                   *(int *)((int)this + 0x48),*(int *)((int)this + 0x4c));
      uVar4 = *(uint *)((int)this + 0xe8);
      uVar5 = *(uint *)((int)this + 0x48);
      *(uint *)((int)this + 0xe8) = uVar4 + *(uint *)((int)this + 0xe0);
      *(undefined4 *)((int)this + 0xdc) = 1;
      *(uint *)((int)this + 0x48) = uVar5 + *(uint *)((int)this + 0x94);
      *(uint *)((int)this + 0xec) =
           *(int *)((int)this + 0xec) + (uint)CARRY4(uVar4,*(uint *)((int)this + 0xe0));
      *(uint *)((int)this + 0x4c) =
           *(int *)((int)this + 0x4c) + (uint)CARRY4(uVar5,*(uint *)((int)this + 0x94));
      uVar4 = *(uint *)((int)this + 0xa4) / uVar3;
      uVar6 = uVar6 - local_10;
      *(uint *)((int)this + 0xe0) = uVar4;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      uVar4 = uVar4 * uVar3;
      puVar8 = *(undefined4 **)((int)this + 0x9c);
      puVar9 = local_c;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      local_c = (undefined4 *)((int)local_c + uVar4);
      uVar6 = *(uint *)((int)this + 0x28);
      uVar4 = uVar4 / uVar3;
      local_10 = local_10 + uVar4;
      *(uint *)((int)this + 0x28) = uVar6 + uVar4;
      *(uint *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + (uint)CARRY4(uVar6,uVar4);
      *(int *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + (int)param_1;
    } while (local_10 < param_2);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_10;
  }
  return local_8;
}


