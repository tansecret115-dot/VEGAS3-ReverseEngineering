/* Module: rmto3260.dll
   Function: FUN_662f2ce0
   Address: 662f2ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f2ce0(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_6630b4e0,s_dllacces_cpp_6630b4e8,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_662f2f60(this,s_DLL_already_open_6630b4cc);
    return *(int *)((int)this + 4);
  }
  FUN_662eefd0(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_662d08a0();
    iVar2 = FUN_662f3ca0(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_662d08a0();
      pcVar3 = (char *)FUN_662f3ca0(puVar1,param_2);
      FUN_662ef2f0(local_10,pcVar3);
    }
  }
  FUN_662ef520(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_662f2f60(this,s_Unable_to_load_library_6630b4b4);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_662f2f60(this,&DAT_66311c80);
    FUN_662f2fd0(this,local_10[0]);
    FUN_662f3040();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_662f2ea0(this,s_SetDLLAccessPath_6630b4a0);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_662d08a0();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_662d08a0();
        FUN_662f3d30(puVar1,pFVar5);
      }
    }
    if (DAT_66311d28 != 0) {
      pFVar5 = FUN_662f2ea0(this,s_RMACreateInstance_6630b48c);
      printf(s_Entry_Point__s__p_6630b474,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_662ef0f0((int *)local_10);
  return iVar2;
}


