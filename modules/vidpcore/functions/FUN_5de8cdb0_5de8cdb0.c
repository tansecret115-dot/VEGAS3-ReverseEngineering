/* Module: vidpcore.dll
   Function: FUN_5de8cdb0
   Address: 5de8cdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de8cdb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(HGDIOBJ *)(param_1 + 0x14c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x14c));
    DeleteDC(*(HDC *)(param_1 + 0x148));
  }
  puVar2 = (undefined4 *)(param_1 + 0x148);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


