/* Module: rmbe3260.dll
   Function: FUN_6603d660
   Address: 6603d660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6603d660(void *this,int *param_1)

{
  if (*param_1 == 100) {
    FUN_6603d690((int)this);
  }
  else if (*param_1 == 0x65) {
    *(undefined4 *)((int)this + 0x58) = 1;
    return;
  }
  return;
}


