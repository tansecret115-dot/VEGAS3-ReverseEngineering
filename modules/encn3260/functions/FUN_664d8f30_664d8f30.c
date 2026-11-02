/* Module: encn3260.dll
   Function: FUN_664d8f30
   Address: 664d8f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d8f30(void *this,char *param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    return 0;
  }
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  FUN_664bb5e0((void *)((int)this + 0xc),param_1);
  return 1;
}


