/* Module: pngu3266.dll
   Function: FUN_60622430
   Address: 60622430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_60622430(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar2 = param_1[1];
  if (param_1[4] == 0) {
    (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1);
    (**(code **)(*(int *)this + 0x14))(*param_1);
  }
  puVar3 = *(uint **)((int)this + 0x820);
  if ((param_1[5] - 1 <= *puVar3) &&
     (piVar1 = (int *)(puVar3[4] + (param_1[5] - 1) * 4), *piVar1 != 0)) {
    *piVar1 = 0;
    puVar3[2] = puVar3[2] - 1;
  }
  (**(code **)(*(int *)this + 0x1c))(&param_1);
  return uVar2;
}


