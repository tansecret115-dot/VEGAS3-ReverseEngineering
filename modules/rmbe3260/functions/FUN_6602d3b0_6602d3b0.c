/* Module: rmbe3260.dll
   Function: FUN_6602d3b0
   Address: 6602d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6602d3b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *local_c;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_6605cf60(param_2,param_2[1],param_1,1);
    return;
  }
  bVar2 = false;
  if (0 < (int)param_2[1]) {
    local_c = (int *)*param_2;
    do {
      iVar1 = *local_c;
      if ((*(int *)(iVar1 + 4) < *(int *)(param_1 + 4)) &&
         (*(int *)(iVar1 + 8) < *(int *)(param_1 + 8))) {
LAB_6602d46b:
        FUN_6605cf60(param_2,iVar3,param_1,1);
LAB_6602d470:
        bVar2 = true;
        break;
      }
      if ((*(int *)(iVar1 + 8) < *(int *)(param_1 + 8)) || (*(int *)(iVar1 + 0xc) != 0))
      goto LAB_6602d46b;
      if (*(int *)(param_1 + 8) == *(int *)(iVar1 + 8)) {
        if (*(int *)(iVar1 + 4) < *(int *)(param_1 + 4)) {
          FUN_6605d000(param_2,iVar3,1);
          goto LAB_6602d46b;
        }
        goto LAB_6602d470;
      }
      iVar3 = iVar3 + 1;
      local_c = local_c + 1;
    } while (iVar3 < (int)param_2[1]);
  }
  if (!bVar2) {
    FUN_6605cf30(param_2,param_2[1],param_1);
  }
  return;
}


