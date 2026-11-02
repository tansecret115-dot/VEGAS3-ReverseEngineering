/* Module: sfs4rw.dll
   Function: FUN_0044bdd0
   Address: 0044bdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bdd0(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint local_3c;
  uint local_38;
  ushort uStack_24;
  
  if (*(byte *)((int)param_1 + 0x11f) < 9) {
    pvVar4 = FUN_00475a00(param_1,0x100);
    iVar9 = 0;
    *(void **)((int)param_1 + 0x156) = pvVar4;
    do {
      _CIpow();
      uVar2 = ftol();
      iVar9 = iVar9 + 1;
      *(undefined1 *)(*(int *)((int)param_1 + 0x156) + -1 + iVar9) = uVar2;
    } while (iVar9 < 0x100);
    if ((*(byte *)(param_1 + 0x1a) & 0x80) != 0) {
      pvVar4 = FUN_00475a00(param_1,0x100);
      *(void **)((int)param_1 + 0x15e) = pvVar4;
      iVar9 = 0;
      do {
        _CIpow();
        uVar2 = ftol();
        iVar10 = iVar9 + 1;
        *(undefined1 *)(iVar9 + *(int *)((int)param_1 + 0x15e)) = uVar2;
        iVar9 = iVar10;
      } while (iVar10 < 0x100);
      pvVar4 = FUN_00475a00(param_1,0x100);
      *(void **)((int)param_1 + 0x15a) = pvVar4;
      iVar9 = 0;
      do {
        _CIpow();
        uVar2 = ftol();
        iVar10 = iVar9 + 1;
        *(undefined1 *)(iVar9 + *(int *)((int)param_1 + 0x15a)) = uVar2;
        iVar9 = iVar10;
      } while (iVar10 < 0x100);
      return;
    }
  }
  else {
    if ((*(byte *)((int)param_1 + 0x11e) & 2) == 0) {
      local_38 = (uint)*(byte *)((int)param_1 + 0x171);
    }
    else {
      local_38 = (uint)*(byte *)((int)param_1 + 0x16e);
      if ((uint)*(byte *)((int)param_1 + 0x16e) < (uint)*(byte *)((int)param_1 + 0x16f)) {
        local_38 = (uint)*(byte *)((int)param_1 + 0x16f);
      }
      if (local_38 < *(byte *)(param_1 + 0x5c)) {
        local_38 = (uint)*(byte *)(param_1 + 0x5c);
      }
    }
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = 0x10 - local_38;
    }
    if (((param_1[0x1a] & 0x400U) == 0) || (4 < (int)local_38)) {
      if ((int)local_38 < 9) {
        if ((int)local_38 < 0) {
          local_38 = 0;
        }
      }
      else {
        local_38 = 8;
      }
    }
    else {
      local_38 = 5;
    }
    bVar1 = (byte)local_38;
    bVar7 = 8 - bVar1;
    iVar9 = 1 << (bVar7 & 0x1f);
    *(uint *)((int)param_1 + 0x14a) = local_38 & 0xff;
    pvVar4 = FUN_00475a00(param_1,iVar9 * 4);
    *(void **)((int)param_1 + 0x162) = pvVar4;
    if (((param_1[0x1a] & 0x400U) == 0) || ((param_1[0x1a] & 0x80U) != 0)) {
      local_3c = 0;
      if (0 < iVar9) {
        do {
          pvVar4 = FUN_00475a00(param_1,0x200);
          *(void **)(*(int *)((int)param_1 + 0x162) + local_3c * 4) = pvVar4;
          iVar10 = 0;
          do {
            _CIpow();
            uVar3 = ftol();
            iVar10 = iVar10 + 2;
            *(undefined2 *)(*(int *)(*(int *)((int)param_1 + 0x162) + local_3c * 4) + -2 + iVar10) =
                 uVar3;
          } while (iVar10 < 0x200);
          local_3c = local_3c + 1;
        } while ((int)local_3c < iVar9);
      }
    }
    else {
      iVar10 = 0;
      if (0 < iVar9) {
        do {
          pvVar4 = FUN_00475a00(param_1,0x200);
          iVar10 = iVar10 + 1;
          *(void **)(*(int *)((int)param_1 + 0x162) + -4 + iVar10 * 4) = pvVar4;
        } while (iVar10 < iVar9);
      }
      uVar11 = 0;
      local_3c = 0;
      do {
        _CIpow();
        uVar5 = ftol();
        if (uVar11 <= uVar5) {
          uStack_24 = (ushort)((local_3c & 0xff) << 8) | (ushort)local_3c;
          do {
            uVar6 = 0xff >> (bVar1 & 0x1f) & uVar11;
            uVar8 = uVar11 >> (bVar7 & 0x1f);
            uVar11 = uVar11 + 1;
            *(ushort *)(*(int *)(*(int *)((int)param_1 + 0x162) + uVar6 * 4) + uVar8 * 2) =
                 uStack_24;
          } while (uVar11 <= uVar5);
        }
        local_3c = local_3c + 1;
      } while ((int)local_3c < 0x100);
      if (uVar11 < (uint)(iVar9 << 8)) {
        do {
          uVar5 = 0xff >> (bVar1 & 0x1f) & uVar11;
          uVar6 = uVar11 >> (bVar7 & 0x1f);
          uVar11 = uVar11 + 1;
          *(undefined2 *)(*(int *)(*(int *)((int)param_1 + 0x162) + uVar5 * 4) + uVar6 * 2) = 0xffff
          ;
        } while (uVar11 < (uint)(iVar9 << 8));
      }
    }
    if ((*(byte *)(param_1 + 0x1a) & 0x80) != 0) {
      pvVar4 = FUN_00475a00(param_1,iVar9 * 4);
      *(void **)((int)param_1 + 0x16a) = pvVar4;
      local_3c = 0;
      if (0 < iVar9) {
        do {
          pvVar4 = FUN_00475a00(param_1,0x200);
          *(void **)(*(int *)((int)param_1 + 0x16a) + local_3c * 4) = pvVar4;
          iVar10 = 0;
          do {
            _CIpow();
            uVar3 = ftol();
            iVar10 = iVar10 + 2;
            *(undefined2 *)(*(int *)(*(int *)((int)param_1 + 0x16a) + local_3c * 4) + -2 + iVar10) =
                 uVar3;
          } while (iVar10 < 0x200);
          local_3c = local_3c + 1;
        } while ((int)local_3c < iVar9);
      }
      pvVar4 = FUN_00475a00(param_1,iVar9 * 4);
      *(void **)((int)param_1 + 0x166) = pvVar4;
      local_3c = 0;
      if (0 < iVar9) {
        do {
          pvVar4 = FUN_00475a00(param_1,0x200);
          *(void **)(*(int *)((int)param_1 + 0x166) + local_3c * 4) = pvVar4;
          iVar10 = 0;
          do {
            _CIpow();
            uVar3 = ftol();
            iVar10 = iVar10 + 2;
            *(undefined2 *)(*(int *)(*(int *)((int)param_1 + 0x166) + local_3c * 4) + -2 + iVar10) =
                 uVar3;
          } while (iVar10 < 0x200);
          local_3c = local_3c + 1;
        } while ((int)local_3c < iVar9);
      }
    }
  }
  return;
}


