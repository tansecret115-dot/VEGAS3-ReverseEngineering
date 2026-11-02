/* Module: vegas30k.dll
   Function: DtPrepareAllDirEntries
   Address: 01018760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtPrepareAllDirEntries(struct tagDIR_TREE *,struct tagDIR_ENTRY *) */

long DtPrepareAllDirEntries(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2)

{
  int *piVar1;
  long lVar2;
  tagDIR_ENTRY *ptVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x18760  59  ?DtPrepareAllDirEntries@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@@Z
                        */
  if (param_1 != (tagDIR_TREE *)0x0) {
    FUN_01016830(param_1,0);
    lVar2 = DtPrepareDirEntry(param_1,param_2);
    if ((-1 < lVar2) && ((*(uint *)(param_2 + 8) & 0x10) != 0)) {
      if (*(int **)(param_2 + 0x214) == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(param_2 + 0x214);
      }
      iVar6 = 0;
      if (0 < iVar5) {
        do {
          piVar1 = *(int **)(param_2 + 0x214);
          if (piVar1 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *piVar1;
          }
          if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
            ptVar3 = (tagDIR_ENTRY *)0x0;
          }
          else {
            ptVar3 = *(tagDIR_ENTRY **)(piVar1[2] + iVar6 * 4);
          }
          lVar2 = DtPrepareAllDirEntries(param_1,ptVar3);
        } while ((-1 < lVar2) && (iVar6 = iVar6 + 1, iVar6 < iVar5));
      }
    }
    return lVar2;
  }
  return 1;
}


