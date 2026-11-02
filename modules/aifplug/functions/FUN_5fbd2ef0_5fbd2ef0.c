/* Module: aifplug.dll
   Function: FUN_5fbd2ef0
   Address: 5fbd2ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5fbd2f5f) */
/* WARNING: Removing unreachable block (ram,0x5fbd2f67) */

undefined4 __fastcall FUN_5fbd2ef0(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0x214) == 0) {
    return 0x8000ffff;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x220);
    *(int *)(param_1 + 0x88) = iVar2 + 0x220;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    hMem = GlobalAlloc(0x42,0x20);
    puVar1 = GlobalLock(hMem);
    *(undefined4 **)(param_1 + 0x54) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    puVar3 = puVar1;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = 0x20;
    puVar1[1] = puVar1[1] & 0xfffffffe;
  }
  return 0;
}


