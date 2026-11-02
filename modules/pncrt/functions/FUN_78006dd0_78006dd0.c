/* Module: pncrt.dll
   Function: FUN_78006dd0
   Address: 78006dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_78006dd0(void *this,int param_1)

{
  if ((param_1 < 0) || (9 < param_1)) {
    return (int *)((int)this + 0x2c);
  }
  if ((*(int *)this != -1) && (param_1 <= *(int *)this)) {
    return *(int **)((int)this + param_1 * 4 + 4);
  }
  return (int *)((int)this + 0x34);
}


