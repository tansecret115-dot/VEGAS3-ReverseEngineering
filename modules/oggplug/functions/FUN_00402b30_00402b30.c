/* Module: oggplug.dll
   Function: FUN_00402b30
   Address: 00402b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402b30(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined **ppuVar4;
  int iVar5;
  char *pcVar6;
  int local_8;
  undefined4 local_4;
  
  iVar5 = 0;
  ppuVar4 = &PTR_DAT_00450018;
  local_4 = 0;
  local_8 = 0;
  do {
    iVar2 = _strnicmp(*ppuVar4,param_1,3);
    if (iVar2 == 0) {
      local_4 = (&DAT_0045004c)[iVar5];
      uVar3 = 0xffffffff;
      pcVar6 = (&PTR_DAT_00450018)[iVar5];
      goto code_r0x00402b88;
    }
    ppuVar4 = ppuVar4 + 1;
    iVar5 = iVar5 + 1;
  } while (ppuVar4 < &DAT_0045004c);
  goto LAB_00402b8d;
  while( true ) {
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
code_r0x00402b88:
    if (uVar3 == 0) break;
  }
  local_8 = ~uVar3 - 1;
LAB_00402b8d:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  return local_4;
}


