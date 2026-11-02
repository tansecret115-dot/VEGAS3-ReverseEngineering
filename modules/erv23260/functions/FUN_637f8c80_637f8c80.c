/* Module: erv23260.dll
   Function: FUN_637f8c80
   Address: 637f8c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f8c80(void *this,int *param_1,undefined4 param_2)

{
  if ((*(int **)((int)this + 0x2e4) != (int *)0x0) && (**(int **)((int)this + 0x2e4) != *param_1)) {
    return 0;
  }
  return param_2;
}


