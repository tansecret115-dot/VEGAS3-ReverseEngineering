/* Module: encn3260.dll
   Function: FUN_664c6760
   Address: 664c6760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c6760(void *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 100) = 5;
    if (*(undefined4 **)((int)this + 0x12) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x12))(2,0,0);
    }
  }
  else {
    *(undefined4 *)((int)this + 100) = 6;
    if (*(undefined4 **)((int)this + 0x12) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x12))(2,1,0);
      return;
    }
  }
  return;
}


