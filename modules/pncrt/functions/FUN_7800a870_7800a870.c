/* Module: pncrt.dll
   Function: FUN_7800a870
   Address: 7800a870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800a870(uint param_1)

{
  ulong *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = __doserrno();
  iVar4 = 0;
  *puVar1 = param_1;
  puVar2 = &DAT_7803d250;
  do {
    if (param_1 == *puVar2) {
      piVar3 = _errno();
      *piVar3 = *(int *)(iVar4 * 8 + 0x7803d254);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + 1;
  } while (puVar2 < &DAT_7803d3b8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    piVar3 = _errno();
    *piVar3 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    piVar3 = _errno();
    *piVar3 = 8;
    return;
  }
  piVar3 = _errno();
  *piVar3 = 0x16;
  return;
}


