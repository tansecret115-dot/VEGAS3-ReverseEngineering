/* Module: dnet3260.dll
   Function: FUN_63052b80
   Address: 63052b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63052b80(void *this,char *param_1,ushort param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  ushort uVar6;
  LPCSTR local_10 [3];
  
  if (param_1 == (char *)0x0) {
    assert(s_dllName_6305522c,s_dllacces_cpp_63055234,0x93);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_63052e00(this,s_DLL_already_open_63055218);
    return *(int *)((int)this + 4);
  }
  FUN_63052fc0(local_10);
  if (param_2 != 0) {
    uVar6 = param_2;
    puVar1 = FUN_63051b80();
    iVar2 = FUN_630528c0(puVar1,uVar6);
    if (iVar2 != 0) {
      puVar1 = FUN_63051b80();
      pcVar3 = (char *)FUN_630528c0(puVar1,param_2);
      FUN_630532a0(local_10,pcVar3);
    }
  }
  FUN_63053470(local_10,param_1);
  pHVar4 = LoadLibraryA(local_10[0]);
  *(HMODULE *)this = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    *(undefined4 *)((int)this + 4) = 1;
    FUN_63052e00(this,s_Unable_to_load_library_63055200);
  }
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_63052e00(this,&DAT_63055524);
    FUN_63052e70(this,local_10[0]);
    FUN_63052ee0();
  }
  if (*(int *)((int)this + 4) == 0) {
    pFVar5 = FUN_63052d40(this,s_SetDLLAccessPath_630551ec);
    if (pFVar5 != (FARPROC)0x0) {
      puVar1 = FUN_63051b80();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = FUN_63051b80();
        FUN_63052950(puVar1,pFVar5);
      }
    }
    if (DAT_63055528 != 0) {
      pFVar5 = FUN_63052d40(this,s_RMACreateInstance_630551d8);
      printf(s_Entry_Point__s__p_630551c0,param_1,pFVar5);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  FUN_630530e0((int *)local_10);
  return iVar2;
}


