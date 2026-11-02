/* Module: mp3plug.dll
   Function: FUN_5f6e0d04
   Address: 5f6e0d04
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e0d04(void)

{
  void *in_EAX;
  
  if (in_EAX != (void *)0x0) {
    if (*(void **)((int)in_EAX + 4) != (void *)0x0) {
      free(*(void **)((int)in_EAX + 4));
    }
    if (*(void **)((int)in_EAX + 8) != (void *)0x0) {
      free(*(void **)((int)in_EAX + 8));
    }
    if (*(void **)((int)in_EAX + 0x14) != (void *)0x0) {
      free(*(void **)((int)in_EAX + 0x14));
    }
    if (*(void **)((int)in_EAX + 0x18) != (void *)0x0) {
      free(*(void **)((int)in_EAX + 0x18));
    }
    if (*(void **)((int)in_EAX + 0xc) != (void *)0x0) {
      free(*(void **)((int)in_EAX + 0xc));
    }
    if (*(void **)((int)in_EAX + 0x10) != (void *)0x0) {
      free(*(void **)((int)in_EAX + 0x10));
    }
    free(in_EAX);
  }
  return;
}


