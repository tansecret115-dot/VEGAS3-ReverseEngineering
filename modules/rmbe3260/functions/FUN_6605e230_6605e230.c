/* Module: rmbe3260.dll
   Function: FUN_6605e230
   Address: 6605e230
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6605e230(void *this,int param_1,int param_2)

{
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_6605b650((undefined4 *)((int)this + 0x10));
  if (*(int *)this != 0) {
    FUN_6605cd20(*(void **)((int)this + 8),(int *)((int)this + 4),(void *)((int)this + 0x10),
                 (undefined4 *)((int)this + 0xc));
  }
  return this;
}


