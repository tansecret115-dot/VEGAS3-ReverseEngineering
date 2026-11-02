/* Module: mp3plug.dll
   Function: FUN_5f705204
   Address: 5f705204
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f705204(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    if (*(int *)(in_EAX + 0xc) != 0) {
      FUN_5f6d97a0(*(int *)(in_EAX + 0xc));
    }
    FUN_5f6d97a0(in_EAX);
  }
  return;
}


