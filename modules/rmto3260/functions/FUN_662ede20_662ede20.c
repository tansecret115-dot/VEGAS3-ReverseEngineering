/* Module: rmto3260.dll
   Function: FUN_662ede20
   Address: 662ede20
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_662ede20(void *this,int param_1,int param_2)

{
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_662eefd0((undefined4 *)((int)this + 0x10));
  if (*(int *)this != 0) {
    FUN_662eeaf0(*(void **)((int)this + 8),(int *)((int)this + 4),(void *)((int)this + 0x10),
                 (undefined4 *)((int)this + 0xc));
  }
  return this;
}


