/* Module: vegas30k.dll
   Function: DtDestroyDirectoryTree
   Address: 01017a40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall DtDestroyDirectoryTree(struct tagDIR_TREE *) */

void DtDestroyDirectoryTree(tagDIR_TREE *param_1)

{
                    /* 0x17a40  46  ?DtDestroyDirectoryTree@@YGXPAUtagDIR_TREE@@@Z */
  FUN_01016830(param_1,0);
  if (param_1 != (tagDIR_TREE *)0x0) {
    if (*(int *)param_1 != 0) {
      FUN_010179a0(param_1,*(int *)param_1);
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 4));
      _SfList_Destroy_4(*(undefined4 *)(*(int *)param_1 + 0x214));
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x254));
      free(*(void **)param_1);
    }
    free(param_1);
  }
  return;
}


