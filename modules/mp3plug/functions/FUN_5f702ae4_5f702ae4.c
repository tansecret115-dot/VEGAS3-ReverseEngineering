/* Module: mp3plug.dll
   Function: FUN_5f702ae4
   Address: 5f702ae4
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f702ae4(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    FUN_5f70d5a0(*(int *)(in_EAX + 0x20));
    FUN_5f70d790(*(int *)(in_EAX + 0x1c));
    FUN_5f70dab0(*(int *)(in_EAX + 0x24));
    FUN_5f6d97a0(in_EAX);
  }
  return;
}


