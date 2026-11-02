/* Module: sftrkfx1.dll
   Function: FUN_5cbab900
   Address: 5cbab900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbab900(undefined4 param_1,int param_2)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x42,0x40a8);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (param_2 != 0) {
    puVar1[0x21] = param_2;
    puVar1[0x20] = 1;
  }
  *puVar1 = param_1;
  return;
}


