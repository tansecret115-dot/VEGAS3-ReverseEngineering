/* Module: vegas30.exe
   Function: FUN_005aa750
   Address: 005aa750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005aa750(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                int *param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_4;
  
  ceil((double)CONCAT44(param_3,param_2) * (double)CONCAT44(param_5,param_4));
  local_4 = ftol();
  iVar1 = 0;
  iVar2 = 0;
  if (local_4 < 0) {
    local_4 = 0;
  }
  else if (0x10 < local_4) {
    local_4 = 0x10;
  }
  if ((param_1[0x98] < *param_7) || (param_1[0x99] < param_7[1])) {
    piVar3 = param_1;
    if (0 < param_1[0x90]) {
      do {
        if (*piVar3 != 0) {
          _SfDibFree_8(*piVar3,0);
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar1 < param_1[0x90]);
    }
    param_1[0x90] = 0;
    param_1[0x98] = *param_7;
    param_1[0x99] = param_7[1];
  }
  iVar1 = param_1[0x90];
  if (iVar1 < local_4) {
    piVar3 = param_1 + iVar1;
    piVar4 = param_1 + iVar1 * 2 + 0x10;
    do {
      *piVar4 = -1;
      piVar4[1] = 0x7fffffff;
      iVar2 = _SfDibAlloc_28(piVar3,param_1[0x9a],param_1[0x98],param_1[0x99],0,0xffffffff,0);
      if (iVar2 < 0) break;
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 2;
      piVar3 = piVar3 + 1;
    } while (iVar1 < local_4);
    param_1[0x90] = local_4;
    if (iVar2 < 0) {
      FUN_005aa930();
      return iVar2;
    }
  }
  param_1[0x92] = param_4;
  param_1[0x93] = param_5;
  param_1[0x94] = param_2;
  param_1[0x95] = param_3;
  param_1[0x96] = *param_7;
  param_1[0x97] = param_7[1];
  param_1[0x9c] = param_8;
  param_1[0x9d] = param_9;
  param_1[0x9e] = -(uint)(param_6 != 0xffffffff) & param_6;
  return iVar2;
}


