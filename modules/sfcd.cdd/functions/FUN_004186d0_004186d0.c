/* Module: sfcd.cdd
   Function: FUN_004186d0
   Address: 004186d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004186d0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  HGLOBAL hMem;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar1 = *(int *)(param_1 + 0x160);
  uVar8 = 0;
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar2 = FUN_0041f470(param_2);
  uVar6 = uVar2;
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_0041f490(param_2,uVar8);
      iVar3 = FUN_0041f3e0(iVar3);
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      uVar6 = uVar6 + iVar3;
      uVar8 = uVar8 + 1;
      uVar7 = uVar6;
    } while (uVar8 < uVar2);
  }
  hMem = GlobalAlloc(0x42,uVar7 * 4);
  puVar4 = GlobalLock(hMem);
  if (puVar4 != (undefined4 *)0x0) {
    param_1 = 0;
    puVar5 = puVar4;
    if (uVar2 != 0) {
      do {
        iVar3 = FUN_0041f490(param_2,param_1);
        if (param_1 == 0) {
          *puVar5 = 0;
        }
        else {
          *puVar5 = *(undefined4 *)(iVar3 + 0x10);
        }
        puVar9 = puVar5 + 1;
        uVar8 = FUN_0041f3e0(iVar3);
        if (uVar8 == 0) {
          *puVar9 = *(undefined4 *)(iVar3 + 0x14);
          puVar9 = puVar5 + 2;
        }
        else {
          uVar6 = 0;
          if (uVar8 != 0) {
            do {
              puVar5 = (undefined4 *)FUN_0041f3f0(iVar3,uVar6);
              *puVar9 = *puVar5;
              puVar9 = puVar9 + 1;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar8);
          }
        }
        param_1 = param_1 + 1;
        puVar5 = puVar9;
      } while (param_1 < uVar2);
    }
    *(undefined4 **)(iVar1 + 0x1e8) = puVar4;
    *(uint *)(iVar1 + 0x1e0) = uVar7;
    *(undefined4 *)(iVar1 + 0x1e4) = 0;
    return 0;
  }
  return 0x8007000e;
}


