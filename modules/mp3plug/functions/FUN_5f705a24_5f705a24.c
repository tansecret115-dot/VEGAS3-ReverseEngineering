/* Module: mp3plug.dll
   Function: FUN_5f705a24
   Address: 5f705a24
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f705a24(void)

{
  int *in_EAX;
  
  if (in_EAX != (int *)0x0) {
    if (*in_EAX != 0) {
      FUN_5f6d97a0(*in_EAX);
    }
    FUN_5f6d97a0((int)in_EAX);
  }
  return;
}


