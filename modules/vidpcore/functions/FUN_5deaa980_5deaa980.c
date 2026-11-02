/* Module: vidpcore.dll
   Function: FUN_5deaa980
   Address: 5deaa980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5deaa980(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x3dc) != 0) {
    SelectObject(*(HDC *)(param_1 + 0x3d8),*(HGDIOBJ *)(param_1 + 0x410));
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x3dc));
    DeleteDC(*(HDC *)(param_1 + 0x3d8));
  }
  puVar2 = (undefined4 *)(param_1 + 0x3d8);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}


