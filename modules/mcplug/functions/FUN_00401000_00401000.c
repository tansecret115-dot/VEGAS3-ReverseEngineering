/* Module: mcplug.dll
   Function: FUN_00401000
   Address: 00401000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00401000(HMODULE param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uchar local_104;
  undefined4 local_103;
  
  _DAT_00487a50 = &DAT_00486060;
  puVar4 = &DAT_00487a68;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_00487a68 = param_1;
  _DAT_00487b80 = &DAT_004879e0;
  DAT_004879e0 = 0x84;
  _DAT_00487a44 = 0x300;
  DAT_004879f0 = (int *)0x0;
  _DAT_004879e8 = param_1;
  _DAT_004879ec = param_1;
  _DAT_004879e4 = param_1;
  _DAT_004879f4 = 0;
  DAT_004879f8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004879fc);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00487a14);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00487a2c);
  _DAT_00487a48 = 0;
  DAT_00487a4c = 1;
  DAT_00487a54 = 0;
  _DAT_00487a5c = 0;
  DAT_00487a58 = 0;
  DAT_00487a60 = 0;
  if (DAT_004879f0 != (int *)0x0) {
    iVar1 = *DAT_004879f0;
    piVar3 = DAT_004879f0;
    while (iVar1 != 0) {
      (*(code *)piVar3[8])(1);
      if (DAT_004879e0 == 100) {
        piVar3 = piVar3 + 7;
      }
      else {
        piVar3 = piVar3 + 9;
      }
      iVar1 = *piVar3;
    }
  }
  FUN_0041af60(param_1);
  iVar1 = FUN_004197c0(&DAT_00487a6c,param_1,0,0);
  local_104 = '\0';
  puVar4 = &local_103;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  FUN_004180b0(0,param_1,&local_104,0x104);
  FUN_004180f0(0,(LPCSTR)&local_104);
  return -1 < iVar1;
}


