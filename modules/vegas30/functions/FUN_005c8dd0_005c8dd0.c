/* Module: vegas30.exe
   Function: FUN_005c8dd0
   Address: 005c8dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c8dd0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *local_4;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  FUN_005b83b0(uVar1,1);
  local_4 = (int *)0x0;
  iVar2 = FUN_005bad30(0,1,&local_4);
  if (-1 < iVar2) {
    iVar2 = FUN_005bd7b0(local_4,1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_4 + 0x14))(local_4,0,0,0,0);
      if (-1 < iVar2) {
        iVar2 = FUN_005c0e90(local_4,1,uVar1,param_3,0xffffffff,param_2,0);
        if (-1 < iVar2) {
          FUN_005c97b0(uVar1,*param_2,param_4,param_5,0);
        }
      }
    }
  }
  if (local_4 != (int *)0x0) {
    FUN_005bad50(local_4);
  }
  FUN_005b84d0(uVar1,1);
  return iVar2;
}


