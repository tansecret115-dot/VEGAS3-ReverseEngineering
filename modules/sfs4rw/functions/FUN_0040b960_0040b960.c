/* Module: sfs4rw.dll
   Function: FUN_0040b960
   Address: 0040b960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040b960(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = 0x4c;
  uVar1 = DAT_004a8110;
  param_1[7] = param_2;
  param_1[2] = uVar1;
  param_1[6] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80004;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


