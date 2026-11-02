/* Module: vegas30.exe
   Function: FUN_004404f0
   Address: 004404f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004404f0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = 6;
  if (DAT_0064a8c0 != 0) {
    param_1[1] = 0x46;
  }
  param_1[2] = 8000;
  param_1[3] = param_2;
  param_1[4] = DAT_0064a7b8;
  return;
}


