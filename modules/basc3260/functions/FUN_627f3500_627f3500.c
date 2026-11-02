/* Module: basc3260.dll
   Function: FUN_627f3500
   Address: 627f3500
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_627f3500(void *this,int param_1,int param_2)

{
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_627f4610((undefined4 *)((int)this + 0x10));
  if (*(int *)this != 0) {
    FUN_627f4210(*(void **)((int)this + 8),(int *)((int)this + 4),(void *)((int)this + 0x10),
                 (undefined4 *)((int)this + 0xc));
  }
  return this;
}


