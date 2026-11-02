/* Module: sftrans1.dll
   Function: FUN_004745f0
   Address: 004745f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004745f0(undefined4 *param_1,undefined4 param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
    fVar3 = (float10)FUN_00474340(param_2);
    fVar2 = (float10)_DAT_00562460;
    param_1[0x14] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x17] = 0;
    fVar1 = (float10)_DAT_00562458;
    param_1[0x18] = 4;
    param_1[0x19] = 0;
    *(double *)(param_1 + 0x12) = (double)(fVar3 * fVar2 + fVar1);
  }
  return;
}


