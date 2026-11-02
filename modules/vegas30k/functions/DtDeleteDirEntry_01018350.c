/* Module: vegas30k.dll
   Function: DtDeleteDirEntry
   Address: 01018350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtDeleteDirEntry(struct tagDIR_TREE *,struct tagDIR_ENTRY *) */

long DtDeleteDirEntry(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2)

{
  int iVar1;
  long lVar2;
  
                    /* 0x18350  45  ?DtDeleteDirEntry@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@@Z */
  FUN_01016830(param_1,0);
  iVar1 = *(int *)(param_2 + 0x21c);
  FUN_010179a0(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    lVar2 = DtPrepareDirEntry(param_1,param_2);
    return lVar2;
  }
  return 0;
}


