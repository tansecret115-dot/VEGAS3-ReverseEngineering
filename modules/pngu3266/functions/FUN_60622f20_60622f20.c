/* Module: pngu3266.dll
   Function: FUN_60622f20
   Address: 60622f20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_60622f20(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_606497dc,s_dllacces_cpp_606497e4,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_606231a0(this,s_DLL_already_open_606497c8);
    return *(int *)((int)this + 4);
  }
  FUN_60618bb0(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_60618ac7();
    iVar2 = FUN_6061c600(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_60618ac7();
      pcVar3 = (char *)FUN_6061c600(puVar1,param_2);
      FUN_60618ed0(local_10,pcVar3);
    }
  }
  FUN_60619100(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_606231a0(this,s_Unable_to_load_library_606497b0);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_606231a0(this,&DAT_60649ac0);
    FUN_60623210(this,local_10[0]);
    FUN_60623280();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_606230e0(this,s_SetDLLAccessPath_6064979c);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_60618ac7();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_60618ac7();
        FUN_6061c690(puVar1,pFVar5);
      }
    }
    if (DAT_6064b4a8 != 0) {
      pFVar5 = FUN_606230e0(this,s_RMACreateInstance_60649788);
      printf(s_Entry_Point__s__p_60649770,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_60618cd0((int *)local_10);
  return iVar2;
}


