/* Module: vegas30k.dll
   Function: DtUnprepareDirEntry
   Address: 01016f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtUnprepareDirEntry(struct tagDIR_TREE *,struct tagDIR_ENTRY *) */

long DtUnprepareDirEntry(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2)

{
  int *piVar1;
  tagDIR_ENTRY *ptVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
                    /* 0x16f90  66  ?DtUnprepareDirEntry@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@@Z */
  lVar4 = 0;
  if (param_1 == (tagDIR_TREE *)0x0) {
    return 1;
  }
  FUN_01016830(param_1,0);
  if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
    lVar4 = (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x4c),param_2);
  }
  if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
    iVar5 = 0;
    while( true ) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (iVar3 <= iVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar3 + -1 < iVar5)) {
        ptVar2 = (tagDIR_ENTRY *)0x0;
      }
      else {
        ptVar2 = *(tagDIR_ENTRY **)(piVar1[2] + iVar5 * 4);
      }
      lVar4 = DtUnprepareDirEntry(param_1,ptVar2);
      if (lVar4 < 0) {
        return lVar4;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return lVar4;
}


