/* Module: vegas30.exe
   Function: FUN_005401c0
   Address: 005401c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005401c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2;
  iVar3 = param_1;
  iVar5 = -0x7fffbffb;
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar5 = -0x7ff8ffa9;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x228);
    iVar2 = *(int *)(param_1 + 0x22c);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      if (*(int *)(param_2 + 0x30) != 0) {
        iVar5 = FUN_005ec620();
        if (iVar5 != 0) {
          iVar5 = FUN_005ed410(*(undefined4 *)(iVar4 + 0x30),0,0);
          if (iVar5 < 0) {
            *(undefined4 *)(iVar4 + 0x30) = 0;
            return iVar5;
          }
        }
        *(undefined4 *)(iVar4 + 0x30) = 0;
      }
      iVar5 = FUN_00540270(iVar3,iVar4,&param_1);
      if (-1 < iVar5) {
        iVar5 = _SfList_MoveItemsBetweenHeapLists_20(iVar2,param_1,iVar1,param_3,1);
        if (-1 < iVar5) {
          return 0;
        }
      }
    }
  }
  return iVar5;
}


