/* Module: rv203260.dll
   Function: FUN_638a8900
   Address: 638a8900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_638a8900(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
            undefined1 param_5)

{
  if ((*(uint *)this & 0xf0000000) == 0) {
    FUN_638a88d0(this,param_1,param_2,param_4,param_5);
    return;
  }
  *(undefined1 *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 9) = param_2;
  *(undefined1 *)((int)this + 10) = param_3;
  *(undefined4 *)((int)this + 4) = 6;
  *(undefined4 *)((int)this + 0xb) = param_4;
  *(undefined1 *)((int)this + 0xf) = param_5;
  FUN_638a84a0((int)this);
  return;
}


