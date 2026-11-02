/* Module: sfxpfx1.dll
   Function: FUN_5c97a7cc
   Address: 5c97a7cc
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5c97a7cc(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_5c97a66e((void *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = param_3;
  return (int)this;
}


