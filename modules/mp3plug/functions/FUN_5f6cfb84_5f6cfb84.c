/* Module: mp3plug.dll
   Function: FUN_5f6cfb84
   Address: 5f6cfb84
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6cfb84(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (in_EAX != (undefined4 *)0x0) {
    if (in_EAX[0x13] != 0) {
      FUN_5f6d97a0(in_EAX[0x13]);
    }
    if (in_EAX[0x16] != 0) {
      FUN_5f6d97a0(in_EAX[0x16]);
    }
    if (in_EAX[2] != 0) {
      FUN_5f6daa20(in_EAX[2]);
    }
    if (in_EAX[1] != 0) {
      FUN_5f6db8d0(in_EAX[1]);
    }
    if ((int *)*in_EAX != (int *)0x0) {
      FUN_5f6dc040((int *)*in_EAX);
    }
    if (in_EAX[3] != 0) {
      FUN_5f6dc470(in_EAX[3]);
    }
    FUN_5f6ddb50((int)(in_EAX + 0x1a));
    puVar2 = in_EAX;
    for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_5f6d97a0((int)in_EAX);
  }
  return;
}


