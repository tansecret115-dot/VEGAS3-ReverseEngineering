/* Module: vegas30.exe
   Function: FUN_0040e170
   Address: 0040e170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e170(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  FUN_00401f40();
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    iVar1 = (**(code **)(param_3 + 0x20))(param_3,1);
    *(int *)(param_3 + 0x14) = iVar1;
    if (-1 < iVar1) {
      iVar1 = FUN_004e72b0(param_3);
      if (-1 < iVar1) {
        return 0;
      }
      *(int *)(param_3 + 0x14) = iVar1;
    }
  }
  uVar2 = FUN_0040e000(param_1,param_2,param_3,1);
  return uVar2;
}


