/* Module: mp3plug.dll
   Function: FUN_5f6d9760
   Address: 5f6d9760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6d9760(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = malloc(param_1 + 0x14);
  uVar2 = (int)pvVar1 + 4;
  if ((uVar2 & 0xf) != 0) {
    uVar2 = (int)pvVar1 + (0x14 - (uVar2 & 0xf));
    *(void **)(uVar2 - 4) = pvVar1;
  }
  *(void **)(uVar2 - 4) = pvVar1;
  return;
}


