/* Module: sftrans1.dll
   Function: FUN_004743a0
   Address: 004743a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_004743a0(double *param_1,double param_2,undefined4 param_3)

{
  void *pvVar1;
  float10 fVar2;
  
  pvVar1 = (void *)0x0;
  *param_1 = param_1[3] + *param_1;
  param_1[1] = param_1[4] + param_1[1];
  param_1[2] = param_1[5] + param_1[2];
  param_1[6] = param_2 + param_1[6];
  if (_DAT_00555910 < param_1[10]) {
    fVar2 = (float10)FUN_00474340(param_3);
    if (fVar2 * (float10)param_1[0xb] + (float10)param_1[10] < (float10)param_1[6]) {
      pvVar1 = calloc(1,0x68);
    }
  }
  if ((_DAT_00555910 <= param_1[9]) && (param_1[9] < param_1[6])) {
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((int)param_1 + 0x34) = 0xbff00000;
  }
  return pvVar1;
}


