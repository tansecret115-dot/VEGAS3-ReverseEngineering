/* Module: vegas30k.dll
   Function: DtPrepareDirEntry
   Address: 01017020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtPrepareDirEntry(struct tagDIR_TREE *,struct tagDIR_ENTRY *) */

long DtPrepareDirEntry(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2)

{
  long lVar1;
  
                    /* 0x17020  60  ?DtPrepareDirEntry@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@@Z */
  FUN_01016830(param_1,0);
  lVar1 = 0;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    lVar1 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x4c),param_2);
  }
  return lVar1;
}


