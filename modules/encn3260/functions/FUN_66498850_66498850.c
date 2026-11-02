/* Module: encn3260.dll
   Function: FUN_66498850
   Address: 66498850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66498850(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))(this);
  if (param_1 == 0) {
    (**(code **)(**(int **)((int)this + 0x10) + 0xc))(*(int **)((int)this + 0x10),0x80040fc4);
  }
  (**(code **)(*(int *)this + 8))(this);
  return;
}


