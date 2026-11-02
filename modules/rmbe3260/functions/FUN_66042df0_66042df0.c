/* Module: rmbe3260.dll
   Function: FUN_66042df0
   Address: 66042df0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_66042df0(void *this,uint param_1)

{
  bool bVar1;
  uint local_14 [2];
  uint local_c [2];
  
  bVar1 = true;
  if (*(int **)((int)this + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 4) + 0x14))(local_c);
    if (local_c[0] < param_1) {
      local_c[0] = param_1;
      (**(code **)(**(int **)((int)this + 4) + 0x10))(local_c,local_14);
      bVar1 = param_1 <= local_14[0];
    }
  }
  return bVar1;
}


