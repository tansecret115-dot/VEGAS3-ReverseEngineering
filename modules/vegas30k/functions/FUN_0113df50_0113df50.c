/* Module: vegas30k.dll
   Function: FUN_0113df50
   Address: 0113df50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0113df50(undefined4 *param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_011e6cd0;
  param_1[3] = param_3;
  param_1[4] = 0;
  if (param_3 != 0) {
    pvVar1 = calloc(1,param_3 << 2);
    param_1[4] = pvVar1;
    uVar2 = 0;
    if (param_1[3] != 0) {
      do {
        *(undefined4 *)(param_1[4] + uVar2 * 4) = *(undefined4 *)(param_2 + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[3]);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}


