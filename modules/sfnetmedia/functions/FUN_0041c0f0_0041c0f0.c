/* Module: sfnetmedia.dll
   Function: FUN_0041c0f0
   Address: 0041c0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


HGLOBAL FUN_0041c0f0(HGLOBAL param_1)

{
  SIZE_T dwBytes;
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  dwBytes = GlobalSize(param_1);
  hMem = GlobalAlloc(2,dwBytes);
  if (hMem != (HGLOBAL)0x0) {
    puVar1 = GlobalLock(param_1);
    puVar2 = GlobalLock(hMem);
    for (uVar3 = dwBytes >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = dwBytes & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    return hMem;
  }
  return (HGLOBAL)0x0;
}


