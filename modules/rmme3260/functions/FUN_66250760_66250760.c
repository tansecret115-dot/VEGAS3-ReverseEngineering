/* Module: rmme3260.dll
   Function: FUN_66250760
   Address: 66250760
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66250760(void *this,int param_1)

{
  FUN_662506b0(this,param_1);
  *(int *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)(*(int *)this + -8) + *(int *)this) = 0;
  return *(int *)this;
}


