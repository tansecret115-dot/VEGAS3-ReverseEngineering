/* Module: rnco3260.dll
   Function: FUN_636f54d0
   Address: 636f54d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636f54d0(void *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  void *extraout_ECX;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  
  local_8 = 1;
  puVar5 = &DAT_63788b40;
  do {
    uVar1 = FUN_636f5630(this,(float)local_8,param_1);
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
    local_8 = local_8 + 1;
    this = extraout_ECX;
  } while ((int)puVar5 < 0x63788f3c);
  uVar1 = ftol();
  iVar2 = ftol();
  (&DAT_63788b3c)[-iVar2] = uVar1;
  uVar1 = ftol();
  iVar2 = ftol();
  piVar4 = &DAT_63788740;
  piVar3 = &DAT_63788f38;
  *(undefined4 *)(&DAT_63788f3c + iVar2 * 4) = uVar1;
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + -1;
    *piVar4 = -iVar2;
    piVar4 = piVar4 + 1;
  } while (0x63788b3c < (int)piVar3);
  DAT_63788b3c = 0;
  DAT_63788740 = 0;
  DAT_63788f38 = 0;
  return 1;
}


