/* Module: encn3260.dll
   Function: FUN_6649d9c0
   Address: 6649d9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6649d9c0(void *this,int param_1)

{
  int *this_00;
  
  if (((*(byte *)((int)this + 0xc) & 2) == 0) &&
     (this_00 = *(int **)((int)this + 0x11), this_00 != (int *)0x0)) {
    (**(code **)(*this_00 + 4))(this_00);
    FUN_66496bb0(this_00,param_1);
    (**(code **)(*this_00 + 8))(this_00);
  }
  return 0;
}


