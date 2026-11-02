/* Module: vegas30.exe
   Function: FUN_00536770
   Address: 00536770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00536770(LPCSTR param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  CHAR CVar2;
  LPSTR pCVar3;
  undefined4 uVar4;
  LPSTR pCVar5;
  
  *param_2 = 0;
  *param_3 = 0;
  pCVar5 = (char *)0x0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (cVar1 == ';') {
      pCVar5 = CharNextA(param_1);
      *param_1 = '\0';
      param_1 = pCVar5;
      break;
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  CVar2 = *param_1;
  do {
    if (CVar2 == '\0') {
LAB_005367d4:
      if ((pCVar5 != (char *)0x0) && (*pCVar5 != '\0')) {
        uVar4 = _SfTextToLongTokenEx_20(pCVar5,0xffffffff,0,0x8000,0);
        *param_2 = uVar4;
      }
      return 0;
    }
    if (CVar2 == ';') {
      pCVar3 = CharNextA(param_1);
      *param_3 = pCVar3;
      *param_1 = '\0';
      goto LAB_005367d4;
    }
    param_1 = CharNextA(param_1);
    CVar2 = *param_1;
  } while( true );
}


