/* Module: vegas30.exe
   Function: FUN_005ba8a0
   Address: 005ba8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005ba8a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,1);
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x80) = *param_3;
    *(undefined4 *)(iVar1 + 0x84) = param_3[1];
  }
  *(undefined4 *)(iVar1 + 0xbc) = param_4;
  *(undefined4 *)(iVar1 + 200) = param_5;
  FUN_005ba030(param_1,iVar1,1,1);
  return 0;
}


