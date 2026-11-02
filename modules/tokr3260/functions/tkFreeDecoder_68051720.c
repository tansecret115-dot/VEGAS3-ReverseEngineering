/* Module: tokr3260.dll
   Function: tkFreeDecoder
   Address: 68051720
   Source: Ghidra pseudocode (Stage 10 batch) */


void tkFreeDecoder(int param_1)

{
                    /* 0x1720  7  tkFreeDecoder */
  if (param_1 != 0) {
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      free(*(void **)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(void **)(param_1 + 0x14) != (void *)0x0) {
      free(*(void **)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_68052c40(param_1 + 0x18);
  }
  return;
}


