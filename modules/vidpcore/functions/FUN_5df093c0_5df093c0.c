/* Module: vidpcore.dll
   Function: FUN_5df093c0
   Address: 5df093c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5df093c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  tagRECT local_10;
  
  if ((((param_4[1] < param_4[3]) && (*param_4 < param_4[2])) && (param_9[1] < param_9[3])) &&
     (*param_9 < param_9[2])) {
    local_10.left = *param_4;
    local_10.top = param_4[1];
    local_10.right = param_4[2];
    local_10.bottom = param_4[3];
    OffsetRect(&local_10,*param_5,param_5[1]);
    uVar1 = FUN_5dee7940(param_1,param_2,param_3,&local_10,param_6,param_7,param_8,param_9,param_10,
                         param_11,param_12);
    return uVar1;
  }
  return 0;
}


