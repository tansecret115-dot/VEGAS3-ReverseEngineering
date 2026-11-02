/* Module: erv13260.dll
   Function: FUN_63602c10
   Address: 63602c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63602c10(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_63606c54,s_dllacces_cpp_63606c5c,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_63602e90(this,s_DLL_already_open_63606c40);
    return *(int *)((int)this + 4);
  }
  FUN_636030d0(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_635f1e40();
    iVar2 = FUN_63602960(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_635f1e40();
      pcVar3 = (char *)FUN_63602960(puVar1,param_2);
      FUN_636033b0(local_10,pcVar3);
    }
  }
  FUN_63603580(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_63602e90(this,s_Unable_to_load_library_63606c28);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_63602e90(this,&DAT_6362332c);
    FUN_63602f00(this,local_10[0]);
    FUN_63602f70();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_63602dd0(this,s_SetDLLAccessPath_63606c14);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_635f1e40();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_635f1e40();
        FUN_636029f0(puVar1,pFVar5);
      }
    }
    if (DAT_63623328 != 0) {
      pFVar5 = FUN_63602dd0(this,s_RMACreateInstance_63606c00);
      printf(s_Entry_Point__s__p_63606be8,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_636031f0((int *)local_10);
  return iVar2;
}


