/* Module: sftrans1.dll
   Function: FUN_0047c4b0
   Address: 0047c4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047c4b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xb; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xc] = 0;
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  return;
}


