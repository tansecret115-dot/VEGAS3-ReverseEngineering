/* Module: vegas30k.dll
   Function: FUN_010744d0
   Address: 010744d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010744d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x50);
  puVar3 = (undefined4 *)(param_1 + 0x850);
  for (iVar1 = 0xdc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)(param_1 + 0x850) = 2;
  FUN_01073c90(param_1 + 0x858,0x20,param_1 + 0xbc2);
  FUN_01073c90(param_1 + 0x878,0x20,param_1 + 0xbe3);
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x8a8),3,"%/@");
  FUN_01073c90(param_1 + 0x90e,0x80,param_1 + 0xc04);
  FUN_01073c90(param_1 + 0x98e,0x80,param_1 + 0xc85);
  FUN_01073c90(param_1 + 0xa0e,0x80,param_1 + 0xd06);
  FUN_01073c90(param_1 + 0xa8e,0x80,param_1 + 0xd87);
  FUN_01073c90(param_1 + 0xb0e,0x25,param_1 + 0xe08);
  FUN_01073c90(param_1 + 0xb33,0x25,param_1 + 0xe2e);
  FUN_01073c90(param_1 + 0xb58,0x25,param_1 + 0xe54);
  return;
}


