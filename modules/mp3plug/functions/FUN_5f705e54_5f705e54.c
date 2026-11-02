/* Module: mp3plug.dll
   Function: FUN_5f705e54
   Address: 5f705e54
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f705e54(void)

{
  int *in_EAX;
  
  if (in_EAX == (int *)0x0) {
    return;
  }
  FUN_5f705730(*in_EAX);
  if (in_EAX[2] != 0) {
    FUN_5f6d97a0(in_EAX[2]);
  }
  if (in_EAX[3] != 0) {
    FUN_5f6d97a0(in_EAX[3]);
  }
  FUN_5f6d97a0((int)in_EAX);
  return;
}


