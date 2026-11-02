/* Module: pngu3266.dll
   Function: FUN_606229d0
   Address: 606229d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_606229d0(void *this,int param_1,undefined4 param_2,byte param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 4) != 0) {
    return -0x7ffbfff7;
  }
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  if ((param_3 & 1) != 0) {
    *(undefined4 *)((int)this + 0x18) = 4;
  }
  bVar1 = FUN_60622cc0((int)this);
  return (-(uint)(CONCAT31(extraout_var,bVar1) != 0) & 0x7fffbffb) + 0x80004005;
}


