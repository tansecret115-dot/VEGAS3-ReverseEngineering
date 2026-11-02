/* Module: vegas30k.dll
   Function: FUN_011a7dd0
   Address: 011a7dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a7dd0(int *param_1,code *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  
  if (param_1[0x1fd] == 0) {
    return 0;
  }
  uVar6 = 0x3ff00000;
  pcVar5 = (code *)0x0;
  iVar2 = (*param_2)(param_1,0,param_3,0,0xffffffff,0xffffffff,0,0x3ff00000,0,0,0,0,0,0);
  if (-1 < iVar2) {
    param_1[0x1f7] = (int)param_2;
    param_1[0x1f8] = param_3;
    if ((int *)param_1[0x1fd] == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)param_1[0x1fd];
    }
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        piVar1 = *(int **)(*(int *)(param_1[0x1fd] + 8) + iVar3 * 4);
        if (((piVar1[3] & 1U) != 0) && ((piVar1[3] & 2U) == 0)) {
          iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,&LAB_011a8f50,param_1,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    if (iVar2 < 0) {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
    else if (param_1[0x1ff] != 0) {
      iVar2 = (*pcVar5)(param_1,0xe,uVar6,0,0xffffffff,0xffffffff,0,0x3ff00000,0,0,0,0,0,0);
      if (-1 < iVar2) {
        piVar1 = (int *)param_1[0x1ff];
        if (((piVar1[3] & 1U) != 0) && ((piVar1[3] & 2U) == 0)) {
          iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,&LAB_011a8f50,param_1,0);
          if (-1 < iVar2) {
            param_1[0x1fb] = param_1[0x1fb] | 0x400;
          }
        }
      }
    }
    param_1[0x1fb] = ((uint)(iVar2 == 0) ^ param_1[0x1fb]) & 1 ^ param_1[0x1fb];
  }
  return iVar2;
}


