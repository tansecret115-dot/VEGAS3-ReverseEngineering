/* Module: vidcap30.exe
   Function: FUN_0052a450
   Address: 0052a450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052a450(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
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
  
  if (*(byte *)(param_1 + 0x11f) < 9) {
    uVar4 = FUN_00549470(param_1,0x100);
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0x156) = uVar4;
    do {
      _CIpow();
      uVar2 = ftol();
      iVar9 = iVar9 + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x156) + -1 + iVar9) = uVar2;
    } while (iVar9 < 0x100);
    if ((*(byte *)(param_1 + 0x68) & 0x80) != 0) {
      uVar4 = FUN_00549470(param_1,0x100);
      *(undefined4 *)(param_1 + 0x15e) = uVar4;
      iVar9 = 0;
      do {
        _CIpow();
        uVar2 = ftol();
        iVar10 = iVar9 + 1;
        *(undefined1 *)(iVar9 + *(int *)(param_1 + 0x15e)) = uVar2;
        iVar9 = iVar10;
      } while (iVar10 < 0x100);
      uVar4 = FUN_00549470(param_1,0x100);
      *(undefined4 *)(param_1 + 0x15a) = uVar4;
      iVar9 = 0;
      do {
        _CIpow();
        uVar2 = ftol();
        iVar10 = iVar9 + 1;
        *(undefined1 *)(iVar9 + *(int *)(param_1 + 0x15a)) = uVar2;
        iVar9 = iVar10;
      } while (iVar10 < 0x100);
      return;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x11e) & 2) == 0) {
      local_38 = (uint)*(byte *)(param_1 + 0x171);
    }
    else {
      local_38 = (uint)*(byte *)(param_1 + 0x16e);
      if ((uint)*(byte *)(param_1 + 0x16e) < (uint)*(byte *)(param_1 + 0x16f)) {
        local_38 = (uint)*(byte *)(param_1 + 0x16f);
      }
      if (local_38 < *(byte *)(param_1 + 0x170)) {
        local_38 = (uint)*(byte *)(param_1 + 0x170);
      }
    }
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = 0x10 - local_38;
    }
    if (((*(uint *)(param_1 + 0x68) & 0x400) == 0) || (4 < (int)local_38)) {
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
    *(uint *)(param_1 + 0x14a) = local_38 & 0xff;
    uVar4 = FUN_00549470(param_1,iVar9 * 4);
    *(undefined4 *)(param_1 + 0x162) = uVar4;
    if (((*(uint *)(param_1 + 0x68) & 0x400) == 0) || ((*(uint *)(param_1 + 0x68) & 0x80) != 0)) {
      local_3c = 0;
      if (0 < iVar9) {
        do {
          uVar4 = FUN_00549470(param_1,0x200);
          *(undefined4 *)(*(int *)(param_1 + 0x162) + local_3c * 4) = uVar4;
          iVar10 = 0;
          do {
            _CIpow();
            uVar3 = ftol();
            iVar10 = iVar10 + 2;
            *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x162) + local_3c * 4) + -2 + iVar10) =
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
          uVar4 = FUN_00549470(param_1,0x200);
          iVar10 = iVar10 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x162) + -4 + iVar10 * 4) = uVar4;
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
            *(ushort *)(*(int *)(*(int *)(param_1 + 0x162) + uVar6 * 4) + uVar8 * 2) = uStack_24;
          } while (uVar11 <= uVar5);
        }
        local_3c = local_3c + 1;
      } while ((int)local_3c < 0x100);
      if (uVar11 < (uint)(iVar9 << 8)) {
        do {
          uVar5 = 0xff >> (bVar1 & 0x1f) & uVar11;
          uVar6 = uVar11 >> (bVar7 & 0x1f);
          uVar11 = uVar11 + 1;
          *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x162) + uVar5 * 4) + uVar6 * 2) = 0xffff;
        } while (uVar11 < (uint)(iVar9 << 8));
      }
    }
    if ((*(byte *)(param_1 + 0x68) & 0x80) != 0) {
      uVar4 = FUN_00549470(param_1,iVar9 * 4);
      *(undefined4 *)(param_1 + 0x16a) = uVar4;
      local_3c = 0;
      if (0 < iVar9) {
        do {
          uVar4 = FUN_00549470(param_1,0x200);
          *(undefined4 *)(*(int *)(param_1 + 0x16a) + local_3c * 4) = uVar4;
          iVar10 = 0;
          do {
            _CIpow();
            uVar3 = ftol();
            iVar10 = iVar10 + 2;
            *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x16a) + local_3c * 4) + -2 + iVar10) =
                 uVar3;
          } while (iVar10 < 0x200);
          local_3c = local_3c + 1;
        } while ((int)local_3c < iVar9);
      }
      uVar4 = FUN_00549470(param_1,iVar9 * 4);
      *(undefined4 *)(param_1 + 0x166) = uVar4;
      local_3c = 0;
      if (0 < iVar9) {
        do {
          uVar4 = FUN_00549470(param_1,0x200);
          *(undefined4 *)(*(int *)(param_1 + 0x166) + local_3c * 4) = uVar4;
          iVar10 = 0;
          do {
            _CIpow();
            uVar3 = ftol();
            iVar10 = iVar10 + 2;
            *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x166) + local_3c * 4) + -2 + iVar10) =
                 uVar3;
          } while (iVar10 < 0x200);
          local_3c = local_3c + 1;
        } while ((int)local_3c < iVar9);
      }
    }
  }
  return;
}


