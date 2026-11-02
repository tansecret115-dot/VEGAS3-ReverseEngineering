/* Module: erv23260.dll
   Function: FUN_637ff820
   Address: 637ff820
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_637ff820(void *this,int param_1,int *param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = FUN_637f2000(param_1 * 8);
  *(int *)this = iVar1;
  *param_2 = (-(uint)(iVar1 != 0) & 0xfffffffe) + 2;
  return this;
}


