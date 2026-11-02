/* Module: rn5a3260.dll
   Function: FUN_628a4630
   Address: 628a4630
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_628a4630(void *this,int param_1,int param_2)

{
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_628a5490((undefined4 *)((int)this + 0x10));
  if (*(int *)this != 0) {
    FUN_628a5340(*(void **)((int)this + 8),(int *)((int)this + 4),(void *)((int)this + 0x10),
                 (undefined4 *)((int)this + 0xc));
  }
  return this;
}


