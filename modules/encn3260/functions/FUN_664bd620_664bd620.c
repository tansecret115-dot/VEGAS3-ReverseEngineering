/* Module: encn3260.dll
   Function: FUN_664bd620
   Address: 664bd620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664bd620(void *this,char *param_1,char *param_2,int param_3)

{
  void *this_00;
  undefined4 *this_01;
  
  this_00 = operator_new(0x28);
  if (this_00 == (void *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    this_01 = FUN_664be3d0(this_00,param_1);
  }
  FUN_664be470(this_01,param_2);
  FUN_664bd5f0(this,this_01,param_3);
  return;
}


