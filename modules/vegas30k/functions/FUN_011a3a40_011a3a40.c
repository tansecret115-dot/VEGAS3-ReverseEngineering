/* Module: vegas30k.dll
   Function: FUN_011a3a40
   Address: 011a3a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011a3a40(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  *param_1 = &PTR_LAB_011eae2c;
  param_1[1] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    pvVar2 = calloc(1,param_3 << 2);
    param_1[2] = pvVar2;
    uVar3 = 0;
    if (param_1[3] != 0) {
      do {
        iVar1 = param_1[4];
        param_1[4] = iVar1 + 1;
        (**(code **)(*(int *)*param_2 + 100))((int *)*param_2,param_1[2] + iVar1 * 4);
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 1;
      } while (uVar3 < (uint)param_1[3]);
      param_1[4] = 0;
      return param_1;
    }
  }
  param_1[4] = 0;
  return param_1;
}


