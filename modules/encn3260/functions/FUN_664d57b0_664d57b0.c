/* Module: encn3260.dll
   Function: FUN_664d57b0
   Address: 664d57b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664d57b0(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_664f04b4,s_dllacces_cpp_664f04bc,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_664d5a30(this,s_DLL_already_open_664f04a0);
    return *(int *)((int)this + 4);
  }
  FUN_664bb2c0(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_66481080();
    iVar2 = FUN_664cbdc0(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_66481080();
      pcVar3 = (char *)FUN_664cbdc0(puVar1,param_2);
      FUN_664bb5e0(local_10,pcVar3);
    }
  }
  FUN_664bb810(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_664d5a30(this,s_Unable_to_load_library_664f0488);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_664d5a30(this,&DAT_664f05c4);
    FUN_664d5aa0(this,local_10[0]);
    FUN_664d5b10();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_664d5970(this,s_SetDLLAccessPath_664f0474);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_66481080();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_66481080();
        FUN_664cbe50(puVar1,pFVar5);
      }
    }
    if (DAT_664f2b20 != 0) {
      pFVar5 = FUN_664d5970(this,s_RMACreateInstance_664f0214);
      printf(s_Entry_Point__s__p_664f045c,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_664bb3e0((int *)local_10);
  return iVar2;
}


