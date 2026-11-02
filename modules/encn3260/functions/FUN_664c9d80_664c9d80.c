/* Module: encn3260.dll
   Function: FUN_664c9d80
   Address: 664c9d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c9d80(void *this,undefined4 param_1,int param_2,int *param_3)

{
  int *this_00;
  
  this_00 = *(int **)((int)this + 4);
  if (this_00 != (int *)0x0) {
    switch(param_1) {
    case 0:
      FUN_664c95e0(this_00,1);
      return;
    case 1:
      FUN_664c98e0(this_00);
      return;
    case 2:
      FUN_664c94c0(this_00,param_2);
      return;
    case 3:
      FUN_664c9480(this_00,param_2);
      return;
    case 5:
      FUN_664c9510(this_00,param_3);
    case 4:
      FUN_664c9580(*(int *)((int)this + 4));
    }
  }
  return;
}


