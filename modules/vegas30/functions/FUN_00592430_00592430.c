/* Module: vegas30.exe
   Function: FUN_00592430
   Address: 00592430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00592430(undefined4 *param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  hMem = GlobalAlloc(0x42,0x40);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0;
  *(undefined4 *)((int)pvVar1 + 0x10) = 0;
  *param_1 = pvVar1;
  return 1;
}


