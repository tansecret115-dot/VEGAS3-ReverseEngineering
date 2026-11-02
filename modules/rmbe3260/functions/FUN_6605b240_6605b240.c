/* Module: rmbe3260.dll
   Function: FUN_6605b240
   Address: 6605b240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_6605b240(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6)

{
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int **)((int)this + 0x18) = param_6;
  if (param_6 != (int *)0x0) {
    (**(code **)(*param_6 + 4))();
  }
  return this;
}


