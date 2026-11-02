/* Module: mpgvout.004
   Function: FUN_10016af8
   Address: 10016af8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10016af8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(longlong *)(param_1 + 0x5f0) = (longlong)(int)uVar2 * (longlong)*(int *)(param_1 + 0x5d4);
    *(longlong *)(param_1 + 0x5f8) =
         (longlong)(int)uVar2 *
         (longlong)(*(int *)(param_1 + 0x5d8) + 1 + *(int *)(param_1 + 0x5b8));
    iVar4 = 0;
    if (*(int *)(param_1 + 0x5bc) == 1) {
      iVar4 = *(int *)(param_1 + 0x5b8) * uVar2;
    }
    *(int *)(param_1 + 0x600) = iVar4;
  }
  else {
    uVar6 = (int)uVar2 >> 1;
    uVar8 = uVar2 + uVar6;
    iVar4 = (int)uVar2 >> 0x1f;
    iVar9 = (int)uVar8 >> 0x1f;
    uVar7 = *(uint *)(param_1 + 0x5d4);
    lVar3 = (ulonglong)(uint)((int)uVar7 / 2) * (ulonglong)(uVar2 + uVar8);
    uVar5 = (uint)lVar3;
    iVar10 = (int)((ulonglong)lVar3 >> 0x20) +
             ((int)(uVar7 - ((int)uVar7 >> 0x1f)) >> 0x1f) * (uVar2 + uVar8) +
             ((int)uVar7 / 2) * (iVar4 + iVar9 + (uint)CARRY4(uVar2,uVar8));
    *(uint *)(param_1 + 0x5f0) = uVar5;
    *(int *)(param_1 + 0x5f4) = iVar10;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(param_1 + 0x2c) == 2) {
        *(uint *)(param_1 + 0x5f0) = uVar5 + uVar2;
        *(uint *)(param_1 + 0x5f4) = iVar10 + iVar4 + (uint)CARRY4(uVar5,uVar2);
      }
      else {
        *(uint *)(param_1 + 0x5f0) = uVar5 + uVar8;
        *(uint *)(param_1 + 0x5f4) = iVar10 + iVar9 + (uint)CARRY4(uVar5,uVar8);
      }
    }
    if ((*(int *)(param_1 + 0x2c) == 1) && (*(int *)(param_1 + 0x5d4) != 0)) {
      puVar1 = (uint *)(param_1 + 0x5f0);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - uVar6;
      *(int *)(param_1 + 0x5f4) = (*(int *)(param_1 + 0x5f4) - iVar4) - (uint)(uVar7 < uVar6);
    }
    uVar6 = *(int *)(param_1 + 0x5d8) + *(int *)(param_1 + 0x5b8);
    lVar3 = (ulonglong)(uVar2 + uVar8) * (ulonglong)(uint)((int)uVar6 / 2);
    uVar7 = (uint)lVar3;
    uVar5 = uVar7 + uVar2;
    iVar10 = (int)((ulonglong)lVar3 >> 0x20) +
             (uVar2 + uVar8) * ((int)(uVar6 - ((int)uVar6 >> 0x1f)) >> 0x1f) +
             (iVar4 + iVar9 + (uint)CARRY4(uVar2,uVar8)) * ((int)uVar6 / 2) + iVar4 +
             (uint)CARRY4(uVar7,uVar2);
    *(uint *)(param_1 + 0x5f8) = uVar5;
    *(int *)(param_1 + 0x5fc) = iVar10;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(param_1 + 0x2c) == 2) {
        *(uint *)(param_1 + 0x5f8) = uVar5 + uVar8;
        *(uint *)(param_1 + 0x5fc) = iVar10 + iVar9 + (uint)CARRY4(uVar5,uVar8);
      }
      else {
        *(uint *)(param_1 + 0x5f8) = uVar5 + uVar2;
        *(uint *)(param_1 + 0x5fc) = iVar10 + iVar4 + (uint)CARRY4(uVar5,uVar2);
      }
    }
    if (*(int *)(param_1 + 0x5bc) == 1) {
      iVar4 = (uVar2 + uVar8) * ((int)*(uint *)(param_1 + 0x5b8) / 2);
      *(int *)(param_1 + 0x600) = iVar4;
      if ((*(uint *)(param_1 + 0x5b8) & 1) != 0) {
        if (*(int *)(param_1 + 0x2c) == 2) {
          *(uint *)(param_1 + 0x600) = iVar4 + uVar8;
        }
        else {
          *(uint *)(param_1 + 0x600) = iVar4 + uVar2;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x600) = 0;
    }
  }
  return;
}


