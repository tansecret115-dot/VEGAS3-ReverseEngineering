/* Module: auth3260.dll
   Function: FUN_627a4870
   Address: 627a4870
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_627a4870(void *this,int param_1,int param_2)

{
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_627a5be0((undefined4 *)((int)this + 0x10));
  if (*(int *)this != 0) {
    FUN_627a5660(*(void **)((int)this + 8),(int *)((int)this + 4),(void *)((int)this + 0x10),
                 (undefined4 *)((int)this + 0xc));
  }
  return this;
}


