/* Module: mp3plug.dll
   Function: FUN_5f68ded0
   Address: 5f68ded0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f68ded0(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x40,0x814);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_5f6868f0(puVar1);
    *puVar1 = &PTR_FUN_5f72cc8c;
    puVar1[1] = &PTR_LAB_5f72cc68;
    puVar1[0x204] = 0;
  }
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  return (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


