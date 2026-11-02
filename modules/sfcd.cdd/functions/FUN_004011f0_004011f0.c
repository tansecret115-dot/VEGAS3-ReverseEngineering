/* Module: sfcd.cdd
   Function: FUN_004011f0
   Address: 004011f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004011f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = param_4;
  param_1[0xb] = param_2;
  param_1[10] = param_3;
  param_1[0xe] = 0x4b;
  param_1[0xf] = 0x4b;
  return;
}


