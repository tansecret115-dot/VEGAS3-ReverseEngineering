/* Module: hhupd.exe
   Function: FUN_01004537
   Address: 01004537
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01004537(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_0100b3bc;
  puVar3 = &DAT_0100b0ac;
  for (iVar1 = 0xc4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  lstrcpyA((LPSTR)&DAT_0100b3bc,*(LPCSTR *)(param_1 + 0xc));
  lstrcpyA(&DAT_0100b4c0,*(LPCSTR *)(param_1 + 4));
  lstrcpyA(&DAT_0100b5c4,*(LPCSTR *)(param_1 + 8));
  _DAT_0100b6c8 = *(undefined2 *)(param_1 + 0x1e);
  _DAT_0100b6ca = *(undefined2 *)(param_1 + 0x20);
  return 0;
}


