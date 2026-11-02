/* Module: rmme3260.dll
   Function: FUN_66237af0
   Address: 66237af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66237af0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  int local_8;
  
  iVar4 = param_2;
  local_8 = 0;
  local_c = this;
  if (-1 < param_2) {
    param_2 = *(int *)((int)this + 0x3c);
    local_10 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = param_2;
        FUN_66250bf0(&param_2);
        if (iVar4 < local_8) {
          (**(code **)(*(int *)((int)this + 0x38) + 0x10))(iVar1,param_1);
          local_10 = 1;
          break;
        }
        local_8 = local_8 + 1;
      } while (param_2 != 0);
    }
    pvVar5 = local_c;
    if (local_10 != 0) goto LAB_66237b71;
  }
  pvVar5 = local_c;
  FUN_66250b60((void *)((int)local_c + 0x38),param_1);
LAB_66237b71:
  local_18 = *(int *)((int)pvVar5 + 0x3c);
  local_14 = (int)pvVar5 + 0x38;
  iVar4 = 0;
  while (local_18 != 0) {
    if (local_8 <= iVar4) {
      piVar3 = (int *)0x0;
      if (local_18 != 0) {
        puVar2 = (undefined4 *)FUN_66250c10(local_18);
        piVar3 = (int *)*puVar2;
      }
      param_1 = 0;
      FUN_66237a80(piVar3,&param_1);
      SetWindowPos(*(HWND *)(param_1 + 0x111),(HWND)0x0,0,0,0,0,3);
      SetWindowPos(*(HWND *)(param_1 + 0xf1),(HWND)0x0,0,0,0,0,3);
    }
    iVar4 = iVar4 + 1;
    FUN_66250bf0(&local_18);
  }
  return 0;
}


