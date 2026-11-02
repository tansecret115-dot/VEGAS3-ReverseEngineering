/* Module: mp3plug.dll
   Function: FUN_5f691390
   Address: 5f691390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f691390(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x40,0x1728);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_5f68c8b0(puVar1);
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar1;
  return (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


