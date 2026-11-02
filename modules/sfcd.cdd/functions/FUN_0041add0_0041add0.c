/* Module: sfcd.cdd
   Function: FUN_0041add0
   Address: 0041add0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041add0(HSFCD__ *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int local_14 [5];
  
  iVar1 = FUN_004194f0((undefined4 *)param_1);
  if (iVar1 == -0x7ffb1f37) {
    return -0x7ffb1f37;
  }
  iVar1 = -0x7ffb1f3f;
  if (((param_3 & 0x20) != 0) && ((param_3 & 0x4000) == 0)) {
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    local_14[4] = 0;
    local_14[0] = 1;
    iVar1 = FUN_0041a900(param_1,param_2,param_3,local_14);
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  if ((param_3 & 0x8000) == 0) {
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    local_14[4] = 0;
    iVar1 = FUN_0041aa10(param_1,param_2,(byte)param_3,local_14);
  }
  if (iVar1 < 0) {
    iVar1 = FUN_0041acf0(param_1,param_2,param_3);
  }
  return iVar1;
}


