/* Module: rmme3260.dll
   Function: FUN_6623c7f0
   Address: 6623c7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6623c7f0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  void *local_10;
  int local_c [2];
  
  local_10 = (void *)((int)this + 0x30);
  local_18 = -(uint)(*(int *)((int)this + 0x3c) != 0);
  local_c[0] = 0;
  local_c[1] = 0;
  local_14 = local_18;
  iVar1 = param_3;
  if (local_18 != 0) {
    FUN_66251190(local_10,&local_14,local_c + 1,local_c);
    iVar1 = param_3;
  }
  while (iVar2 = local_c[0], local_18 != 0) {
    (**(code **)(*(int *)(local_c[0] + 4) + 0x1c))((int *)(local_c[0] + 4),&param_3);
    if (iVar2 == param_1) {
      *(int *)(iVar2 + 0xdc) = iVar1;
    }
    else if (param_2 < iVar1) {
      if ((param_2 <= param_3) && (param_3 < iVar1)) {
        *(int *)(iVar2 + 0xdc) = param_3 + -1;
      }
    }
    else if ((iVar1 <= param_3) && (param_3 < param_2)) {
      *(int *)(iVar2 + 0xdc) = param_3 + 1;
    }
    local_18 = local_14;
    if (local_14 != 0) {
      FUN_66251190(local_10,&local_14,local_c + 1,local_c);
    }
  }
  return;
}


