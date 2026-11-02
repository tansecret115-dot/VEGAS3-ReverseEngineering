/* Module: rmbe3260.dll
   Function: FUN_66048770
   Address: 66048770
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66048770(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int *local_8;
  
  pvVar4 = (void *)0x0;
  local_8 = param_1;
  (**(code **)(*(int *)param_1[1] + 0x34))();
  uVar1 = (**(code **)(*(int *)param_1[1] + 0x40))();
  *(undefined2 *)((int)param_1 + 0xb5) = uVar1;
  param_1[5] = 4;
  iVar2 = (**(code **)(*param_1 + 0xf8))(0x2e7261fd);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0xfc))(param_1 + 0xe);
    if (iVar2 == 0) {
      if ((short)param_1[0xe] != 3) {
        iVar2 = -0x7ffbff7f;
      }
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x100))(&local_8);
        if (iVar2 == 0) {
          local_8 = local_8 + 0x3fff;
          pvVar4 = operator_new((uint)local_8 & 0xffff);
          if (pvVar4 == (void *)0x0) {
            iVar2 = -0x7ff8fff2;
          }
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*(int *)param_1[1] + 0x20))(4,0);
            if (iVar2 == 0) {
              uVar3 = (**(code **)(*(int *)param_1[1] + 0x28))(pvVar4,(uint)local_8 & 0xffff);
              if (uVar3 != ((uint)local_8 & 0xffff)) {
                iVar2 = -0x7ffbff7f;
              }
              if (iVar2 == 0) {
                (**(code **)(*param_1 + 0x1c))(pvVar4,local_8,0);
                param_1[5] = 4;
                param_1[0x20] = 0x12;
                param_1[6] = *(ushort *)(param_1 + 0xf) + 4;
              }
            }
          }
        }
      }
    }
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  return iVar2;
}


