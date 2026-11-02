/* Module: vidpcore.dll
   Function: FUN_5de82880
   Address: 5de82880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de82880(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(HGDIOBJ *)(param_1 + 0x170) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x170));
    DeleteDC(*(HDC *)(param_1 + 0x16c));
  }
  puVar2 = (undefined4 *)(param_1 + 0x16c);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


