/* Module: sctplug.dll
   Function: FUN_00401000
   Address: 00401000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00401000(HMODULE param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uchar local_104;
  undefined4 local_103;
  
  _DAT_0043ca54 = 0;
  _DAT_0043ca58 = 0;
  DAT_0043ca5c = 0;
  DAT_0043ca50 = param_1;
  FUN_0040ebf0(param_1);
  iVar1 = FUN_0040d450(&DAT_0043ca5c,param_1,0,0);
  local_104 = '\0';
  puVar3 = &local_103;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_0040bd40(0,param_1,&local_104,0x104);
  FUN_0040bd80(0,(LPCSTR)&local_104);
  return -1 < iVar1;
}


