/* Module: rv203260.dll
   Function: FUN_638a1070
   Address: 638a1070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_638a1070(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *param_1 = &PTR_FUN_638b30c0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((int)param_1 + 0x2d2) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)((int)param_1 + 0xfe) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 1;
  *(undefined4 *)((int)param_1 + 0x2ce) = 0;
  *(undefined4 *)((int)param_1 + 0x102) = 0;
  *(undefined4 *)((int)param_1 + 0x106) = 0;
  *(undefined4 *)((int)param_1 + 0x10a) = 0;
  *(undefined4 *)((int)param_1 + 0x10e) = 0;
  *(undefined4 *)((int)param_1 + 0x1b2) = 0;
  *(undefined4 *)((int)param_1 + 0x1b6) = 0;
  puVar4 = (undefined4 *)((int)param_1 + 0x112);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x13a);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x162);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x18a);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_638af110();
  param_1[0x30] = uVar1;
  param_1[0x31] = DAT_638b6714;
  *(undefined4 *)((int)param_1 + 0x316) = 0;
  *(undefined4 *)((int)param_1 + 0x31a) = 0;
  *(undefined4 *)((int)param_1 + 0x31e) = 0;
  *(undefined4 *)((int)param_1 + 0x322) = 0;
  *(undefined4 *)((int)param_1 + 0x326) = 0;
  *(undefined4 *)((int)param_1 + 0x32a) = 0;
  *(undefined4 *)((int)param_1 + 0x32e) = 0;
  *(undefined4 *)((int)param_1 + 0x332) = 0;
  *(undefined4 *)((int)param_1 + 0x1c2) = 0;
  *(undefined4 *)((int)param_1 + 0x1ba) = 0;
  *(undefined4 *)((int)param_1 + 0x1be) = 0;
  *(undefined4 *)((int)param_1 + 0x35a) = 0;
  param_1[0x38] = 0;
  param_1[0x32] = 0x1f;
  param_1[0x33] = 0x3f8ccccd;
  param_1[0x34] = 0;
  *(undefined4 *)((int)param_1 + 0xf6) = 0;
  *(undefined4 *)((int)param_1 + 0xfa) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((int)param_1 + 0x1c6) = 0;
  *(undefined1 *)((int)param_1 + 0x1ca) = 0;
  *(undefined4 *)((int)param_1 + 0x356) = 0;
  *(undefined4 *)((int)param_1 + 0x35e) = 0;
  *(undefined4 *)((int)param_1 + 0x362) = 0;
  iVar2 = 0;
  piVar3 = param_1 + 0x16;
  do {
    *piVar3 = iVar2;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x14);
  *(undefined4 *)((int)param_1 + 0x366) = 0;
  return param_1;
}


