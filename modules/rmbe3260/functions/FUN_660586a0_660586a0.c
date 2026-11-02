/* Module: rmbe3260.dll
   Function: FUN_660586a0
   Address: 660586a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660586a0(void *this,char *param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    return 0;
  }
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  FUN_6605b970((void *)((int)this + 0xc),param_1);
  return 1;
}


