/* Module: rmme3260.dll
   Function: FUN_6625e0d0
   Address: 6625e0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6625e0d0(void *this,undefined4 param_1,int param_2,int *param_3)

{
  int *this_00;
  
  this_00 = *(int **)((int)this + 4);
  if (this_00 != (int *)0x0) {
    switch(param_1) {
    case 0:
      FUN_6625d930(this_00,1);
      return;
    case 1:
      FUN_6625dc30(this_00);
      return;
    case 2:
      FUN_6625d810(this_00,param_2);
      return;
    case 3:
      FUN_6625d7d0(this_00,param_2);
      return;
    case 5:
      FUN_6625d860(this_00,param_3);
    case 4:
      FUN_6625d8d0(*(int *)((int)this + 4));
    }
  }
  return;
}


