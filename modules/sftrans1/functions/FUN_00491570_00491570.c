/* Module: sftrans1.dll
   Function: FUN_00491570
   Address: 00491570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00491570(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 local_24;
  int local_20 [8];
  
  piVar2 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  if (param_3 == 0) {
    local_24 = 7;
    local_20[0] = param_1;
  }
  else {
    local_20[1] = param_3;
    local_24 = 6;
  }
  local_20[2] = param_2;
  FUN_00491550(&local_24,param_4,param_5);
  return;
}


