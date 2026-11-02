/* Module: rmto3260.dll
   Function: FUN_662d01e0
   Address: 662d01e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662d01e0(void *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint local_14;
  uint local_10;
  ushort local_c;
  void *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0x24) + 0x34))();
  if (-1 < iVar1) {
    iVar1 = FUN_662cff20(param_1,&local_14);
    if (-1 < iVar1) {
      if (local_14 != 0x2e524d46) {
        iVar1 = -0x7ffbff7f;
      }
      if ((-1 < iVar1) && (1 < local_c)) {
        iVar1 = -0x7ffbfffb;
      }
    }
  }
  pvVar3 = (void *)0x0;
  if (-1 < iVar1) {
    pvVar3 = operator_new(local_10);
    if (pvVar3 == (void *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    if (-1 < iVar1) {
      uVar2 = (**(code **)(**(int **)((int)local_8 + 0x24) + 0x28))(pvVar3,local_10);
      if (uVar2 != local_10) {
        iVar1 = -0x7ffbff7f;
      }
      if (-1 < iVar1) {
        iVar1 = FUN_662ce8d0(local_8,(int)pvVar3,local_10);
      }
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  return iVar1;
}


