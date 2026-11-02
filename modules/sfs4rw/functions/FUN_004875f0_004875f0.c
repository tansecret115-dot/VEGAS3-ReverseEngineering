/* Module: sfs4rw.dll
   Function: FUN_004875f0
   Address: 004875f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004875f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piStack_18;
  int iStack_8;
  
  iVar2 = *(int *)(param_1 + 0x109);
  iVar6 = *(int *)(param_1 + 0x171);
  iStack_8 = (*(code *)**(undefined4 **)(param_1 + 4))
                       (param_1,1,*(int *)(param_1 + 0x71) * iVar2 * 0x14);
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x71)) {
    piVar9 = (int *)(*(int *)(param_1 + 0x79) + 8);
    piStack_18 = (int *)(iVar6 + 8);
    do {
      puVar4 = (undefined4 *)
               (**(code **)(*(int *)(param_1 + 4) + 8))
                         (param_1,1,(piVar9[5] * *(int *)(param_1 + 0x105) * 8) / *piVar9,iVar2 * 3)
      ;
      puVar1 = (undefined4 *)(iStack_8 + iVar2 * 4);
      puVar8 = puVar4;
      puVar7 = puVar1;
      for (uVar5 = (uint)(iVar2 * 0xc) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      if (0 < iVar2) {
        puVar7 = (undefined4 *)(iVar2 * 0x10 + iStack_8);
        puVar8 = puVar4 + iVar2 * 2;
        iVar10 = iStack_8 - (int)puVar4;
        iVar6 = iVar2;
        do {
          uVar3 = *puVar8;
          puVar8 = puVar8 + 1;
          *(undefined4 *)(iVar10 + (int)puVar4) = uVar3;
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *piStack_18 = (int)puVar1;
      piStack_18 = piStack_18 + 1;
      iStack_8 = iStack_8 + iVar2 * 0x14;
      iVar11 = iVar11 + 1;
      piVar9 = (int *)((int)piVar9 + 0x51);
    } while (iVar11 < *(int *)(param_1 + 0x71));
  }
  return;
}


