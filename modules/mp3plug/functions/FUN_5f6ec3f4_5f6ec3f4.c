/* Module: mp3plug.dll
   Function: FUN_5f6ec3f4
   Address: 5f6ec3f4
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ec3f4(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    FUN_5f702ae0(*(int *)(in_EAX + 4));
    FUN_5f702ae0(*(int *)(in_EAX + 8));
    FUN_5f704c10(*(int **)(in_EAX + 0xc));
    FUN_5f704c10(*(int **)(in_EAX + 0x10));
    FUN_5f704eb0(*(int *)(in_EAX + 0x1e8));
    FUN_5f704eb0(*(int *)(in_EAX + 0x1ec));
    FUN_5f6d97a0(in_EAX);
  }
  return;
}


