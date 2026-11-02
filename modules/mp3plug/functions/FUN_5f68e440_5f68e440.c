/* Module: mp3plug.dll
   Function: FUN_5f68e440
   Address: 5f68e440
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f68e440(void *this,int param_1)

{
  if ((2 < param_1) && (*(short *)(*(int *)(*(int *)((int)this + 0x2c) + 0x424) + 2) != 2)) {
    param_1 = param_1 + 4;
  }
  return param_1;
}


