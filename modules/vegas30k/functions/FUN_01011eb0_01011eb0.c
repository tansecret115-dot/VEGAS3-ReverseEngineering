/* Module: vegas30k.dll
   Function: FUN_01011eb0
   Address: 01011eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01011eb0(tagDIR_ENTRY *param_1)

{
  tagSFVCD_LOT *ptVar1;
  int *piVar2;
  tagSFVCD_LOT *ptVar3;
  tagSFVCD_INFO *ptVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  tagSFVCD_LOT *ptVar8;
  undefined1 *puVar9;
  
  ptVar3 = sfvcdGetLOT_VCD(param_1);
  if (ptVar3 != (tagSFVCD_LOT *)0x0) {
    ptVar4 = sfvcdGetVCD_INFO(param_1);
    if (ptVar4 != (tagSFVCD_INFO *)0x0) {
      ptVar1 = ptVar3 + 8;
      ptVar8 = ptVar1;
      for (iVar7 = 0x4000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)ptVar8 = 0xffffffff;
        ptVar8 = ptVar8 + 4;
      }
      *(undefined2 *)ptVar1 = 0;
      iVar7 = 0;
      ptVar8 = ptVar3 + 10;
      while( true ) {
        piVar2 = *(int **)(ptVar3 + 4);
        if (piVar2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar2;
        }
        if (iVar5 <= iVar7) break;
        puVar6 = (undefined2 *)(piVar2[1] * iVar7 + piVar2[2]);
        if (puVar6 == (undefined2 *)0x0) {
          puVar9 = (undefined1 *)0x80004005;
LAB_01011f29:
          FUN_010113c0(ptVar1);
          *(short *)(ptVar4 + 0x3c) = (short)iVar7;
          return puVar9;
        }
        iVar7 = iVar7 + 1;
        *(undefined2 *)ptVar8 = *puVar6;
        ptVar8 = ptVar8 + 2;
      }
      puVar9 = (undefined1 *)0x0;
      goto LAB_01011f29;
    }
  }
  return &DAT_80070057;
}


