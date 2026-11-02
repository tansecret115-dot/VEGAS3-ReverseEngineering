/* Module: encn3260.dll
   Function: FUN_664ae1b0
   Address: 664ae1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664ae1b0(void *this,int *param_1,undefined4 param_2)

{
  *(int **)this = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined4 *)((int)this + 0xc) = param_2;
  (**(code **)*param_1)(param_1,&DAT_664dcda0,(int)this + 4);
  (**(code **)*param_1)(param_1,&DAT_664dce30,(int)this + 8);
  return this;
}


