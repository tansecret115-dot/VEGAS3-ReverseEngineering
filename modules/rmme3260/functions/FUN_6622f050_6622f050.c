/* Module: rmme3260.dll
   Function: FUN_6622f050
   Address: 6622f050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6622f050(void *this,undefined4 param_1,int param_2)

{
  void *this_00;
  
  this_00 = *(void **)((int)this + 4);
  if (this_00 != (void *)0x0) {
    switch(param_1) {
    case 2:
      FUN_6622ee20(this_00,param_2);
      return;
    case 3:
      FUN_6622ee90(this_00,param_2);
      break;
    case 4:
      FUN_6622ee80((int)this_00);
      return;
    }
  }
  return;
}


