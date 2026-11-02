/* Module: sftrans1.dll
   Function: FUN_00474750
   Address: 00474750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00474750(double *param_1,undefined4 param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_1 != (double *)0x0) {
    fVar2 = (float10)FUN_00474340(param_2);
    *param_1 = (double)fVar2;
    fVar2 = (float10)FUN_00474340(param_2);
    param_1[1] = (double)fVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    fVar3 = (float10)FUN_00474340(param_2);
    fVar1 = (float10)_DAT_00560f60;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((int)param_1 + 0x54) = 0;
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
    fVar2 = (float10)_DAT_0055e6d0;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)((int)param_1 + 100) = 0;
    param_1[9] = (double)(fVar3 * fVar1 + fVar2);
  }
  return;
}


