/* Module: vidcap30.exe
   Function: FUN_00406a70
   Address: 00406a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406a70(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  FUN_00401ad0();
  if (*(code **)(param_3 + 0x1c) != (code *)0x0) {
    iVar1 = (**(code **)(param_3 + 0x1c))(param_3,1);
    *(int *)(param_3 + 0x14) = iVar1;
    if (-1 < iVar1) {
      iVar1 = FUN_00416a90(param_3);
      if (-1 < iVar1) {
        return 0;
      }
      *(int *)(param_3 + 0x14) = iVar1;
    }
  }
  uVar2 = FUN_00406970(param_1,param_2,param_3,1);
  return uVar2;
}


