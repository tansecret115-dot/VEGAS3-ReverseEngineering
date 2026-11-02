/* Module: pngu3266.dll
   Function: FUN_605f28b6
   Address: 605f28b6
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_605f28b6(void *this,void *param_1,int param_2)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(void **)((int)this + 8) = param_1;
  if (param_2 != 0) {
    FUN_60619980(param_1,(int *)((int)this + 4),(int *)((int)this + 0x10),(int *)((int)this + 0xc));
  }
  return this;
}


