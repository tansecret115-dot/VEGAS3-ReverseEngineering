/* Module: vidcap30.exe
   Function: FUN_00547cb0
   Address: 00547cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00547cb0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_0059e388;
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
    param_1[0x80] = &LAB_00547b90;
  }
  if (param_1[0x81] == 0) {
    param_1[0x81] = &LAB_00547bb0;
  }
  if (param_1[0x82] == 0) {
    param_1[0x82] = &LAB_00547c10;
  }
  if (param_1[0x83] == 0) {
    param_1[0x83] = &LAB_00547c20;
  }
  if (param_1[0x84] == 0) {
    param_1[0x84] = &LAB_00547ba0;
  }
  if (param_1[0x85] == 0) {
    param_1[0x85] = &LAB_00547c30;
  }
  if (param_1[0x86] == 0) {
    param_1[0x86] = &LAB_00547c50;
  }
  if (param_1[0x87] == 0) {
    param_1[0x87] = &LAB_00547bc0;
  }
  if (param_1[0x88] == 0) {
    param_1[0x88] = &LAB_00547c80;
  }
  if (param_1[0x89] == 0) {
    param_1[0x89] = &LAB_00547c60;
  }
  if (param_1[0x8a] == 0) {
    param_1[0x8a] = &LAB_00547c70;
  }
  return 0x90;
}


