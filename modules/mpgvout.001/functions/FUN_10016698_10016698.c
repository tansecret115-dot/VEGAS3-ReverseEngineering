/* Module: mpgvout.001
   Function: FUN_10016698
   Address: 10016698
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10016698(int param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(longlong *)(param_1 + 0x5f0) = (longlong)(int)uVar2 * (longlong)*(int *)(param_1 + 0x5d4);
    iVar5 = 0;
    *(longlong *)(param_1 + 0x5f8) =
         (longlong)(int)uVar2 *
         (longlong)(*(int *)(param_1 + 0x5d8) + 1 + *(int *)(param_1 + 0x5b8));
    if (*(int *)(param_1 + 0x5bc) == 1) {
      iVar5 = uVar2 * *(int *)(param_1 + 0x5b8);
    }
    *(int *)(param_1 + 0x600) = iVar5;
  }
  else {
    uVar9 = (int)uVar2 >> 1;
    uVar4 = uVar2 + uVar9;
    iVar5 = (int)uVar2 >> 0x1f;
    iVar8 = (int)uVar4 >> 0x1f;
    uVar7 = *(uint *)(param_1 + 0x5d4);
    lVar3 = (ulonglong)(uint)((int)uVar7 / 2) * (ulonglong)(uVar2 + uVar4);
    uVar6 = (uint)lVar3;
    *(uint *)(param_1 + 0x5f0) = uVar6;
    iVar10 = (int)((ulonglong)lVar3 >> 0x20) +
             ((int)(uVar7 - ((int)uVar7 >> 0x1f)) >> 0x1f) * (uVar2 + uVar4) +
             ((int)uVar7 / 2) * (iVar5 + iVar8 + (uint)CARRY4(uVar2,uVar4));
    *(int *)(param_1 + 0x5f4) = iVar10;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(param_1 + 0x2c) == 2) {
        *(uint *)(param_1 + 0x5f0) = uVar6 + uVar2;
        *(uint *)(param_1 + 0x5f4) = iVar10 + iVar5 + (uint)CARRY4(uVar6,uVar2);
      }
      else {
        *(uint *)(param_1 + 0x5f0) = uVar6 + uVar4;
        *(uint *)(param_1 + 0x5f4) = iVar10 + iVar8 + (uint)CARRY4(uVar6,uVar4);
      }
    }
    if ((*(int *)(param_1 + 0x2c) == 1) && (*(int *)(param_1 + 0x5d4) != 0)) {
      puVar1 = (uint *)(param_1 + 0x5f0);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - uVar9;
      *(int *)(param_1 + 0x5f4) = (*(int *)(param_1 + 0x5f4) - iVar5) - (uint)(uVar7 < uVar9);
    }
    uVar7 = *(int *)(param_1 + 0x5d8) + *(int *)(param_1 + 0x5b8);
    lVar3 = (ulonglong)(uVar2 + uVar4) * (ulonglong)(uint)((int)uVar7 / 2);
    uVar6 = (uint)lVar3;
    uVar9 = uVar6 + uVar2;
    iVar10 = (int)((ulonglong)lVar3 >> 0x20) +
             (uVar2 + uVar4) * ((int)(uVar7 - ((int)uVar7 >> 0x1f)) >> 0x1f) +
             (iVar5 + iVar8 + (uint)CARRY4(uVar2,uVar4)) * ((int)uVar7 / 2) + iVar5 +
             (uint)CARRY4(uVar6,uVar2);
    *(uint *)(param_1 + 0x5f8) = uVar9;
    *(int *)(param_1 + 0x5fc) = iVar10;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(param_1 + 0x2c) == 2) {
        *(uint *)(param_1 + 0x5f8) = uVar9 + uVar4;
        *(uint *)(param_1 + 0x5fc) = iVar10 + iVar8 + (uint)CARRY4(uVar9,uVar4);
      }
      else {
        *(uint *)(param_1 + 0x5f8) = uVar9 + uVar2;
        *(uint *)(param_1 + 0x5fc) = iVar10 + iVar5 + (uint)CARRY4(uVar9,uVar2);
      }
    }
    if (*(int *)(param_1 + 0x5bc) == 1) {
      iVar5 = (uVar2 + uVar4) * ((int)*(uint *)(param_1 + 0x5b8) / 2);
      *(int *)(param_1 + 0x600) = iVar5;
      if ((*(uint *)(param_1 + 0x5b8) & 1) != 0) {
        if (*(int *)(param_1 + 0x2c) == 2) {
          *(uint *)(param_1 + 0x600) = iVar5 + uVar4;
        }
        else {
          *(uint *)(param_1 + 0x600) = iVar5 + uVar2;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x600) = 0;
    }
  }
  return;
}


