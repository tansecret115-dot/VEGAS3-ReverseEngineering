/* Module: rmbe3260.dll
   Function: FUN_66049220
   Address: 66049220
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66049220(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  void *local_8;
  
  local_8 = (void *)0x0;
  (**(code **)(*(int *)param_1[1] + 0x34))();
  iVar1 = (**(code **)(*param_1 + 0xf8))(0x2e7261fd);
  uVar3 = local_c;
  if (iVar1 == 0) {
    local_c = 8;
    iVar1 = (**(code **)(*param_1 + 0x38))(0x2e726134,&local_c);
    uVar3 = local_c;
    if (iVar1 == 0) {
      param_1[5] = local_c + 8;
      iVar1 = (**(code **)(*(int *)param_1[1] + 0x20))(local_c + 8,0);
      uVar3 = local_c;
      if ((iVar1 == 0) &&
         (iVar1 = FUN_660480c0(param_1,(ushort *)(param_1 + 0xe),'\x01'), uVar3 = local_c,
         iVar1 == 0)) {
        if ((short)param_1[0xe] != 4) {
          iVar1 = -0x7ffbff7f;
        }
        if ((iVar1 == 0) &&
           (iVar1 = FUN_660480c0(param_1,(ushort *)((int)param_1 + 0x3a),'\x01'), uVar3 = local_c,
           iVar1 == 0)) {
          if (*(short *)((int)param_1 + 0x3a) != 0) {
            iVar1 = -0x7ffbff7f;
          }
          if ((iVar1 == 0) &&
             (iVar1 = FUN_660480c0(param_1,(ushort *)(param_1 + 0xf),'\x01'), uVar3 = local_c,
             iVar1 == 0)) {
            uVar3 = (uint)*(ushort *)(param_1 + 0xf);
            local_8 = operator_new(uVar3);
            if (local_8 == (void *)0x0) {
              iVar1 = -0x7ff8fff2;
            }
          }
        }
      }
    }
  }
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*(int *)param_1[1] + 0x20))(param_1[5],0), iVar1 == 0))
  {
    uVar2 = (**(code **)(*(int *)param_1[1] + 0x28))(local_8,uVar3);
    if (uVar2 != uVar3) {
      iVar1 = -0x7ffbff7f;
    }
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x1c))(local_8,uVar3,0);
      param_1[6] = (uint)*(ushort *)(param_1 + 0xf) + param_1[5];
      param_1[0x20] = param_1[5] + 0xc;
    }
  }
  if (local_8 != (void *)0x0) {
    operator_delete(local_8);
  }
  return iVar1;
}


