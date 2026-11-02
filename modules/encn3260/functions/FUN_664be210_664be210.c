/* Module: encn3260.dll
   Function: FUN_664be210
   Address: 664be210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664be210(void *this,char *param_1,char *param_2)

{
  undefined4 *this_00;
  
  this_00 = operator_new(0x18);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_664bb2c0(this_00);
    FUN_664bb2c0(this_00 + 3);
  }
  FUN_664bb5e0(this_00,param_1);
  FUN_664bb5e0(this_00 + 3,param_2);
  FUN_664baab0((void *)((int)this + 4),this_00);
  return;
}


