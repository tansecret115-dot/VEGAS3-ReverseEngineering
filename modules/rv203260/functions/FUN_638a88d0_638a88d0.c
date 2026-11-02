/* Module: rv203260.dll
   Function: FUN_638a88d0
   Address: 638a88d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_638a88d0(void *this,undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined1 *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 9) = param_2;
  *(undefined4 *)((int)this + 4) = 5;
  *(undefined4 *)((int)this + 10) = param_3;
  *(undefined1 *)((int)this + 0xe) = param_4;
  FUN_638a84a0((int)this);
  return;
}


