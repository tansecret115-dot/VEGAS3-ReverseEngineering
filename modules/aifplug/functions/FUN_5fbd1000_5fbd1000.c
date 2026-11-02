/* Module: aifplug.dll
   Function: FUN_5fbd1000
   Address: 5fbd1000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5fbd1000(HMODULE param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uchar local_104;
  undefined4 local_103;
  
  _DAT_5fc09634 = 0;
  _DAT_5fc09638 = 0;
  DAT_5fc0963c = 0;
  DAT_5fc09630 = param_1;
  FUN_5fbdb640(param_1);
  iVar1 = FUN_5fbd9ea0(&DAT_5fc0963c,param_1,0,0);
  local_104 = '\0';
  puVar3 = &local_103;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_5fbd8790(0,param_1,&local_104,0x104);
  FUN_5fbd87d0(0,(LPCSTR)&local_104);
  return -1 < iVar1;
}


