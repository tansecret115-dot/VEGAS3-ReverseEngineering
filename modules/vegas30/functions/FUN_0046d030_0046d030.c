/* Module: vegas30.exe
   Function: FUN_0046d030
   Address: 0046d030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046d030(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  local_c = *(int **)(param_1 + 0xcd0);
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  local_8 = 0;
  local_14 = *local_c;
  if (local_14 < 1) {
    return 0;
  }
  local_10 = uVar1;
  if (DAT_00649e0c == 0) {
    local_c = (int *)FUN_00469040(param_1,local_c);
    if (local_c == (int *)0x0) {
      return 0;
    }
    local_14 = *local_c;
  }
  FUN_005b83b0(uVar1,1);
  local_4 = 0;
  if (0 < local_14) {
    do {
      uVar1 = local_10;
      iVar5 = *(int *)(local_c[2] + local_4 * 4);
      if (((*(uint *)(iVar5 + 0x10) & 8) == 0) && ((*(uint *)(iVar5 + 0x10) & 0x100000) == 0)) {
        iVar2 = *(int *)(iVar5 + 0x1c);
        iVar3 = *(int *)(iVar5 + 0x24) + iVar2 +
                (uint)CARRY4(*(uint *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x18));
        if ((param_3 <= iVar3) &&
           ((param_3 < iVar3 || (param_2 < *(uint *)(iVar5 + 0x20) + *(uint *)(iVar5 + 0x18))))) {
          iVar3 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
          if ((iVar2 <= iVar3) && ((iVar2 < iVar3 || (*(uint *)(iVar5 + 0x18) < param_2 + param_4)))
             ) {
            FUN_004ea250(local_10,*(undefined4 *)(iVar5 + 8),1,0);
            local_8 = local_8 + 1;
            iVar4 = FUN_005ca440(uVar1,iVar5,param_2,param_3,0,0,0,&local_18,0,1);
            if (iVar4 < 0) goto LAB_0046d1df;
            if (local_18 != 0) {
              *(uint *)(local_18 + 0x10) = *(uint *)(local_18 + 0x10) | 0x10;
              *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) & 0xffffffef;
              iVar5 = local_18;
            }
            if ((-1 < param_5) && ((0 < param_5 || (param_4 != 0)))) {
              iVar4 = FUN_005ca440(local_10,iVar5,param_2 + param_4,iVar3,0,0,0,&local_18,1,2);
              if (iVar4 < 0) goto LAB_0046d1df;
              if (local_18 != 0) {
                *(uint *)(local_18 + 0x10) = *(uint *)(local_18 + 0x10) & 0xffffffef;
                *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x10;
              }
            }
          }
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < local_14);
    if (iVar4 < 0) {
LAB_0046d1df:
      _SfErrorHandler_MsgBox_24(0,0x30,8,iVar4,0,0);
    }
  }
  FUN_005b84d0(local_10,1);
  if (local_c != *(int **)(param_1 + 0xcd0)) {
    _SfList_Destroy_4(local_c);
  }
  FUN_00469280(param_1);
  return local_8;
}


