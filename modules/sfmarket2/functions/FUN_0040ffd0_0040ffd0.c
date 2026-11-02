/* Module: sfmarket2.dll
   Function: FUN_0040ffd0
   Address: 0040ffd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040ffd0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  UINT uMode;
  HMODULE pHVar2;
  int iVar3;
  uchar local_128 [260];
  undefined4 local_24;
  int *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00495f78;
  puStack_10 = &DAT_00493130;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffec4;
  iVar3 = 0;
  ExceptionList = &local_14;
  puVar1 = &stack0xfffffec4;
  if (*(int *)((int)this + 0x34) == 0) {
    ExceptionList = &local_14;
    FUN_00420820((HMODULE)0x0,local_128,0x104);
    _mbscat(local_128,(uchar *)"sfconfigmgr.dll");
    local_8 = 0;
    uMode = SetErrorMode(0x8000);
    pHVar2 = LoadLibraryA((LPCSTR)local_128);
    *(HMODULE *)((int)this + 0x34) = pHVar2;
    SetErrorMode(uMode);
    puVar1 = local_1c;
    if (*(int *)((int)this + 0x34) == 0) {
      iVar3 = -0x7ffb1ff9;
      local_24 = 0x8004e007;
    }
  }
  local_1c = puVar1;
  local_8 = 0xffffffff;
  local_20 = (int *)0x0;
  if ((-1 < iVar3) &&
     (iVar3 = FUN_0043e760(*(HMODULE *)((int)this + 0x34),&DAT_00495f68), -1 < iVar3)) {
    iVar3 = (**(code **)(*local_20 + 0xc))
                      (local_20,0,*(undefined4 *)((int)this + 0x30),1,param_2,param_1);
    (**(code **)(*local_20 + 8))(local_20);
  }
  ExceptionList = local_14;
  return iVar3;
}


