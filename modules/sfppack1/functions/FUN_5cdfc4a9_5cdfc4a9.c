/* Module: sfppack1.dll
   Function: FUN_5cdfc4a9
   Address: 5cdfc4a9
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cdfc4a9(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0,0,*param_1);
    if (param_3 != 0) {
      local_10 = param_1[2];
      local_c = param_1[3];
      local_8 = param_1[4];
      local_14 = 1;
      uVar1 = (**(code **)(*param_2 + 0x14))(param_2,*param_1,param_1[1],0,0,0,&local_14);
    }
    uVar1 = -(uint)(uVar1 != 0x80070002) & uVar1;
  }
  return uVar1;
}


