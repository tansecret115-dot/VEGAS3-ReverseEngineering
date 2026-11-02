/* Module: rmme3260.dll
   Function: FUN_66265c70
   Address: 66265c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66265c70(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_6627ccf4,s_dllacces_cpp_6627ccfc,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_66265ef0(this,s_DLL_already_open_6627cce0);
    return *(int *)((int)this + 4);
  }
  FUN_662500f0(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_66201570();
    iVar2 = FUN_66264090(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_66201570();
      pcVar3 = (char *)FUN_66264090(puVar1,param_2);
      FUN_66250410(local_10,pcVar3);
    }
  }
  FUN_66250640(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_66265ef0(this,s_Unable_to_load_library_6627ccc8);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_66265ef0(this,&DAT_6627cf3c);
    FUN_66265f60(this,local_10[0]);
    FUN_66265fd0();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_66265e30(this,s_SetDLLAccessPath_6627ccb4);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_66201570();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_66201570();
        FUN_66264120(puVar1,pFVar5);
      }
    }
    if (DAT_6627f358 != 0) {
      pFVar5 = FUN_66265e30(this,s_RMACreateInstance_6627cb84);
      printf(s_Entry_Point__s__p_6627cc9c,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_66250210((int *)local_10);
  return iVar2;
}


