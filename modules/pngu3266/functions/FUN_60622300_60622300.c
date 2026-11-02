/* Module: pngu3266.dll
   Function: FUN_60622300
   Address: 60622300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60622300(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 - 1U < **(uint **)((int)this + 0x820)) {
    puVar1 = *(undefined4 **)((*(uint **)((int)this + 0x820))[4] + (param_1 - 1U) * 4);
    puVar1[4] = 1;
    (**(code **)(*(int *)this + 0x14))(*puVar1);
    return;
  }
  uRam00000010 = 1;
  (**(code **)(*(int *)this + 0x14))(uRam00000000);
  return;
}


