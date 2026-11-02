/* Module: rmme3260.dll
   Function: FUN_6625b220
   Address: 6625b220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625b220(void *this,undefined4 param_1)

{
  undefined4 *this_00;
  
  *(undefined4 *)((int)this + 0x52) = param_1;
  this_00 = FUN_6625ebf0(param_1,1);
  *(undefined4 **)((int)this + 0x60) = this_00;
  FUN_6625ee40(this_00,this);
  return 0;
}


