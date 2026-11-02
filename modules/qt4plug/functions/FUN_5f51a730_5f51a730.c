/* Module: qt4plug.dll
   Function: FUN_5f51a730
   Address: 5f51a730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f51a730(int *param_1,longlong *param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  iVar2 = FUN_5f51aef0((int)param_1);
  if (iVar2 < 0) {
    iVar2 = 1;
  }
  else {
    if (param_1[0x48] <= param_4) {
      return -0x7ff8ffa9;
    }
    piVar3 = (int *)(param_4 * 0x30 + param_1[0xd3]);
    iVar1 = *piVar3;
    if (iVar1 == 1) {
      iVar2 = FUN_5f51be50(piVar3[10],(int *)param_2,param_3,param_5);
      return iVar2;
    }
    if (iVar1 == 2) {
      if (param_5 == 2) {
        lVar4 = FUN_5f51a480(param_1);
        *param_2 = lVar4;
        return iVar2;
      }
      iVar2 = FUN_5f51d540();
      return iVar2;
    }
  }
  return iVar2;
}


