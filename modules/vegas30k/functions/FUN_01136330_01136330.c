/* Module: vegas30k.dll
   Function: FUN_01136330
   Address: 01136330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_01136330(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_LAB_011e6a3c;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 900);
    param_1[3] = uVar1;
    param_1[4] = uVar1;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  puVar3 = param_1 + 0xf;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  return param_1;
}


