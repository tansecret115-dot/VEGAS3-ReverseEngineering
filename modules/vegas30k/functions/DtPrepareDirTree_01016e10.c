/* Module: vegas30k.dll
   Function: DtPrepareDirTree
   Address: 01016e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtPrepareDirTree(struct tagDIR_TREE *,int,int) */

long DtPrepareDirTree(tagDIR_TREE *param_1,int param_2,int param_3)

{
  long lVar1;
  
                    /* 0x16e10  61  ?DtPrepareDirTree@@YGJPAUtagDIR_TREE@@HH@Z */
  FUN_01016830(param_1,0);
  lVar1 = DtBuildShortNames(param_1,*(tagDIR_ENTRY **)param_1,1);
  if ((-1 < lVar1) && (*(code **)(param_1 + 0x30) != (code *)0x0)) {
    lVar1 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x4c),param_1,param_2,param_3);
  }
  return lVar1;
}


