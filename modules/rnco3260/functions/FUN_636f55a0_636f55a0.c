/* Module: rnco3260.dll
   Function: FUN_636f55a0
   Address: 636f55a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_636f55a0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *extraout_ECX;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  
  local_8 = 1;
  puVar5 = &DAT_63788340;
  do {
    uVar2 = FUN_636f5630(param_1,(float)local_8,50.0);
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    local_8 = local_8 + 1;
    param_1 = extraout_ECX;
  } while ((int)puVar5 < 0x6378873c);
  _DAT_637883a0 = 0;
  _DAT_637885a4 = 0x28;
  piVar4 = &DAT_63787f40;
  piVar3 = &DAT_63788738;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + -1;
    *piVar4 = -iVar1;
    piVar4 = piVar4 + 1;
  } while (0x6378833c < (int)piVar3);
  DAT_6378833c = 0;
  DAT_63787f40 = 0;
  DAT_63788738 = 0;
  return 1;
}


