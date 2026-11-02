/* Module: rmbe3260.dll
   Function: FUN_66051780
   Address: 66051780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66051780(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_6606f230,s_dllacces_cpp_6606f238,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_66051a00(this,s_DLL_already_open_6606f21c);
    return *(int *)((int)this + 4);
  }
  FUN_6605b650(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_6602dab0();
    iVar2 = FUN_66052f60(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_6602dab0();
      pcVar3 = (char *)FUN_66052f60(puVar1,param_2);
      FUN_6605b970(local_10,pcVar3);
    }
  }
  FUN_6605bba0(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_66051a00(this,s_Unable_to_load_library_6606f204);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_66051a00(this,&DAT_66075004);
    FUN_66051a70(this,local_10[0]);
    FUN_66007930();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_66051940(this,s_SetDLLAccessPath_6606f1f0);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_6602dab0();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_6602dab0();
        FUN_66052ff0(puVar1,pFVar5);
      }
    }
    if (DAT_660753e8 != 0) {
      pFVar5 = FUN_66051940(this,s_RMACreateInstance_6606f1dc);
      printf(s_Entry_Point__s__p_6606f1c4,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_6605b770((int *)local_10);
  return iVar2;
}


