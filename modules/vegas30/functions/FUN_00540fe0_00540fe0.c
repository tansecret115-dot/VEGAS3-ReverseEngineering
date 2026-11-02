/* Module: vegas30.exe
   Function: FUN_00540fe0
   Address: 00540fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00540fe0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2;
  iVar5 = -0x7fffbffb;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 < 0)) {
    iVar5 = -0x7ff8ffa9;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x228);
    iVar3 = *(int *)(param_1 + 0x22c);
    if ((iVar2 != 0) && (iVar3 != 0)) {
      puVar1 = (undefined4 *)(param_2 + 0x30);
      if ((*(int *)(param_2 + 0x30) == 0) && (iVar5 = FUN_005ec620(), iVar5 != 0)) {
        iVar5 = FUN_005ec8a0(iVar4 + 0x3c,puVar1,0,0);
        if (iVar5 < 0) {
          return iVar5;
        }
        FUN_005ed3f0(*puVar1);
      }
      iVar5 = FUN_00540a40(param_1,iVar4,&param_2);
      if ((-1 < iVar5) &&
         (iVar5 = _SfList_MoveItemsBetweenHeapLists_20(iVar2,param_2,iVar3,param_3,1), -1 < iVar5))
      {
        return 0;
      }
    }
  }
  return iVar5;
}


