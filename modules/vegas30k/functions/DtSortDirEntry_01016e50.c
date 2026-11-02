/* Module: vegas30k.dll
   Function: DtSortDirEntry
   Address: 01016e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtSortDirEntry(struct tagDIR_TREE *,struct tagDIR_ENTRY *) */

long DtSortDirEntry(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2)

{
  long lVar1;
  
                    /* 0x16e50  64  ?DtSortDirEntry@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@@Z */
  FUN_01016830(param_1,0);
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    lVar1 = (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 0x4c),param_2);
    return lVar1;
  }
  return 0;
}


