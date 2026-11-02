/* Module: encn3260.dll
   Function: FUN_664be470
   Address: 664be470
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664be470(void *this,char *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  
  this_00 = operator_new(0x1c);
  if (this_00 != (void *)0x0) {
    puVar1 = FUN_664be1c0(this_00,param_1);
    FUN_664be450(this,puVar1);
    return;
  }
  FUN_664be450(this,0);
  return;
}


