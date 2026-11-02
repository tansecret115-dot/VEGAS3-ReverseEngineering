/* Module: vegas30k.dll
   Function: DtCopyDirEntry
   Address: 01018390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtCopyDirEntry(struct tagDIR_TREE *,struct tagDIR_ENTRY *,struct tagDIR_ENTRY *)
    */

long DtCopyDirEntry(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2,tagDIR_ENTRY *param_3)

{
  int *piVar1;
  tagDIR_TREE *ptVar2;
  tagDIR_ENTRY *ptVar3;
  long lVar4;
  tagDIR_ENTRY *ptVar5;
  int iVar6;
  tagDIR_ENTRY **unaff_ESI;
  int iVar7;
  
                    /* 0x18390  43  ?DtCopyDirEntry@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@1@Z */
  ptVar2 = param_1;
  FUN_01016830(param_1,0);
  ptVar3 = param_3;
  lVar4 = DtAllocateDirectoryEntry
                    (ptVar2,param_2,(char *)(param_3 + 0xc),(char *)(param_3 + 0x110),
                     (char *)(param_3 + 0x224),*(__uint64 *)(param_3 + 0x32c),
                     CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x334)),1,
                     (int)&param_1,unaff_ESI);
  if ((-1 < lVar4) && ((*(uint *)(ptVar3 + 8) & 0x10) != 0)) {
    iVar7 = 0;
    while( true ) {
      piVar1 = *(int **)(ptVar3 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      if (iVar6 <= iVar7) break;
      if (piVar1 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      if ((iVar7 < 0) || (iVar6 + -1 < iVar7)) {
        ptVar5 = (tagDIR_ENTRY *)0x0;
      }
      else {
        ptVar5 = *(tagDIR_ENTRY **)(piVar1[2] + iVar7 * 4);
      }
      lVar4 = DtCopyDirEntry(ptVar2,(tagDIR_ENTRY *)param_1,ptVar5);
      if (lVar4 < 0) {
        return lVar4;
      }
      iVar7 = iVar7 + 1;
    }
  }
  return lVar4;
}


