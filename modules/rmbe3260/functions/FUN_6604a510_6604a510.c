/* Module: rmbe3260.dll
   Function: FUN_6604a510
   Address: 6604a510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6604a510(void *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  void *local_8;
  
  local_8 = param_1;
  (**(code **)(**(int **)((int)param_1 + 4) + 0x34))();
  iVar1 = FUN_66047cb0(param_1,0x2e7261fd);
  if (iVar1 == 0) {
    local_8 = (void *)0x5;
    local_8 = (void *)FUN_66055b90(this,5);
    iVar2 = (**(code **)(**(int **)((int)param_1 + 4) + 0x30))(&local_8,2);
    this_00 = extraout_ECX;
    if (iVar2 != 2) {
      iVar2 = (**(code **)(**(int **)((int)param_1 + 4) + 4))();
      this_00 = extraout_ECX_00;
      iVar1 = iVar2;
    }
    if (iVar1 == 0) {
      local_8 = (void *)CONCAT22((short)((uint)iVar2 >> 0x10),*(ushort *)((int)param_1 + 0x3a));
      local_8 = (void *)FUN_66055b90(this_00,*(ushort *)((int)param_1 + 0x3a));
      iVar2 = (**(code **)(**(int **)((int)param_1 + 4) + 0x30))(&local_8,2);
      if (iVar2 != 2) {
        iVar1 = (**(code **)(**(int **)((int)param_1 + 4) + 4))();
      }
    }
  }
  return iVar1;
}


