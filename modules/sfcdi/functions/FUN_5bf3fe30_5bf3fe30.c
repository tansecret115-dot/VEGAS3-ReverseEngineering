/* Module: sfcdi.dll
   Function: FUN_5bf3fe30
   Address: 5bf3fe30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3fe30(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  iVar3 = FUN_5bf3f2c0(param_1);
  if (iVar3 != 0) {
    iVar4 = FUN_5bf3f280(param_1);
    if (iVar4 != 0) {
      puVar1 = (undefined4 *)(iVar3 + 8);
      puVar9 = puVar1;
      for (iVar7 = 0x4000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar1 = 0;
      iVar7 = 0;
      puVar8 = (undefined2 *)(iVar3 + 10);
      while( true ) {
        piVar2 = *(int **)(iVar3 + 4);
        if (piVar2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar2;
        }
        if (iVar5 <= iVar7) break;
        puVar6 = (undefined2 *)(piVar2[1] * iVar7 + piVar2[2]);
        if (puVar6 == (undefined2 *)0x0) {
          uVar10 = 0x80004005;
LAB_5bf3fea9:
          FUN_5bf3f340((int)puVar1);
          *(short *)(iVar4 + 0x3c) = (short)iVar7;
          return uVar10;
        }
        iVar7 = iVar7 + 1;
        *puVar8 = *puVar6;
        puVar8 = puVar8 + 1;
      }
      uVar10 = 0;
      goto LAB_5bf3fea9;
    }
  }
  return 0x80070057;
}


