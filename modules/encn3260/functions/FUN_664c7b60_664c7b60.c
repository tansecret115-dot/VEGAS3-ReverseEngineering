/* Module: encn3260.dll
   Function: FUN_664c7b60
   Address: 664c7b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c7b60(void *this,undefined4 param_1)

{
  undefined4 *this_00;
  
  *(undefined4 *)((int)this + 0x52) = param_1;
  this_00 = FUN_664ca810(param_1,1);
  *(undefined4 **)((int)this + 0x60) = this_00;
  FUN_664caa60(this_00,this);
  return 0;
}


