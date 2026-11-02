/* Module: rmto3260.dll
   Function: FUN_662c9a40
   Address: 662c9a40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c9a40(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  ushort uVar2;
  void *pvVar3;
  undefined3 extraout_var;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int *local_14;
  int *local_10;
  int local_c;
  ushort local_6;
  
  iVar5 = 0;
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  pvVar3 = operator_new((uint)*(ushort *)(param_1 + 0x5c) << 1);
  *(void **)(param_1 + 0x58) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    iVar5 = -0x7ff8fff2;
  }
  uVar4 = 0;
  if (*(short *)(param_1 + 0x5c) != 0) {
    do {
      iVar6 = 0;
      if (iVar5 < 0) {
        return iVar5;
      }
      iVar5 = (**(code **)(*param_2 + 0x3c))
                        (param_2,*(undefined2 *)(*(int *)(param_1 + 0x54) + (uint)uVar4 * 2),
                         &local_10);
      if (((*(int *)((int)local_10 + 0x22) != 0) || (*(int *)((int)local_10 + 0x16) != 0)) &&
         (iVar5 = (**(code **)(*param_3 + 0x30))(param_3,&local_6), -1 < iVar5)) {
        local_c = 0;
        if (local_6 != 0) {
          do {
            if (local_c != 0) goto LAB_662c9b26;
            if (iVar5 < 0) break;
            iVar5 = (**(code **)(*param_3 + 0x38))(param_3,iVar6,&local_14);
            if (-1 < iVar5) {
              bVar1 = FUN_662c7240(local_10,local_14);
              local_c = CONCAT31(extraout_var,bVar1);
            }
            iVar6 = iVar6 + 1;
          } while ((ushort)iVar6 < local_6);
        }
        if (local_c != 0) {
LAB_662c9b26:
          uVar2 = 0;
          if (*(ushort *)(param_1 + 0x5c) != 0) {
            do {
              if (*(short *)(*(int *)(param_1 + 0x54) + (uint)uVar2 * 2) == (short)local_10[1]) {
                *(short *)(*(int *)(param_1 + 0x58) + (uint)uVar2 * 2) = (short)local_14[1];
                break;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(ushort *)(param_1 + 0x5c));
          }
          if (*(ushort *)(param_1 + 0x5c) <= uVar2) {
            local_c = 0;
          }
          if (local_c != 0) goto LAB_662c9b86;
        }
        iVar5 = -0x7ffbfc37;
      }
LAB_662c9b86:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 0x5c));
  }
  return iVar5;
}


