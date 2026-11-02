/* Module: rv203260.dll
   Function: FUN_638af1f0
   Address: 638af1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638af1f0(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_638b5414,s_dllacces_cpp_638b541c,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_638af470(this,s_DLL_already_open_638b5400);
    return *(int *)((int)this + 4);
  }
  FUN_638af6a0(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_638a1040();
    iVar2 = FUN_638aeee0(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_638a1040();
      pcVar3 = (char *)FUN_638aeee0(puVar1,param_2);
      FUN_638af980(local_10,pcVar3);
    }
  }
  FUN_638afb50(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_638af470(this,s_Unable_to_load_library_638b53e8);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_638af470(this,&DAT_638b6658);
    FUN_638af4e0(this,local_10[0]);
    FUN_638af550();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_638af3b0(this,s_SetDLLAccessPath_638b53d4);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_638a1040();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_638a1040();
        FUN_638aef70(puVar1,pFVar5);
      }
    }
    if (DAT_638b6718 != 0) {
      pFVar5 = FUN_638af3b0(this,s_RMACreateInstance_638b53c0);
      printf(s_Entry_Point__s__p_638b53a8,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_638af7c0((int *)local_10);
  return iVar2;
}


