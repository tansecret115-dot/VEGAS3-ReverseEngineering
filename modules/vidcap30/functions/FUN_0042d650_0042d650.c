/* Module: vidcap30.exe
   Function: FUN_0042d650
   Address: 0042d650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0042d650(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0057b480("SFSGCB",0);
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0xe2556b28;
  param_1[6] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR_FUN_0058abac;
  param_1[3] = &PTR_LAB_0058ab98;
  param_1[4] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0x3ff00000;
  param_1[0x1d] = 0x403df853;
  param_1[7] = 0;
  param_1[0x1f] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar2 = param_1 + 10;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[9] = 0;
  param_1[8] = 0;
  return param_1;
}


