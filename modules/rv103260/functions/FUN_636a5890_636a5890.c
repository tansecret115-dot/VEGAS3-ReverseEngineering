/* Module: rv103260.dll
   Function: FUN_636a5890
   Address: 636a5890
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_636a5890(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_636a8394,s_dllacces_cpp_636a839c,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_636a5b10(this,s_DLL_already_open_636a8380);
    return *(int *)((int)this + 4);
  }
  FUN_636a5fa0(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_636a1040();
    iVar2 = FUN_636a55d0(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_636a1040();
      pcVar3 = (char *)FUN_636a55d0(puVar1,param_2);
      FUN_636a6280(local_10,pcVar3);
    }
  }
  FUN_636a6450(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_636a5b10(this,s_Unable_to_load_library_636a8368);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_636a5b10(this,&DAT_636a840c);
    FUN_636a5b80(this,local_10[0]);
    FUN_636a5bf0();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_636a5a50(this,s_SetDLLAccessPath_636a8354);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_636a1040();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_636a1040();
        FUN_636a5660(puVar1,pFVar5);
      }
    }
    if (DAT_636a842c != 0) {
      pFVar5 = FUN_636a5a50(this,s_RMACreateInstance_636a8340);
      printf(s_Entry_Point__s__p_636a8328,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_636a60c0((int *)local_10);
  return iVar2;
}


