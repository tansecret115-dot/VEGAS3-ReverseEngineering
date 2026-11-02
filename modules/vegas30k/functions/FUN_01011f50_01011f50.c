/* Module: vegas30k.dll
   Function: FUN_01011f50
   Address: 01011f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01011f50(tagDIR_ENTRY *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  tagSFVCD_ENTRIES *ptVar3;
  int iVar4;
  int iVar5;
  tagSFVCD_ENTRIES *ptVar6;
  tagSFVCD_ENTRIES *ptVar7;
  
  ptVar3 = sfvcdGetENTRIES_INFO(param_1);
  if (ptVar3 != (tagSFVCD_ENTRIES *)0x0) {
    ptVar6 = ptVar3 + 8;
    ptVar7 = ptVar6;
    for (iVar5 = 0x200; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)ptVar7 = 0;
      ptVar7 = ptVar7 + 4;
    }
    memmove(ptVar6,"ENTRYVCD",9);
    *(undefined2 *)(ptVar3 + 0x10) = 0x200;
    uVar2 = 0;
    if (*(undefined4 **)(ptVar3 + 4) != (undefined4 *)0x0) {
      uVar2 = (undefined2)**(undefined4 **)(ptVar3 + 4);
    }
    *(undefined2 *)(ptVar3 + 0x12) = uVar2;
    FUN_01011440(ptVar6);
    iVar5 = 0;
    ptVar6 = ptVar3 + 0x14;
    while( true ) {
      piVar1 = *(int **)(ptVar3 + 4);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
        memmove(ptVar6,(void *)0x0,4);
        iVar5 = iVar5 + 1;
        ptVar6 = ptVar6 + 4;
      }
      else {
        memmove(ptVar6,(void *)(piVar1[1] * iVar5 + piVar1[2]),4);
        iVar5 = iVar5 + 1;
        ptVar6 = ptVar6 + 4;
      }
    }
    return (undefined1 *)0x0;
  }
  return &DAT_80070057;
}


