/* Module: Setup.exe
   Function: _SfTextToMusicTimeToken@16
   Address: 00418950
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfTextToMusicTimeToken_16(LPCSTR param_1,int *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char local_34 [32];
  int local_14;
  uint uStack_10;
  int local_c;
  int local_8;
  
                    /* 0x18950  350  _SfTextToMusicTimeToken@16 */
  uStack_10 = param_3 >> 1 & 1;
  iVar4 = 0;
  iVar5 = 0;
  local_8 = 0;
  local_c = 0;
  pcVar1 = &stack0xffffffc0;
  pcVar2 = &stack0xffffffc0;
  lstrlenA(param_1);
  FUN_004321a0();
  FUN_00418250(param_1,&stack0xffffffc0);
  if ((param_3 & 1) == 0) {
    param_3 = 0;
    do {
      pcVar2 = FUN_004184d0(local_34,pcVar2,0x20);
      if (local_34[0] == '\0') break;
      iVar3 = _SfTextToLongToken_8(local_34,(undefined4 *)0x0);
      param_3 = param_3 + 1;
      iVar4 = iVar5;
      iVar5 = iVar3;
    } while ((int)param_3 < 3);
  }
  else {
    do {
      pcVar1 = FUN_004184d0(local_34,pcVar1,0x20);
      if (local_34[0] == '\0') break;
      iVar4 = _SfTextToLongToken_8(local_34,(undefined4 *)0x0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    local_c = 0;
    iVar5 = local_c;
  }
  local_c = iVar5;
  local_8 = iVar4;
  if (((*param_2 == 5) && (uStack_10 == 0)) && (iVar4 != 0)) {
    local_8 = iVar4 + (((-1 < iVar4) - 1 & 2) - 1);
  }
  local_14 = param_2[9];
  uStack_10 = 0;
  ftol();
  return;
}


