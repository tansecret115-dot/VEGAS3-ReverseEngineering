/* Module: vidcap30.exe
   Function: FUN_00426470
   Address: 00426470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426470(int *param_1)

{
  if ((*param_1 == 8) && ((param_1[0x53] & 0x40U) != 0)) {
    (**(code **)(*(int *)param_1[0xf3] + 0x3c))((int *)param_1[0xf3],0x1328);
  }
  return;
}


