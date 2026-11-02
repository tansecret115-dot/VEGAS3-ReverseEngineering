/* Module: sfppack3.dll
   Function: FUN_5cc432e0
   Address: 5cc432e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc432e0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_4;
  
  iVar4 = -0x348;
  uVar5 = 0;
  local_4 = -0x348;
  if (param_2 != 0) {
    iVar3 = (int)param_1 - param_3;
    piVar2 = (int *)(param_3 + 4);
    do {
      if (uVar5 == param_2 - 1) {
        *piVar2 = 0;
        piVar2[-1] = 0;
      }
      else {
        iVar1 = *(int *)(iVar3 + (int)piVar2);
        if (iVar4 < iVar1) {
          iVar4 = iVar1;
        }
        piVar2[-1] = iVar4;
        if (local_4 < *param_1) {
          local_4 = *param_1;
        }
        *piVar2 = local_4;
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 2;
    } while (uVar5 < param_2);
  }
  return;
}


