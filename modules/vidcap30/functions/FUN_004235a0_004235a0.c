/* Module: vidcap30.exe
   Function: FUN_004235a0
   Address: 004235a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004235a0(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  int *local_4;
  
  local_4 = (int *)0x0;
  local_8 = 1;
  local_c = 1;
  puVar1 = &DAT_005a35f8;
  if (param_3 == (int *)0x0) {
    puVar1 = &DAT_005a35e8;
  }
  iVar2 = FUN_00420460(&local_8,1,puVar1,0,0,param_2,&local_4,&local_c);
  if (-1 < iVar2) {
    param_3 = (int *)0x0;
    local_8 = 0;
    local_c = 1;
    iVar2 = FUN_00420460(&local_8,1,0,0,0,*(undefined4 *)(param_1 + 0x324),&param_3,&local_c);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0x2c))
                        (*(int **)(param_1 + 0x350),local_4,param_3);
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
      }
      param_3 = (int *)0x0;
    }
    if (local_4 != (int *)0x0) {
      (**(code **)(*local_4 + 8))(local_4);
    }
  }
  return iVar2;
}


