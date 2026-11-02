/* Module: vegas30.exe
   Function: FUN_005ba7d0
   Address: 005ba7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005ba7d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,1);
  *(undefined4 *)(iVar1 + 0xec) = param_3;
  *(undefined4 *)(iVar1 + 0xf0) = param_4;
  *(undefined4 *)(iVar1 + 0xf4) = param_5;
  *(undefined4 *)(iVar1 + 0xf8) = param_6;
  *(uint *)*param_1 = *(uint *)*param_1 | 1;
  FUN_005ba030(param_1,iVar1,1,1);
  return 0;
}


