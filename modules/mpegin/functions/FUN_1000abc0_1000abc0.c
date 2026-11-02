/* Module: mpegin.dll
   Function: FUN_1000abc0
   Address: 1000abc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_1000abc0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_1 == 0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return 0xffffffff;
  }
  if ((int)param_3 < 1) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x8c) < param_3) {
    FUN_10007e90(param_1,(byte *)s_Requested_number_of_samples___d__1001905c);
    return 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 0x84);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x12e54) + 0x60);
  if (uVar1 < uVar3) {
    if (uVar3 <= uVar1 + param_3) {
      param_3 = uVar3 - uVar1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x240) = 0;
    iVar4 = *(int *)(param_1 + 0xa4) * param_3;
    while (((iVar4 != 0 && (iVar2 = *(int *)(param_1 + 0x12e54), *(int *)(iVar2 + 0x240) == 0)) &&
           (*(int *)(iVar2 + 0x244) == 0))) {
      uVar3 = FUN_10005cb0((int *)(iVar2 + 0x200),8);
      *(char *)(iVar5 + 1 + param_2) = (char)uVar3;
      uVar3 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
      *(char *)(iVar5 + param_2) = (char)uVar3;
      iVar5 = iVar5 + 2;
      *(int *)(*(int *)(param_1 + 0x12e54) + 0x2d0) =
           *(int *)(*(int *)(param_1 + 0x12e54) + 0x2d0) + 2;
      if (iVar5 % *(int *)(param_1 + 0xcac) == 0) {
        *(int *)(*(int *)(param_1 + 0x12e54) + 0x2c8) =
             *(int *)(*(int *)(param_1 + 0x12e54) + 0x2c8) + -1;
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x2d0) = 0;
      }
      iVar4 = iVar4 + -2;
    }
    iVar5 = *(int *)(param_1 + 0x12e54);
    if (*(int *)(iVar5 + 0x240) != 0) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 0x88) = *(int *)(param_1 + 0xa4) * param_3;
    *(uint *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + param_3;
    return param_3;
  }
  FUN_10007e90(param_1,(byte *)s_Requested_sample___d__is_greater_10018210);
  return 0xffffffff;
}


