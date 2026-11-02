/* Module: vidpcore.dll
   Function: FUN_5dea5370
   Address: 5dea5370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5dea5370(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_18 [20];
  
  if ((param_2 != 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_5dea52f0(local_18,param_2,param_3);
    FUN_5ded1cd0(param_1,local_18);
    if (((_DAT_5df18838 == *(double *)(param_1 + 2)) || (_DAT_5df18838 == *(double *)(param_1 + 4)))
       || ((param_1[4] == 0 && (param_1[5] == 0x3ff00000)))) {
      uVar1 = *(undefined4 *)(param_2 + 0x14c);
      *param_1 = *(undefined4 *)(param_2 + 0x148);
      param_1[1] = uVar1;
    }
    if ((_DAT_5df18838 == *(double *)(param_1 + 4)) ||
       ((param_1[4] == 0 && (param_1[5] == 0x3ff00000)))) {
      uVar1 = *(undefined4 *)(param_2 + 0x154);
      param_1[2] = *(undefined4 *)(param_2 + 0x150);
      param_1[3] = uVar1;
    }
    return 1;
  }
  return 0;
}


