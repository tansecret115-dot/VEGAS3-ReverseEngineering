/* Module: vidpcore.dll
   Function: FUN_5de9abc0
   Address: 5de9abc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5de9abc0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,double param_8,undefined4 param_9,double param_10
            ,undefined4 param_11,int param_12,int param_13,int param_14,int param_15,int param_16,
            int param_17,int *param_18,int param_19)

{
  longlong lVar1;
  void *_Memory;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_14;
  
  _Memory = calloc(1,param_19 * 8);
  if (_Memory != (void *)0x0) {
    if (0 < param_19) {
      piVar3 = (int *)((int)_Memory + 4);
      local_14 = param_19;
      piVar4 = param_18;
      do {
        piVar3[-1] = ((uint)((longlong)*piVar4 * (longlong)param_14) >> 0xe |
                     (int)((ulonglong)((longlong)*piVar4 * (longlong)param_14) >> 0x20) << 0x12) +
                     param_12;
        lVar1 = (longlong)*(int *)(((int)param_18 - (int)_Memory) + (int)piVar3) *
                (longlong)param_15;
        piVar4 = piVar4 + 2;
        *piVar3 = ((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12) + param_13;
        piVar3 = piVar3 + 2;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    if (param_8 <= _DAT_5df18830) {
      uVar2 = FUN_5de9b3a0(param_1,param_2,param_3,param_7,param_19,_Memory,param_9);
    }
    else {
      uVar2 = FUN_5de9ad70(param_1,param_2,param_3,param_7,param_19,_Memory,param_9);
    }
    if (_DAT_5df18838 < param_10) {
      if (0 < param_19) {
        piVar3 = (int *)((int)_Memory + 4);
        iVar5 = (int)param_18 - (int)_Memory;
        param_3 = param_19;
        do {
          piVar3[-1] = ((uint)((longlong)*param_18 * (longlong)param_16) >> 0xe |
                       (int)((ulonglong)((longlong)*param_18 * (longlong)param_16) >> 0x20) << 0x12)
                       + param_12;
          lVar1 = (longlong)*(int *)((int)piVar3 + iVar5) * (longlong)param_17;
          param_18 = param_18 + 2;
          *piVar3 = ((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12) + param_13;
          piVar3 = piVar3 + 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      if (param_8 <= _DAT_5df18838) {
        uVar2 = FUN_5de9b3a0(param_4,param_5,param_6,param_7,param_19,_Memory,param_11);
      }
      else {
        uVar2 = FUN_5de9ad70(param_4,param_5,param_6,param_7,param_19,_Memory,param_11);
      }
    }
    free(_Memory);
    return uVar2;
  }
  return 0x8007000e;
}


