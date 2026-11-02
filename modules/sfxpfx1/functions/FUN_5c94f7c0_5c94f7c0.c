/* Module: sfxpfx1.dll
   Function: FUN_5c94f7c0
   Address: 5c94f7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5c94f7c0(int param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x40,0x198);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    puVar1 = FUN_5c94f6b0(this,0,param_1);
    if (puVar1 == (undefined4 *)0x0) {
      *param_2 = 0x8007000e;
    }
    return puVar1;
  }
  *param_2 = 0x8007000e;
  return (undefined4 *)0x0;
}


