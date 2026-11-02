/* Module: pngu3266.dll
   Function: FUN_60622340
   Address: 60622340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_60622340(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 - 1U < **(uint **)((int)this + 0x820)) {
    puVar1 = *(undefined4 **)((*(uint **)((int)this + 0x820))[4] + (param_1 - 1U) * 4);
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 1;
    (**(code **)(*(int *)this + 0x14))(*puVar1);
    return 1;
  }
  return 0;
}


