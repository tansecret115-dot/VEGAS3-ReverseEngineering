/* Module: encn3260.dll
   Function: FUN_664b49d0
   Address: 664b49d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664b49d0(void *this,int param_1,int param_2)

{
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_664bb2c0((undefined4 *)((int)this + 0x10));
  if (*(int *)this != 0) {
    FUN_664be080(*(void **)((int)this + 8),(int *)((int)this + 4),(void *)((int)this + 0x10),
                 (undefined4 *)((int)this + 0xc));
  }
  return this;
}


