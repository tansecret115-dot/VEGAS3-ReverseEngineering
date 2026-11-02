/* Module: erv23260.dll
   Function: FUN_63822404
   Address: 63822404
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63822404(void)

{
  int in_EAX;
  undefined8 in_MM2;
  int in_stack_0000001c;
  
  if (in_stack_0000001c != 0) {
    if ((in_stack_0000001c == 4) && (in_EAX < -0x20)) {
      in_EAX = -0x20;
    }
    else if ((in_stack_0000001c == 8) && (0x20 < in_EAX)) {
      in_EAX = 0x20;
    }
    pmaddwd((ulonglong)(uint)(in_EAX >> 1),in_MM2);
  }
  return;
}


