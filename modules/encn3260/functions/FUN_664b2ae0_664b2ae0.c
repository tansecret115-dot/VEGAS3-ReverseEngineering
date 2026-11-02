/* Module: encn3260.dll
   Function: FUN_664b2ae0
   Address: 664b2ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664b2ae0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  local_14 = *param_2;
  if (*param_2 <= *param_3) {
    local_14 = *param_3;
  }
  iVar3 = param_2[2];
  if (param_3[2] <= param_2[2]) {
    iVar3 = param_3[2];
  }
  iVar2 = param_3[1];
  if (param_3[1] < param_2[1]) {
    iVar2 = param_2[1];
  }
  iVar1 = param_3[3];
  if (param_2[3] < param_3[3]) {
    iVar1 = param_2[3];
  }
  if ((iVar3 <= local_14) || (iVar1 <= iVar2)) {
    iVar1 = 0;
    local_14 = 0;
    iVar2 = 0;
    iVar3 = 0;
  }
  *param_1 = local_14;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  param_1[3] = iVar1;
  return;
}


