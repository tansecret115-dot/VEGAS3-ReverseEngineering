/* Module: rmto3260.dll
   Function: FUN_662fbbc0
   Address: 662fbbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662fbbc0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  pvVar1 = (void *)(**(code **)(*param_1 + 0x20))(&local_c,0);
  if (pvVar1 == (void *)0x0) {
    local_8 = -0x7ff8fff2;
  }
  if (local_8 == 0) {
    iVar2 = (**(code **)(*(int *)param_1[1] + 0x24))();
    param_1[5] = iVar2;
    uVar3 = (**(code **)(*(int *)param_1[1] + 0x30))(pvVar1,local_c & 0xffff);
    if (uVar3 == (local_c & 0xffff)) {
      iVar2 = (**(code **)(*(int *)param_1[1] + 0x24))();
      param_1[6] = iVar2;
      param_1[0x20] = param_1[5] + 0xc;
      if ((char)param_1[0x2d] != '\0') {
        param_1[0x22] = param_1[0x22] + uVar3;
      }
    }
    else {
      local_8 = (**(code **)(*(int *)param_1[1] + 4))();
    }
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return local_8;
}


