/* Module: rmto3260.dll
   Function: FUN_662f2890
   Address: 662f2890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662f2890(void *this,char *param_1)

{
  void *this_00;
  int *piVar1;
  
  this_00 = operator_new(8);
  if (this_00 != (void *)0x0) {
    piVar1 = FUN_662f2360(this_00,param_1);
    *(int **)((int)this + 4) = piVar1;
    return;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


