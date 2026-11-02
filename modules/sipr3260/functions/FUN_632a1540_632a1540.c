/* Module: sipr3260.dll
   Function: FUN_632a1540
   Address: 632a1540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_632a1540(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(code **)((int)this + 0x71) != (code *)0x0) {
    (**(code **)((int)this + 0x71))(*(undefined4 *)((int)this + 0x45),param_1,param_2);
  }
  return;
}


