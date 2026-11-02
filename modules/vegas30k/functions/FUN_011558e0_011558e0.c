/* Module: vegas30k.dll
   Function: FUN_011558e0
   Address: 011558e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011558e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_011e7930;
  }
  puVar2 = param_1 + 0x72;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x7a] = *param_1;
  param_1[0x8b] = param_1 + 0x96;
  param_1[0x8c] = param_1 + 0x96;
  param_1[0x8e] = 0x200;
  if (param_1[0x80] == 0) {
    param_1[0x80] = &LAB_011557c0;
  }
  if (param_1[0x81] == 0) {
    param_1[0x81] = &LAB_011557e0;
  }
  if (param_1[0x82] == 0) {
    param_1[0x82] = &LAB_01155840;
  }
  if (param_1[0x83] == 0) {
    param_1[0x83] = &LAB_01155850;
  }
  if (param_1[0x84] == 0) {
    param_1[0x84] = &LAB_011557d0;
  }
  if (param_1[0x85] == 0) {
    param_1[0x85] = &LAB_01155860;
  }
  if (param_1[0x86] == 0) {
    param_1[0x86] = &LAB_01155880;
  }
  if (param_1[0x87] == 0) {
    param_1[0x87] = &LAB_011557f0;
  }
  if (param_1[0x88] == 0) {
    param_1[0x88] = &LAB_011558b0;
  }
  if (param_1[0x89] == 0) {
    param_1[0x89] = &LAB_01155890;
  }
  if (param_1[0x8a] == 0) {
    param_1[0x8a] = &LAB_011558a0;
  }
  return 0x90;
}


