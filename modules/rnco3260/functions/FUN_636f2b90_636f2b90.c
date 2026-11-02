/* Module: rnco3260.dll
   Function: FUN_636f2b90
   Address: 636f2b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636f2b90(void *this,undefined4 param_1)

{
  if (*(undefined4 **)((int)this + 0x60) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x60))(1);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  *(undefined4 *)((int)this + 0x60) = param_1;
  return;
}


