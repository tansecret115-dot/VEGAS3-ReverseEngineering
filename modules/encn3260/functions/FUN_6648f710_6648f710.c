/* Module: encn3260.dll
   Function: FUN_6648f710
   Address: 6648f710
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6648f710(void *this,void *param_1,int param_2)

{
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(void **)((int)this + 8) = param_1;
  *(int *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x10) = 0;
  if (param_2 != 0) {
    FUN_664bbeb0(param_1,(int *)((int)this + 4),(int *)((int)this + 0x10),(int *)((int)this + 0xc));
  }
  return this;
}


