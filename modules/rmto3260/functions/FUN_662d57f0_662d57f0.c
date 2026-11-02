/* Module: rmto3260.dll
   Function: FUN_662d57f0
   Address: 662d57f0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __fastcall FUN_662d57f0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  if (DAT_66311cc8 == (char *)0x0) {
    DAT_66311cc8 = operator_new(400);
  }
  uVar2 = fgetc(*(FILE **)(param_1 + 4));
  pcVar6 = DAT_66311cc8;
  if ((char)uVar2 == -1) {
LAB_662d59e4:
    if (DAT_66311cc8 == (char *)0x0) {
      return (char *)0x0;
    }
    operator_delete(DAT_66311cc8);
    DAT_66311cc8 = (char *)0x0;
    return (char *)0x0;
  }
  iVar3 = isspace((int)(char)uVar2);
  while (iVar3 != 0) {
    uVar2 = fgetc(*(FILE **)(param_1 + 4));
    if ((char)uVar2 == -1) goto switchD_662d5951_caseD_ffffffff;
    iVar3 = isspace((int)(char)uVar2);
  }
  uVar5 = uVar2 & 0xff;
  cVar1 = (char)uVar2;
  iVar3 = (int)cVar1;
  iVar4 = isalpha(iVar3);
  if (iVar4 == 0) {
    iVar4 = isdigit(iVar3);
    if (iVar4 == 0) {
      switch(iVar3) {
      default:
        fprintf((FILE *)(_iob_exref + 0x40),s_Error_parsing_image_map_file__6630abfc);
        return (char *)0x0;
      case 0x22:
        iVar3 = fgetc(*(FILE **)(param_1 + 4));
        cVar1 = (char)iVar3;
        while( true ) {
          if (cVar1 == '\"') {
            *pcVar6 = '\0';
            return DAT_66311cc8;
          }
          cVar1 = (char)iVar3;
          if (((cVar1 == -1) || (cVar1 == '\n')) || (cVar1 == '\r')) break;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
          iVar3 = fgetc(*(FILE **)(param_1 + 4));
          cVar1 = (char)iVar3;
        }
        break;
      case 0x2c:
        return &DAT_6630ac1c;
      case 0x2f:
        return &DAT_6630ac20;
      case 0x3a:
        return &DAT_6630ab5c;
      case 0x3c:
        return &DAT_6630abe4;
      case 0x3d:
        return &DAT_6630abe8;
      case 0x3e:
        return &DAT_6630ac24;
      case -1:
        break;
      }
switchD_662d5951_caseD_ffffffff:
      goto LAB_662d59e4;
    }
    iVar3 = isdigit(iVar3);
    while (iVar3 != 0) {
      *pcVar6 = (char)uVar5;
      pcVar6 = pcVar6 + 1;
      uVar2 = fgetc(*(FILE **)(param_1 + 4));
      uVar5 = uVar2 & 0xff;
      cVar1 = (char)uVar2;
      iVar3 = isdigit((int)cVar1);
    }
  }
  else {
    iVar3 = isalpha(iVar3);
    if (iVar3 != 0) {
      do {
        *pcVar6 = (char)uVar5;
        pcVar6 = pcVar6 + 1;
        uVar2 = fgetc(*(FILE **)(param_1 + 4));
        uVar5 = uVar2 & 0xff;
        iVar3 = isalpha((int)(char)uVar2);
      } while (iVar3 != 0);
      *pcVar6 = '\0';
      ungetc((int)(char)uVar2,*(FILE **)(param_1 + 4));
      return DAT_66311cc8;
    }
  }
  *pcVar6 = '\0';
  ungetc((int)cVar1,*(FILE **)(param_1 + 4));
  return DAT_66311cc8;
}


