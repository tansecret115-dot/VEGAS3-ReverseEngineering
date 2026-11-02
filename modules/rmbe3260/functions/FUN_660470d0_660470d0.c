/* Module: rmbe3260.dll
   Function: FUN_660470d0
   Address: 660470d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_660470d0(int param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  int local_8;
  
  local_8 = 0;
  pbVar5 = &DAT_6606e62c;
  pbVar3 = (byte *)(param_1 + 0x49);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_6604710e:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_66047113;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_6604710e;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_66047113:
  if (iVar4 != 0) {
    if (*(undefined4 **)(param_1 + 0xa8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xa8))(1);
    }
    iVar4 = FUN_6604b370((byte *)(param_1 + 0x49),&local_8,(undefined2 *)(param_1 + 0x3e));
    *(int *)(param_1 + 0xa8) = iVar4;
    if (iVar4 == 0) {
      local_8 = -0x7ff8fff2;
    }
  }
  if (local_8 == 0) {
    if (*(char *)(param_1 + 0x65) != '\0') {
      local_8 = (**(code **)(**(int **)(param_1 + 0xa8) + 4))
                          (param_1 + 0x52,param_1 + 0x50,param_1 + 0x4e,
                           *(undefined4 *)(param_1 + 0x55));
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x50) * (uint)*(ushort *)(param_1 + 0x4e);
    *(int *)(param_1 + 0x90) = iVar4;
    *(int *)(param_1 + 0x8c) = iVar4;
    if (*(int *)(param_1 + 0x55) == 0) {
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
    if (local_8 == 0) {
      if (*(int *)(param_1 + 0xb0) == 0) {
        pvVar2 = operator_new(*(uint *)(param_1 + 0x90));
        *(void **)(param_1 + 0xb0) = pvVar2;
      }
      if (*(int *)(param_1 + 0xac) == 0) {
        pvVar2 = operator_new(*(uint *)(param_1 + 0x90));
        *(void **)(param_1 + 0xac) = pvVar2;
      }
      pvVar2 = *(void **)(param_1 + 0xb0);
      if (pvVar2 != (void *)0x0) {
        if (*(int *)(param_1 + 0xac) != 0) {
          _DAT_6607531c = local_8;
          return;
        }
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
      }
      if (*(void **)(param_1 + 0xac) != (void *)0x0) {
        operator_delete(*(void **)(param_1 + 0xac));
      }
      local_8 = -0x7ff8fff2;
    }
  }
  _DAT_6607531c = local_8;
  return;
}


