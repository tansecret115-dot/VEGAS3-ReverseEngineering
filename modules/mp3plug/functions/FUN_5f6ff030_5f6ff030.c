/* Module: mp3plug.dll
   Function: FUN_5f6ff030
   Address: 5f6ff030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6ff030(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  
  local_14 = param_1[8];
  iVar2 = *param_1;
  iVar3 = param_1[2] - param_1[1];
  iVar1 = local_14 * iVar2 + iVar3;
  param_1[2] = iVar3;
  local_18 = 0x7fffffff;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar4 = param_1[5];
  if ((iVar4 != 2) && (iVar1 < 0x7fffffff)) {
    local_14 = param_1[8];
    param_1[3] = 0;
    param_1[4] = 0;
    iVar4 = param_1[5];
    iVar2 = *param_1;
    iVar3 = param_1[2];
    local_18 = iVar1;
  }
  iVar1 = (local_14 + 8) * iVar2 + iVar3;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if ((iVar4 != 1) && (iVar1 < local_18)) {
    iVar4 = param_1[5];
    param_1[3] = 0;
    iVar2 = *param_1;
    param_1[4] = 1;
    iVar3 = param_1[2];
    local_18 = iVar1;
  }
  local_14 = param_1[9];
  iVar1 = local_14 * iVar2 + iVar3;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if ((iVar4 != 2) && (iVar1 < local_18)) {
    local_14 = param_1[9];
    param_1[3] = 1;
    iVar4 = param_1[5];
    param_1[4] = 0;
    iVar2 = *param_1;
    iVar3 = param_1[2];
    local_18 = iVar1;
  }
  iVar3 = (local_14 + 8) * iVar2 + iVar3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if ((iVar4 != 1) && (iVar3 < local_18)) {
    param_1[4] = 1;
    param_1[3] = 1;
  }
  if (param_1[4] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 8;
  }
  if (param_1[3] == 0) {
    iVar3 = param_1[8];
  }
  else {
    iVar3 = param_1[9];
  }
  param_1[2] = (iVar2 + iVar3) * *param_1 + param_1[2];
  return 0;
}


