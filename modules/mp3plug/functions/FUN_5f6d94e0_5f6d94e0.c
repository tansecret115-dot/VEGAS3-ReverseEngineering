/* Module: mp3plug.dll
   Function: FUN_5f6d94e0
   Address: 5f6d94e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f6d94e0(undefined4 param_1,char *param_2,undefined *param_3,char *param_4)

{
  char cVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char local_dc;
  char local_db [199];
  int local_14;
  
  vsprintf(&local_dc,param_4,&stack0x00000014);
  pcVar4 = &local_dc;
  cVar1 = '\0';
  while (local_dc != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = cVar1 + '\x01';
    local_dc = *pcVar4;
  }
  local_14 = (int)(char)(cVar1 + '\x01');
  ppuVar2 = (undefined **)FUN_5f6d9720(0x14,1);
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = (undefined *)FUN_5f6d9760(local_14);
    ppuVar2[3] = puVar3;
    if (puVar3 != (undefined *)0x0) {
      if (param_2 != (char *)0x0) {
        strrchr(param_2,0x2f);
      }
      pcVar4 = FUN_5f6d8e40();
      *ppuVar2 = pcVar4;
      ppuVar2[1] = param_3;
      pcVar4 = FUN_5f6d8e40();
      ppuVar2[2] = pcVar4;
      pcVar5 = ppuVar2[3];
      pcVar4 = local_db + 3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      return ppuVar2;
    }
    FUN_5f6d97a0((int)ppuVar2);
    return &PTR_s_errorhnd_c_5f75c958;
  }
  return &PTR_s_errorhnd_c_5f75c958;
}


