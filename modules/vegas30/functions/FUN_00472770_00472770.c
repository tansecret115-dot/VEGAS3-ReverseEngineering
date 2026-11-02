/* Module: vegas30.exe
   Function: FUN_00472770
   Address: 00472770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00472770(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_8 = param_5;
  local_18[3] = param_4;
  local_18[0] = param_1;
  local_4 = param_6;
  local_18[1] = param_2;
  local_18[2] = 0;
  FUN_005442c0(*(undefined4 *)(param_3 + 0xdc),local_18);
  return;
}


