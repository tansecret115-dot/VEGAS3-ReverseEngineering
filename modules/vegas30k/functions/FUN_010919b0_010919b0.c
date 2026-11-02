/* Module: vegas30k.dll
   Function: FUN_010919b0
   Address: 010919b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010919b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x328) != 0) {
    SelectObject(*(HDC *)(param_1 + 0x324),*(HGDIOBJ *)(param_1 + 0x35c));
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x328));
    DeleteDC(*(HDC *)(param_1 + 0x324));
  }
  puVar2 = (undefined4 *)(param_1 + 0x324);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}


