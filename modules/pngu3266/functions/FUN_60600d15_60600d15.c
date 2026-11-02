/* Module: pngu3266.dll
   Function: FUN_60600d15
   Address: 60600d15
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60600d15(void *this,int *param_1)

{
  if ((param_1 != (int *)0x0) && (*(int *)((int)this + 0xe0) != 0)) {
    (**(code **)(*param_1 + 0x30))
              (*(int *)((int)this + 0xe0),*(undefined4 *)((int)this + 0xe8),
               *(undefined4 *)((int)this + 0xec));
  }
  return;
}


