/* Module: rmto3260.dll
   Function: FUN_662fb0e0
   Address: 662fb0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662fb0e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int *local_8;
  
  pvVar3 = (void *)0x0;
  local_8 = param_1;
  (**(code **)(*(int *)param_1[1] + 0x34))();
  param_1[5] = 4;
  iVar1 = FUN_662fa410(param_1,0x2e7261fd);
  if (iVar1 == 0) {
    pvVar3 = (void *)(**(code **)(*param_1 + 0x20))(&local_8,0);
    if (pvVar3 == (void *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    if (iVar1 == 0) {
      *(short *)(param_1 + 0xf) = (short)local_8;
      uVar2 = (**(code **)(*(int *)param_1[1] + 0x30))(pvVar3,(uint)local_8 & 0xffff);
      if (uVar2 != ((uint)local_8 & 0xffff)) {
        iVar1 = (**(code **)(*(int *)param_1[1] + 4))();
      }
      if (iVar1 == 0) {
        param_1[6] = *(ushort *)(param_1 + 0xf) + 4;
        param_1[0x20] = param_1[5] + 0xe;
      }
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  return iVar1;
}


