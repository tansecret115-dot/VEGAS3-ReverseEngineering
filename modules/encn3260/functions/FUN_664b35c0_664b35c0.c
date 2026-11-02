/* Module: encn3260.dll
   Function: FUN_664b35c0
   Address: 664b35c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b35c0(void *this,int *param_1)

{
  if (*param_1 < *(int *)((int)this + 0x1184)) {
    *(int *)((int)this + 0x1184) = *param_1;
  }
  if (param_1[1] < *(int *)((int)this + 0x1188)) {
    *(int *)((int)this + 0x1188) = param_1[1];
  }
  if (*(int *)((int)this + 0x118c) < param_1[2]) {
    *(int *)((int)this + 0x118c) = param_1[2];
  }
  if (*(int *)((int)this + 0x1190) < param_1[3]) {
    *(int *)((int)this + 0x1190) = param_1[3];
  }
  return;
}


