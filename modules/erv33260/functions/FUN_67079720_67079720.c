/* Module: erv33260.dll
   Function: FUN_67079720
   Address: 67079720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67079720(void *this,int *param_1)

{
  if ((*(char *)((int)this + 0x2bd) != '\0') && (*param_1 == 2)) {
    *param_1 = 1;
  }
  if ((*(char *)((int)this + 0x22d) != '\0') && (*param_1 == 1)) {
    *param_1 = 0;
    return;
  }
  if ((*(char *)((int)this + 0x22c) != '\0') && (*param_1 = 0, *(char *)((int)this + 700) == '\0'))
  {
    FUN_6707bae0(*(undefined4 **)((int)this + 0x170));
    *(undefined4 *)((int)this + 0x31c) = 0;
  }
  return;
}


