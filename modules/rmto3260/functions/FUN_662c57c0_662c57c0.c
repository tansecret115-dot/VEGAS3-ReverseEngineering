/* Module: rmto3260.dll
   Function: FUN_662c57c0
   Address: 662c57c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c57c0(int *param_1,undefined2 *param_2,undefined4 *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_e4 [51];
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  piVar1 = param_1;
  iVar3 = 0;
  local_8 = 0;
  local_10 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_10);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,&local_8);
  }
  local_c = (int *)0x0;
  if (-1 < iVar2) {
    local_14 = 0;
    if ((short)local_8 != 0) {
      do {
        if (iVar2 < 0) break;
        local_18 = 0;
        param_1 = (int *)0x0;
        iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,iVar3,&param_1);
        if (((local_10 < 2) || (*(int *)((int)param_1 + 0x16) == 0)) && (-1 < iVar2)) {
          iVar2 = FUN_662d0e40((void *)*param_1,*param_1,&local_18);
          if (((-1 < iVar2) && (local_18 != 0)) && (local_14 < (uint)param_1[4])) {
            local_c = param_1;
            local_14 = param_1[4];
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(local_8 & 0xffff));
    }
    if (-1 < iVar2) {
      if (local_c != (int *)0x0) {
        FUN_662d8440(local_e4);
        piVar1 = local_c;
        iVar2 = FUN_662d8cc0(local_e4,*local_c,1);
        if (-1 < iVar2) {
          iVar2 = FUN_662d9e80(local_e4,param_3,param_4);
          if (-1 < iVar2) {
            *param_2 = (short)piVar1[1];
          }
        }
        FUN_662d8540(local_e4);
        return iVar2;
      }
      iVar2 = -0x7fffbffb;
    }
  }
  return iVar2;
}


