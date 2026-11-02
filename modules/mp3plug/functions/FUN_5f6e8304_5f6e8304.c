/* Module: mp3plug.dll
   Function: FUN_5f6e8304
   Address: 5f6e8304
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e8304(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    if (*(int *)(in_EAX + 0x530) != 0) {
      FUN_5f6d97a0(*(int *)(in_EAX + 0x530));
    }
    if (*(int *)(in_EAX + 0xc) != 0) {
      FUN_5f6d97a0(*(int *)(in_EAX + 0x14));
    }
    if (*(int *)(in_EAX + 0x14) != 0) {
      FUN_5f6d97a0(*(int *)(in_EAX + 0xc));
    }
    if (*(int *)(in_EAX + 0x10) != 0) {
      FUN_5f6d97a0(*(int *)(in_EAX + 0x10));
    }
    if (*(int *)(in_EAX + 0x18) != 0) {
      FUN_5f6d97a0(*(int *)(in_EAX + 0x18));
    }
    if (*(int *)(in_EAX + 0x534) != 0) {
      FUN_5f6d97a0(*(int *)(in_EAX + 0x534));
    }
    FUN_5f6d97a0(in_EAX);
  }
  return;
}


