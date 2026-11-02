/* Module: sfcdi.dll
   Function: FUN_5bf42490
   Address: 5bf42490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf42490(int param_1)

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
  FUN_5bf41c50((undefined4 *)(param_1 + 0x858),0x20,(LPCSTR)(param_1 + 0xbc2));
  FUN_5bf41c50((undefined4 *)(param_1 + 0x878),0x20,(LPCSTR)(param_1 + 0xbe3));
  FUN_5bf422d0((CHAR *)(param_1 + 0x8a8),3,"%/@");
  FUN_5bf41c50((undefined4 *)(param_1 + 0x90e),0x80,(LPCSTR)(param_1 + 0xc04));
  FUN_5bf41c50((undefined4 *)(param_1 + 0x98e),0x80,(LPCSTR)(param_1 + 0xc85));
  FUN_5bf41c50((undefined4 *)(param_1 + 0xa0e),0x80,(LPCSTR)(param_1 + 0xd06));
  FUN_5bf41c50((undefined4 *)(param_1 + 0xa8e),0x80,(LPCSTR)(param_1 + 0xd87));
  FUN_5bf41c50((undefined4 *)(param_1 + 0xb0e),0x25,(LPCSTR)(param_1 + 0xe08));
  FUN_5bf41c50((undefined4 *)(param_1 + 0xb33),0x25,(LPCSTR)(param_1 + 0xe2e));
  FUN_5bf41c50((undefined4 *)(param_1 + 0xb58),0x25,(LPCSTR)(param_1 + 0xe54));
  return;
}


