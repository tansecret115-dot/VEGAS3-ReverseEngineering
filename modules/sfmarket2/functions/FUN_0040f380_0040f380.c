/* Module: sfmarket2.dll
   Function: FUN_0040f380
   Address: 0040f380
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR __fastcall FUN_0040f380(int param_1)

{
  CHAR CVar1;
  LPSTR pCVar2;
  int iVar3;
  int iVar4;
  CHAR *pCVar5;
  LPSTR pCVar6;
  CHAR local_80 [128];
  
  pCVar5 = "D:%H:%M:%S";
  pCVar2 = local_80;
  CVar1 = DAT_00495f0c;
  do {
    if (CVar1 == '\0') {
      *pCVar2 = '\0';
      MultiByteToWideChar(0,1,local_80,-1,(LPWSTR)(param_1 + 0x20),0x80);
      *(undefined2 *)(param_1 + 0x11e) = 0;
      return (LPWSTR)(param_1 + 0x20);
    }
    if (CVar1 != '%') {
      *pCVar2 = CVar1;
      pCVar6 = pCVar2 + 1;
      iVar3 = _ismbblead((int)CVar1);
      if (iVar3 != 0) {
        *pCVar6 = *pCVar5;
        pCVar6 = pCVar2 + 2;
        pCVar5 = pCVar5 + 1;
      }
      goto switchD_0040f3cf_caseD_26;
    }
    CVar1 = *pCVar5;
    pCVar5 = pCVar5 + 1;
    pCVar6 = pCVar2;
    switch(CVar1) {
    case '%':
      *pCVar2 = CVar1;
      pCVar6 = pCVar2 + 1;
      break;
    case 'D':
      iVar3 = wsprintfA(pCVar2,"%ld",*(int *)(param_1 + 0x14) / 0x15180);
      pCVar6 = pCVar2 + iVar3;
      break;
    case 'H':
      iVar3 = *(int *)(param_1 + 0x14);
      iVar4 = (iVar3 / 0x15180) * 0x18;
      iVar3 = iVar3 / 0xe10 + (iVar3 >> 0x1f);
      goto LAB_0040f431;
    case 'M':
      iVar3 = *(int *)(param_1 + 0x14);
      iVar4 = (iVar3 / 0xe10) * 0x3c;
      iVar3 = iVar3 / 0x3c + (iVar3 >> 0x1f);
LAB_0040f431:
      iVar3 = wsprintfA(pCVar2,"%02d",(iVar3 - (iVar3 >> 0x1f)) - iVar4);
      pCVar6 = pCVar2 + iVar3;
      break;
    case 'S':
      iVar3 = wsprintfA(pCVar2,"%02d",*(int *)(param_1 + 0x14) % 0x3c);
      pCVar6 = pCVar2 + iVar3;
    }
switchD_0040f3cf_caseD_26:
    CVar1 = *pCVar5;
    pCVar5 = pCVar5 + 1;
    pCVar2 = pCVar6;
  } while( true );
}


