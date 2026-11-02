/* Module: mp3plug.dll
   Function: FUN_5f6daa24
   Address: 5f6daa24
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6daa24(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    if (*(int **)(in_EAX + 0x110) != (int *)0x0) {
      FUN_5f6e5e30(*(int **)(in_EAX + 0x110));
    }
    if (*(int **)(in_EAX + 0x114) != (int *)0x0) {
      FUN_5f6e5e30(*(int **)(in_EAX + 0x114));
    }
    if (*(int **)(in_EAX + 0x118) != (int *)0x0) {
      FUN_5f6e5e30(*(int **)(in_EAX + 0x118));
    }
    FUN_5f6d97a0(in_EAX);
  }
  return;
}


