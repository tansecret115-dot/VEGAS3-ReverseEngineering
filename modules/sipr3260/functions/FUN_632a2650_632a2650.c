/* Module: sipr3260.dll
   Function: FUN_632a2650
   Address: 632a2650
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_632a2650(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_632a524c,s_dllacces_cpp_632a5254,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_632a28d0(this,s_DLL_already_open_632a5238);
    return *(int *)((int)this + 4);
  }
  FUN_632a2c90(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_632a11b0();
    iVar2 = FUN_632a2390(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_632a11b0();
      pcVar3 = (char *)FUN_632a2390(puVar1,param_2);
      FUN_632a2f70(local_10,pcVar3);
    }
  }
  FUN_632a3140(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_632a28d0(this,s_Unable_to_load_library_632a5220);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_632a28d0(this,&DAT_632a53c4);
    FUN_632a2940(this,local_10[0]);
    FUN_632a29b0();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_632a2810(this,s_SetDLLAccessPath_632a520c);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_632a11b0();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_632a11b0();
        FUN_632a2420(puVar1,pFVar5);
      }
    }
    if (DAT_632a53c8 != 0) {
      pFVar5 = FUN_632a2810(this,s_RMACreateInstance_632a51f8);
      printf(s_Entry_Point__s__p_632a51e0,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_632a2db0((int *)local_10);
  return iVar2;
}


