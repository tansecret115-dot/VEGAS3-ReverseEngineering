/* Module: vfplugs.dll
   Function: FUN_00411090
   Address: 00411090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00411090(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(HGDIOBJ *)(param_1 + 0x14c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x14c));
    DeleteDC(*(HDC *)(param_1 + 0x148));
  }
  if (*(LPCVOID *)(param_1 + 0x180) != (LPCVOID)0x0) {
    FUN_0043c910(*(LPCVOID *)(param_1 + 0x180),0);
  }
  puVar2 = (undefined4 *)(param_1 + 0x148);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (*(HGDIOBJ *)(param_1 + 0x188) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x188));
    DeleteDC(*(HDC *)(param_1 + 0x184));
  }
  puVar2 = (undefined4 *)(param_1 + 0x184);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (*(HGDIOBJ *)(param_1 + 0x1c4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1c4));
    DeleteDC(*(HDC *)(param_1 + 0x1c0));
  }
  puVar2 = (undefined4 *)(param_1 + 0x1c0);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


