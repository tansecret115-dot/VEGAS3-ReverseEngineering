/* Module: mp3plug.dll
   Function: FUN_5f6ecde4
   Address: 5f6ecde4
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ecde4(void)

{
  int *in_EAX;
  
  if (in_EAX != (int *)0x0) {
    if (*in_EAX != 0) {
      FUN_5f705200(*in_EAX);
    }
    if (in_EAX[1] != 0) {
      FUN_5f705200(in_EAX[1]);
    }
    if (in_EAX[2] != 0) {
      FUN_5f705730(in_EAX[2]);
    }
    if (in_EAX[3] != 0) {
      FUN_5f705730(in_EAX[3]);
    }
    if ((int *)in_EAX[4] != (int *)0x0) {
      FUN_5f705a20((int *)in_EAX[4]);
    }
    if ((int *)in_EAX[5] != (int *)0x0) {
      FUN_5f705a20((int *)in_EAX[5]);
    }
    if ((undefined4 *)in_EAX[6] != (undefined4 *)0x0) {
      FUN_5f705e50((undefined4 *)in_EAX[6]);
    }
    if (in_EAX[7] != 0) {
      FUN_5f706420(in_EAX[7]);
    }
    FUN_5f6d97a0((int)in_EAX);
  }
  return;
}


