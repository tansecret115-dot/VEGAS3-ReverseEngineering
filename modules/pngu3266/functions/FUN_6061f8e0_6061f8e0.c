/* Module: pngu3266.dll
   Function: FUN_6061f8e0
   Address: 6061f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6061f8e0(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint local_10;
  byte *local_c;
  byte *local_8;
  
  if (*(int *)((int)this + 0x10048) == 1) {
    *param_1 = 0xffffffff;
    return 0;
  }
  if (*(int *)this == 1) {
    do {
      iVar10 = *(int *)((int)this + 0x10040);
      local_8 = *(byte **)((int)this + 0x10038);
      iVar9 = *(int *)((int)this + 0x1003c);
      if (iVar10 < 0) {
        local_c = (byte *)0xffffffff;
      }
      else {
        iVar6 = 0;
        local_c = (byte *)0x0;
        if (0 < *(int *)((int)this + 8)) {
          do {
            if ((*local_8 & (byte)(1 << ((byte)iVar9 & 0x1f))) != 0) {
              local_c = (byte *)((uint)local_c | 1 << ((byte)iVar6 & 0x1f));
            }
            iVar9 = iVar9 + 1;
            if (iVar9 == 8) {
              if ((iVar10 == 0) && (iVar6 < *(int *)((int)this + 8) + -1)) {
                local_c = (byte *)0xffffffff;
                goto LAB_6061f99d;
              }
              local_8 = local_8 + 1;
              iVar9 = 0;
              iVar10 = iVar10 + -1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)((int)this + 8));
        }
        *(byte **)((int)this + 0x10038) = local_8;
        *(int *)((int)this + 0x1003c) = iVar9;
        *(int *)((int)this + 0x10040) = iVar10;
      }
LAB_6061f99d:
      if ((int)local_c < 0) {
        *param_1 = 0xffffffff;
        *(undefined4 *)((int)this + 0x10048) = 1;
        return 0;
      }
      *(byte **)((int)this + 0x1c) = local_c;
      *(byte **)((int)this + 0x18) = local_c;
      if (local_c != (byte *)*(uint *)((int)this + 0x20)) {
        *(undefined4 *)this = 0;
        *param_1 = (uint)local_c;
        return 0;
      }
    } while( true );
  }
  puVar2 = (uint *)((int)this + 0x10028);
  if ((int)this + 0x8028U < *(uint *)((int)this + 0x10028)) {
    puVar1 = (uint *)(*(uint *)((int)this + 0x10028) - 4);
    *puVar2 = (uint)puVar1;
    *param_1 = *puVar1;
    return 0;
  }
  do {
    local_c = *(byte **)((int)this + 0x10038);
    iVar10 = *(int *)((int)this + 0x1003c);
    iVar9 = *(int *)((int)this + 0x10040);
    if (iVar9 < 0) {
      local_10 = 0xffffffff;
    }
    else {
      local_10 = 0;
      local_8 = (byte *)0x0;
      if (0 < *(int *)((int)this + 8)) {
        do {
          if ((*local_c & (byte)(1 << ((byte)iVar10 & 0x1f))) != 0) {
            local_10 = local_10 | 1 << ((byte)local_8 & 0x1f);
          }
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            if ((iVar9 == 0) && ((int)local_8 < *(int *)((int)this + 8) + -1)) {
              local_10 = 0xffffffff;
              goto LAB_6061fab0;
            }
            local_c = local_c + 1;
            iVar10 = 0;
            iVar9 = iVar9 + -1;
          }
          local_8 = (byte *)((int)local_8 + 1);
        } while ((int)local_8 < *(int *)((int)this + 8));
      }
      *(int *)((int)this + 0x1003c) = iVar10;
      *(byte **)((int)this + 0x10038) = local_c;
      *(int *)((int)this + 0x10040) = iVar9;
    }
LAB_6061fab0:
    if ((int)local_10 < 0) {
      *param_1 = 0xffffffff;
      *(undefined4 *)((int)this + 0x10048) = 1;
      return 0;
    }
    if (*(int *)((int)this + 4) == 1) {
      *(undefined4 *)((int)this + 4) = 0;
      *param_1 = local_10;
      *(uint *)((int)this + 0x1c) = local_10;
      *(uint *)((int)this + 0x18) = local_10;
      return 0;
    }
    if (local_10 == *(uint *)((int)this + 0x20)) {
      iVar10 = 0;
      if (0 < (int)*(uint *)((int)this + 0x20)) {
        piVar7 = (int *)((int)this + 0x4028);
        do {
          piVar7[-0x1000] = 0;
          *piVar7 = iVar10;
          iVar10 = iVar10 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar10 < *(int *)((int)this + 0x20));
      }
      if (iVar10 < 0x1000) {
        puVar8 = (undefined4 *)((int)this + iVar10 * 4 + 0x28);
        iVar10 = 0x1000 - iVar10;
        do {
          puVar8[0x1000] = 0;
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      *(undefined4 *)((int)this + 4) = 1;
      *(int *)((int)this + 8) = *(int *)((int)this + 0xc) + 1;
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x20) * 2;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x20) + 2;
      *puVar2 = (int)this + 0x8028;
    }
    else {
      if (local_10 == *(uint *)((int)this + 0x24)) {
        *param_1 = local_10;
        *(undefined4 *)((int)this + 0x10044) = 1;
        *(undefined4 *)((int)this + 0x10048) = 0;
        return 0;
      }
      uVar5 = local_10;
      if (*(int *)((int)this + 0x10) <= (int)local_10) {
        *(undefined4 *)*puVar2 = *(undefined4 *)((int)this + 0x18);
        *puVar2 = *puVar2 + 4;
        uVar5 = *(uint *)((int)this + 0x1c);
      }
      uVar4 = uVar5;
      if (*(int *)((int)this + 0x20) <= (int)uVar5) {
        do {
          if (puVar2 <= (uint *)*puVar2) {
            return 0x80004005;
          }
          *(uint *)*puVar2 = *(uint *)((int)this + uVar4 * 4 + 0x4028);
          *puVar2 = *puVar2 + 4;
          uVar5 = *(uint *)((int)this + uVar4 * 4 + 0x28);
          if (uVar4 == uVar5) {
            return 0x80004005;
          }
          uVar4 = uVar5;
        } while (*(int *)((int)this + 0x20) <= (int)uVar5);
      }
      uVar3 = *(undefined4 *)((int)this + uVar5 * 4 + 0x4028);
      *(undefined4 *)((int)this + 0x18) = uVar3;
      *(undefined4 *)*puVar2 = uVar3;
      *puVar2 = *puVar2 + 4;
      iVar10 = *(int *)((int)this + 0x10);
      if (iVar10 < 0x1000) {
        *(undefined4 *)((int)this + iVar10 * 4 + 0x28) = *(undefined4 *)((int)this + 0x1c);
        *(undefined4 *)((int)this + iVar10 * 4 + 0x4028) = *(undefined4 *)((int)this + 0x18);
        iVar9 = *(int *)((int)this + 0x10) + 1;
        *(int *)((int)this + 0x10) = iVar9;
        iVar10 = *(int *)((int)this + 0x14);
        if ((iVar10 <= iVar9) && (iVar10 < 0x1000)) {
          *(int *)((int)this + 0x14) = iVar10 * 2;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
      }
      *(uint *)((int)this + 0x1c) = local_10;
      if ((int)this + 0x8028U < *puVar2) {
        uVar5 = *puVar2;
        *puVar2 = uVar5 - 4;
        *param_1 = *(uint *)(uVar5 - 4);
        return 0;
      }
    }
  } while( true );
}


