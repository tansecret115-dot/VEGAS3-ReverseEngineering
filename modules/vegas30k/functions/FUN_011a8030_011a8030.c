/* Module: vegas30k.dll
   Function: FUN_011a8030
   Address: 011a8030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a8030(int *param_1,code *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x1fd] == 0) {
    return 0;
  }
  iVar2 = (*param_2)(param_1,0,param_3,0,0xffffffff,0xffffffff,0,0x3ff00000,0,0,0,0,0,0);
  if (-1 < iVar2) {
    param_1[0x1f7] = (int)param_2;
    param_1[0x1f8] = param_3;
    if ((int *)param_1[0x1fd] == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1[0x1fd];
    }
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        piVar1 = *(int **)(*(int *)(param_1[0x1fd] + 8) + iVar4 * 4);
        if (((piVar1[3] & 1U) != 0) && ((piVar1[3] & 2U) == 0)) {
          iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,&LAB_011a8f50,param_1,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (iVar2 < 0) {
      (**(code **)(*param_1 + 0x1dc))(param_1);
    }
    param_1[0x1fb] = param_1[0x1fb] | 1;
  }
  return iVar2;
}


