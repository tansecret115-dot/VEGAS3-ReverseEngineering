/* Module: enlv3260.dll
   Function: FUN_661d3c60
   Address: 661d3c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_661d3c60(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_661d630c,s_dllacces_cpp_661d6314,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_661d3ee0(this,s_DLL_already_open_661d62f8);
    return *(int *)((int)this + 4);
  }
  FUN_661d2b60(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_661d1db0();
    iVar2 = FUN_661d39b0(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_661d1db0();
      pcVar3 = (char *)FUN_661d39b0(puVar1,param_2);
      FUN_661d2e40(local_10,pcVar3);
    }
  }
  FUN_661d3010(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_661d3ee0(this,s_Unable_to_load_library_661d62e0);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_661d3ee0(this,&DAT_661d637c);
    FUN_661d3f50(this,local_10[0]);
    FUN_661d3fc0();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_661d3e20(this,s_SetDLLAccessPath_661d62cc);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_661d1db0();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_661d1db0();
        FUN_661d3a40(puVar1,pFVar5);
      }
    }
    if (DAT_661d638c != 0) {
      pFVar5 = FUN_661d3e20(this,s_RMACreateInstance_661d62b8);
      printf(s_Entry_Point__s__p_661d62a0,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_661d2c80((int *)local_10);
  return iVar2;
}


