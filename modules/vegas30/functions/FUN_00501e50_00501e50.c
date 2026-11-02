/* Module: vegas30.exe
   Function: FUN_00501e50
   Address: 00501e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00501e50(undefined4 *param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  uchar local_410 [520];
  uchar local_208 [520];
  
  local_410[0] = '\0';
  FUN_00501cd0(local_410,param_2,0);
  iVar1 = FUN_00501a10(param_3);
  if (iVar1 != 0) {
    FUN_00501af0(local_208,param_3);
    param_3 = local_208;
  }
  _mbscat(local_410,param_3);
  FUN_00501d90(local_410,param_2);
  FUN_00501c80(*param_1,local_410);
  return;
}


