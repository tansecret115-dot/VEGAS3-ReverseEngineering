/* Module: qt4plug.dll
   Function: FUN_5f511000
   Address: 5f511000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f511000(HMODULE param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uchar local_104;
  undefined4 local_103;
  
  _DAT_5f5a3e54 = 0;
  _DAT_5f5a3e58 = 0;
  DAT_5f5a3e5c = 0;
  DAT_5f5a3e60 = (HANDLE)0x0;
  DAT_5f5a3e50 = param_1;
  FUN_5f529580(param_1);
  iVar1 = FUN_5f527de0(&DAT_5f5a3e5c,param_1,0,0);
  local_104 = '\0';
  puVar3 = &local_103;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_5f5266d0(0,param_1,&local_104,0x104);
  FUN_5f526710(0,(LPCSTR)&local_104);
  DAT_5f5a3e60 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return -1 < iVar1;
}


