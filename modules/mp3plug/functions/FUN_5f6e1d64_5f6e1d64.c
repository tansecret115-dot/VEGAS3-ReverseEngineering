/* Module: mp3plug.dll
   Function: FUN_5f6e1d64
   Address: 5f6e1d64
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e1d64(void)

{
  void *in_EAX;
  
  if (in_EAX != (void *)0x0) {
    if (*(void **)((int)in_EAX + 0x44) != (void *)0x0) {
      FUN_5f6f89b0(*(void **)((int)in_EAX + 0x44));
    }
    if (*(void **)((int)in_EAX + 0x48) != (void *)0x0) {
      FUN_5f6f89b0(*(void **)((int)in_EAX + 0x48));
    }
    free(in_EAX);
  }
  return;
}


