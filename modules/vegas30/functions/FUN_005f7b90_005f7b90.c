/* Module: vegas30.exe
   Function: FUN_005f7b90
   Address: 005f7b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f7b90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *local_8;
  int *local_4;
  
  local_4 = (int *)0x0;
  local_8 = (int *)0x0;
  if (*(int *)(param_1 + 4) == 3) {
    iVar1 = FUN_005f6990(&local_4);
    if (-1 < iVar1) {
      iVar1 = (**(code **)*local_4)(local_4,&DAT_0062d000,&local_8);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_8 + 0xc))(local_8,param_2,param_3);
        if (-1 < iVar1) {
          *(undefined4 *)(param_1 + 0x48) = param_2;
          *(undefined4 *)(param_1 + 0x4c) = param_3;
          uVar2 = ftol();
          *(undefined8 *)(param_1 + 0x20) = uVar2;
        }
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    if (local_4 != (int *)0x0) {
      (**(code **)(*local_4 + 8))(local_4);
    }
    return iVar1;
  }
  return 1;
}


