/* Module: sfpagepeel.dll
   Function: FUN_0041a680
   Address: 0041a680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041a680(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x3a0) != 0) {
    SelectObject(*(HDC *)(param_1 + 0x39c),*(HGDIOBJ *)(param_1 + 0x3d4));
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x3a0));
    DeleteDC(*(HDC *)(param_1 + 0x39c));
  }
  puVar2 = (undefined4 *)(param_1 + 0x39c);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}


