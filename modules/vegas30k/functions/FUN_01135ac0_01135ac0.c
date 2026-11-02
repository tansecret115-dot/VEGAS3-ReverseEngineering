/* Module: vegas30k.dll
   Function: FUN_01135ac0
   Address: 01135ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_01135ac0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[0x24] = 0;
  puVar2 = param_1 + 9;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _SfQueueInitialize_4(param_1 + 9);
  puVar2 = param_1 + 0x12;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  puVar2 = param_1 + 0x25;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return param_1;
}


