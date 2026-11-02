/* Module: vfplugs.dll
   Function: FUN_0041a360
   Address: 0041a360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041a360(double *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float local_18 [5];
  
  if ((param_2 != 0) && (param_1 != (double *)0x0)) {
    FUN_0041a2e0(local_18,param_2,param_3);
    FUN_00450210(param_1,local_18);
    if (((_DAT_00487598 == param_1[1]) || (_DAT_00487598 == param_1[2])) ||
       ((*(int *)(param_1 + 2) == 0 && (*(int *)((int)param_1 + 0x14) == 0x3ff00000)))) {
      uVar1 = *(undefined4 *)(param_2 + 0x14c);
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x148);
      *(undefined4 *)((int)param_1 + 4) = uVar1;
    }
    if ((_DAT_00487598 == param_1[2]) ||
       ((*(int *)(param_1 + 2) == 0 && (*(int *)((int)param_1 + 0x14) == 0x3ff00000)))) {
      uVar1 = *(undefined4 *)(param_2 + 0x154);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x150);
      *(undefined4 *)((int)param_1 + 0xc) = uVar1;
    }
    return 1;
  }
  return 0;
}


