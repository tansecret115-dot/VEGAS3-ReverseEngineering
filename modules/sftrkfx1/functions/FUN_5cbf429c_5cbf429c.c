/* Module: sftrkfx1.dll
   Function: FUN_5cbf429c
   Address: 5cbf429c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5cbf429c(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_5cbf413e((void *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = param_3;
  return (int)this;
}


