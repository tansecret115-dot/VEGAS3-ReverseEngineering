/* Module: rmto3260.dll
   Function: FUN_662c2120
   Address: 662c2120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662c2120(void *this,int *param_1)

{
  (**(code **)(*param_1 + 0x20))
            (param_1,(-(*(int *)((int)this + 0x50) != 0) & 8U) +
                     (*(int *)((int)this + 0x4c) != 0) + (-(*(int *)((int)this + 0x54) != 0) & 2U));
  return;
}


