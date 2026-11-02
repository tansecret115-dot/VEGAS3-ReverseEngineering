/* Module: vegas30.exe
   Function: FUN_005ea540
   Address: 005ea540
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ea540(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = param_3;
  *param_5 = 0;
  iVar5 = *param_3;
  if (0 < iVar5) {
    do {
      iVar1 = **(int **)piVar2[2];
      if (iVar1 != 0) {
        _SfList_Destroy_4(iVar1);
      }
      _SfList_DeleteList_16(piVar2,0,1,0);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = param_4;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      iVar5 = FUN_005ea510(param_1,param_2,uVar4,&param_3);
      if (iVar5 < 0) {
        return iVar5;
      }
      uVar4 = uVar4 + 1;
      *param_5 = *param_5 + (int)param_3;
    } while (uVar4 < uVar3);
  }
  return 0;
}


