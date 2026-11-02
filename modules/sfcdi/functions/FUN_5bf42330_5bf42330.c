/* Module: sfcdi.dll
   Function: FUN_5bf42330
   Address: 5bf42330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf42330(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x50);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_5bf422d0((CHAR *)(param_1 + 0x51),5,"CD001");
  *(undefined1 *)(param_1 + 0x56) = 1;
  FUN_5bf422d0((CHAR *)(param_1 + 0x58),0x20,(LPCSTR)(param_1 + 0xbc2));
  FUN_5bf422d0((CHAR *)(param_1 + 0x78),0x20,(LPCSTR)(param_1 + 0xbe3));
  FUN_5bf422d0((CHAR *)(param_1 + 0x10e),0x80,(LPCSTR)(param_1 + 0xc04));
  FUN_5bf422d0((CHAR *)(param_1 + 0x18e),0x80,(LPCSTR)(param_1 + 0xc85));
  FUN_5bf422d0((CHAR *)(param_1 + 0x20e),0x80,(LPCSTR)(param_1 + 0xd06));
  FUN_5bf422d0((CHAR *)(param_1 + 0x28e),0x80,(LPCSTR)(param_1 + 0xd87));
  FUN_5bf422d0((CHAR *)(param_1 + 0x30e),0x25,(LPCSTR)(param_1 + 0xe08));
  FUN_5bf422d0((CHAR *)(param_1 + 0x333),0x25,(LPCSTR)(param_1 + 0xe2e));
  FUN_5bf422d0((CHAR *)(param_1 + 0x358),0x25,(LPCSTR)(param_1 + 0xe54));
  *(undefined4 *)(param_1 + 200) = 0x1000001;
  *(undefined4 *)(param_1 + 0xcc) = 0x1000001;
  *(undefined4 *)(param_1 + 0xd0) = 0x80800;
  FUN_5bf41bd0((ushort *)(param_1 + 0xe7a),(LPSTR)(param_1 + 0x37d));
  FUN_5bf41bd0((ushort *)(param_1 + 0xe8a),(LPSTR)(param_1 + 0x38e));
  FUN_5bf41bd0((ushort *)(param_1 + 0xe9a),(LPSTR)(param_1 + 0x39f));
  FUN_5bf41bd0((ushort *)(param_1 + 0xeaa),(LPSTR)(param_1 + 0x3b0));
  *(undefined1 *)(param_1 + 0x3c1) = 1;
  return;
}


