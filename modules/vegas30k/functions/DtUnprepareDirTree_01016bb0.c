/* Module: vegas30k.dll
   Function: DtUnprepareDirTree
   Address: 01016bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtUnprepareDirTree(struct tagDIR_TREE *) */

long DtUnprepareDirTree(tagDIR_TREE *param_1)

{
  long lVar1;
  
                    /* 0x16bb0  67  ?DtUnprepareDirTree@@YGJPAUtagDIR_TREE@@@Z */
  FUN_01016830(param_1,0);
  if (*(int *)(param_1 + 0x34) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_01016b30(*(undefined4 *)param_1);
    if (-1 < lVar1) {
      lVar1 = (**(code **)(param_1 + 0x34))(*(undefined4 *)(param_1 + 0x4c));
      return lVar1;
    }
  }
  return lVar1;
}


