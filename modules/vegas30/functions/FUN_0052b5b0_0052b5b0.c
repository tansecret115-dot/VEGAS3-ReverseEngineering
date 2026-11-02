/* Module: vegas30.exe
   Function: FUN_0052b5b0
   Address: 0052b5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052b5b0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_0052b220(param_2,&local_4,1);
  if ((-1 < iVar1) && (local_4 != 0)) {
    iVar1 = FUN_0052b020(*param_1,param_1 + 1,param_1[0x42],local_4,param_1[0x43],param_1[0x44],
                         param_1[0x45],param_1[0x46],param_1[0x47]);
    FUN_0052b170(local_4,1);
  }
  return iVar1;
}


