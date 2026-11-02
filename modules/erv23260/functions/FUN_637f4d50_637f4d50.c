/* Module: erv23260.dll
   Function: FUN_637f4d50
   Address: 637f4d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637f4d50(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar6 = (int *)param_2[3];
  puVar1 = (undefined4 *)piVar6[1];
  puVar2 = (undefined4 *)piVar6[2];
  local_8 = 0;
  bVar3 = false;
  uVar4 = (uint)(piVar6[6] * piVar6[5]) >> 8;
  local_c = 0;
  local_10 = 0;
  if (*(char *)((int)this + 0x74) != '\0') {
    uVar8 = 0;
    uVar5 = 0;
    iVar9 = 0;
    if (uVar4 != 0) {
      do {
        if ((*(byte *)(uVar8 + param_2[1]) & 0x1f) != 0) {
          local_10 = local_10 + 1;
          local_c = local_c + (*(byte *)(uVar8 + param_2[1]) & 0x1f);
        }
        uVar8 = uVar8 + 1;
        uVar5 = local_10;
        iVar9 = local_c;
      } while (uVar8 < uVar4);
    }
    if (iVar9 == 0) {
      uVar5 = (uint)*(byte *)(*param_2 + 0x90);
    }
    else {
      uVar5 = ((uVar5 >> 1) + iVar9) / uVar5;
    }
    iVar9 = *(int *)(*(int *)((int)this + 0x2f0) + 0x1afc);
    uVar4 = (uint)(*(int *)(&DAT_6382f0e0 + (*(int *)((int)this + 0x78) * 0x20 + uVar5) * 4) * iVar9
                  ) >> 8;
    if (uVar4 != 0) {
      if (piVar6[0x20] == 0) {
        piVar6 = FUN_637f5040(this,*(int **)(param_1 + 0xc),piVar6,piVar6[3],piVar6[4],&local_8);
        if (local_8 != 0) {
          return local_8;
        }
      }
      else {
        bVar3 = true;
      }
      param_2[3] = (int)piVar6;
      iVar7 = FUN_637f6db0(*(void **)((int)this + 0x2f0),piVar6[5],piVar6[6],piVar6[7],
                           (uint)(2 < *(int *)((int)this + 700)));
      if ((iVar7 != 0) ||
         (local_8 = FUN_637f6c70(*(void **)((int)this + 0x2f0),piVar6[5],piVar6[6],piVar6[7],
                                 (uint)(2 < *(int *)((int)this + 700))), local_8 == 0)) {
        *(uint *)(*(int *)((int)this + 0x2f0) + 0x1afc) = uVar4;
        FUN_637f7ba0();
        *(int *)(*(int *)((int)this + 0x2f0) + 0x1afc) = iVar9;
        if (!bVar3) {
          FUN_637fde90(puVar2,piVar6[2],(uint)piVar6[6] >> 1,(uint)piVar6[5] >> 1,piVar6[7]);
          FUN_637fde90(puVar1,piVar6[1],(uint)piVar6[6] >> 1,(uint)piVar6[5] >> 1,piVar6[7]);
        }
      }
    }
  }
  return local_8;
}


