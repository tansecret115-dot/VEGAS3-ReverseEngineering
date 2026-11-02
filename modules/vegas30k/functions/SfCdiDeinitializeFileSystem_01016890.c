/* Module: vegas30k.dll
   Function: SfCdiDeinitializeFileSystem
   Address: 01016890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiDeinitializeFileSystem(struct tagDIR_TREE *) */

long SfCdiDeinitializeFileSystem(tagDIR_TREE *param_1)

{
  long lVar1;
  int iVar2;
  tagDIR_TREE *ptVar3;
  
                    /* 0x16890  298  ?SfCdiDeinitializeFileSystem@@YGJPAUtagDIR_TREE@@@Z */
  FUN_01016830(param_1,0);
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  lVar1 = DtUnprepareDirEntry(param_1,*(tagDIR_ENTRY **)param_1);
  if (-1 < lVar1) {
    if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
      return 0;
    }
    lVar1 = (**(code **)(param_1 + 0x2c))(*(undefined4 *)(param_1 + 0x4c));
    if (-1 < lVar1) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
      ptVar3 = param_1 + 0x20;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)ptVar3 = 0;
        ptVar3 = ptVar3 + 4;
      }
      return lVar1;
    }
  }
  return lVar1;
}


