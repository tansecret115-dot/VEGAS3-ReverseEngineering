/* Module: sfppack2.dll
   Function: FUN_5cd3f271
   Address: 5cd3f271
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cd3f271(void *this,undefined4 param_1,int param_2)

{
  FUN_5cd3f21c((undefined4 *)((int)this + 4));
  if (param_2 == 0) {
    param_2 = (int)this;
  }
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  return (int)this;
}


