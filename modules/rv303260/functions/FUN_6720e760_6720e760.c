/* Module: rv303260.dll
   Function: FUN_6720e760
   Address: 6720e760
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6720e760(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_67215504,s_dllacces_cpp_6721550c,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_6720e9e0(this,s_DLL_already_open_672154f0);
    return *(int *)((int)this + 4);
  }
  FUN_6720ec10(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_67201040();
    iVar2 = FUN_6720e450(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_67201040();
      pcVar3 = (char *)FUN_6720e450(puVar1,param_2);
      FUN_6720eef0(local_10,pcVar3);
    }
  }
  FUN_6720f0c0(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_6720e9e0(this,s_Unable_to_load_library_672154d8);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_6720e9e0(this,&DAT_67216748);
    FUN_6720ea50(this,local_10[0]);
    FUN_6720eac0();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_6720e920(this,s_SetDLLAccessPath_672154c4);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_67201040();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_67201040();
        FUN_6720e4e0(puVar1,pFVar5);
      }
    }
    if (DAT_67216808 != 0) {
      pFVar5 = FUN_6720e920(this,s_RMACreateInstance_672154b0);
      printf(s_Entry_Point__s__p_67215498,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_6720ed30((int *)local_10);
  return iVar2;
}


