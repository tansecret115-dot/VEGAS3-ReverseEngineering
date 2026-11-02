/* Module: sftrkfx1.dll
   Function: FUN_5cba35d0
   Address: 5cba35d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cba35d0(int param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x40,0x38);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    puVar1 = FUN_5cba3620(this,param_1,param_2,0);
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1 + 1 == (undefined4 *)0x0) {
        *param_2 = 0x8007000e;
      }
      return puVar1 + 1;
    }
  }
  *param_2 = 0x8007000e;
  return (undefined4 *)0x0;
}


