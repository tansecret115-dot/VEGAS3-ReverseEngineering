/* Module: rmto3260.dll
   Function: FUN_66305560
   Address: 66305560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66305560(void *this,char *param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    return 0;
  }
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  FUN_662ef2f0((void *)((int)this + 0xc),param_1);
  return 1;
}


