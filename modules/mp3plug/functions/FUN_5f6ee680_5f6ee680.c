/* Module: mp3plug.dll
   Function: FUN_5f6ee680
   Address: 5f6ee680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ee680(void)

{
  int *in_EAX;
  
  if (in_EAX != (int *)0x0) {
    if (*in_EAX != 0) {
      FUN_5f6d97a0(*in_EAX);
    }
    if (in_EAX[1] != 0) {
      FUN_5f6d97a0(in_EAX[1]);
    }
    if (in_EAX[2] != 0) {
      FUN_5f6d97a0(in_EAX[2]);
    }
    if (in_EAX[3] != 0) {
      FUN_5f6d97a0(in_EAX[3]);
    }
  }
  return;
}


