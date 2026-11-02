/* Module: rmto3260.dll
   Function: FUN_662c33d0
   Address: 662c33d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c33d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  void *pvVar5;
  int local_10;
  undefined2 local_c;
  undefined2 uStack_a;
  ushort local_8;
  
  iVar1 = (**(code **)(*(int *)param_1[6] + 0x34))();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_10);
    if (-1 < iVar1) {
      if (local_10 != 0x2e524d46) {
        iVar1 = (-(uint)(local_10 != 0x2e524d5a) & 0xfffffca8) + 0x800403d9;
      }
      if ((-1 < iVar1) && (1 < local_8)) {
        iVar1 = -0x7ffbfffb;
      }
    }
  }
  uVar4 = CONCAT22(uStack_a,local_c);
  pvVar5 = (void *)0x0;
  if (-1 < iVar1) {
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    if (-1 < iVar1) {
      uVar2 = (**(code **)(*(int *)param_1[6] + 0x28))(pvVar5,uVar4);
      if (uVar2 != uVar4) {
        iVar1 = -0x7ffbff7f;
      }
      if (-1 < iVar1) {
        if (((pvVar5 == (void *)0x0) || (uVar4 == 0)) ||
           ((sVar3 = CONCAT11(*(undefined1 *)((int)pvVar5 + 8),*(undefined1 *)((int)pvVar5 + 9)),
            sVar3 != 0 && (sVar3 != 1)))) {
          uVar4 = CONCAT22(local_8,uStack_a);
        }
        else {
          uVar4 = (uint)*(byte *)((int)pvVar5 + 0xe) << 0x18 |
                  (uint)*(byte *)((int)pvVar5 + 0xf) << 0x10 |
                  (uint)*(byte *)((int)pvVar5 + 0x10) << 8 | (uint)*(byte *)((int)pvVar5 + 0x11);
        }
        param_1[7] = uVar4;
      }
    }
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  return iVar1;
}


