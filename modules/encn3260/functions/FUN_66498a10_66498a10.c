/* Module: encn3260.dll
   Function: FUN_66498a10
   Address: 66498a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66498a10(void *this,undefined4 param_1,int param_2)

{
  void *this_00;
  
  this_00 = *(void **)((int)this + 4);
  if (this_00 != (void *)0x0) {
    switch(param_1) {
    case 2:
      FUN_664987e0(this_00,param_2);
      return;
    case 3:
      FUN_66498850(this_00,param_2);
      break;
    case 4:
      FUN_66498840((int)this_00);
      return;
    }
  }
  return;
}


