/* Module: vegas30.exe
   Function: FUN_004aaca0
   Address: 004aaca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004aaca0(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 < 1) {
    return (undefined4 *)0x0;
  }
  uVar2 = param_1 * 0x68 + 0xd8;
  hMem = GlobalAlloc(0x40,uVar2);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar1[2] = param_1;
  }
  return puVar1;
}


