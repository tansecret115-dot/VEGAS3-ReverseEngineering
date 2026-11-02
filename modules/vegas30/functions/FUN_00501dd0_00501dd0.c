/* Module: vegas30.exe
   Function: FUN_00501dd0
   Address: 00501dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00501dd0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uchar local_208 [520];
  
  iVar2 = 0;
  iVar1 = param_1[1];
  local_208[0] = '\0';
  param_1[1] = iVar1 + -1;
  if (0 < (iVar1 + -1) * param_1[2]) {
    do {
      _mbscat(local_208," ");
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(param_1[1] * param_1[2]));
  }
  param_1[1] = param_1[1] + 1;
  FUN_00501d90(local_208,param_2);
  FUN_00501c80(*param_1,local_208);
  return;
}


