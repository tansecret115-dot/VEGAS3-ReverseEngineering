/* Module: atrc3260.dll
   Function: FUN_68002d00
   Address: 68002d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_68002d00(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_6800521c,s_dllacces_cpp_68005224,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_68002f80(this,s_DLL_already_open_68005208);
    return *(int *)((int)this + 4);
  }
  FUN_68003140(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_68001a70();
    iVar2 = FUN_68002a40(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_68001a70();
      pcVar3 = (char *)FUN_68002a40(puVar1,param_2);
      FUN_68003420(local_10,pcVar3);
    }
  }
  FUN_680035f0(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_68002f80(this,s_Unable_to_load_library_680051f0);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_68002f80(this,&DAT_680054d4);
    FUN_68002ff0(this,local_10[0]);
    FUN_68003060();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_68002ec0(this,s_SetDLLAccessPath_680051dc);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_68001a70();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_68001a70();
        FUN_68002ad0(puVar1,pFVar5);
      }
    }
    if (DAT_680054d8 != 0) {
      pFVar5 = FUN_68002ec0(this,s_RMACreateInstance_680051c8);
      printf(s_Entry_Point__s__p_680051b0,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_68003260((int *)local_10);
  return iVar2;
}


