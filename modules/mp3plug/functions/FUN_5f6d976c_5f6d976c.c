/* Module: mp3plug.dll
   Function: FUN_5f6d976c
   Address: 5f6d976c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6d976c(void)

{
  int in_EAX;
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = malloc(in_EAX + 0x14);
  uVar2 = (int)pvVar1 + 4;
  if ((uVar2 & 0xf) != 0) {
    uVar2 = (int)pvVar1 + (0x14 - (uVar2 & 0xf));
    *(void **)(uVar2 - 4) = pvVar1;
  }
  *(void **)(uVar2 - 4) = pvVar1;
  return;
}


