/* Module: vegas30.exe
   Function: FUN_00562840
   Address: 00562840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00562840(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((param_1 != (uint *)0x0) && ((*param_1 & 0x400) == 0)) && ((*param_1 & 0x200) != 0)) {
    FUN_005628b0(param_1,param_2);
    if ((*param_1 & 0x100) != 0) {
      uVar1 = (**(code **)(*(int *)param_1[0x46] + 0x14))
                        ((int *)param_1[0x46],param_2,param_6,param_7,param_3,param_4,param_8 != 0);
    }
    return uVar1;
  }
  return 0x8004e015;
}


