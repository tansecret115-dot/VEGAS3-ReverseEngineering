/* Module: vegas30.exe
   Function: FUN_00536800
   Address: 00536800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00536800(LPCSTR param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined4 param_5)

{
  char cVar1;
  CHAR CVar2;
  undefined4 uVar3;
  LPSTR pCVar4;
  LPSTR pCVar5;
  LPSTR pCVar6;
  undefined8 uVar7;
  undefined4 local_4;
  
  pCVar5 = (char *)0x0;
  *param_2 = 0;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  local_4 = 0;
  *(undefined4 *)param_4 = 0xffffffff;
  *(undefined4 *)((int)param_4 + 4) = 0xffffffff;
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
  pCVar4 = (char *)0x0;
  CVar2 = *param_1;
  while (CVar2 != '\0') {
    if (CVar2 == ';') {
      pCVar4 = CharNextA(param_1);
      *param_1 = '\0';
      param_1 = pCVar4;
      break;
    }
    param_1 = CharNextA(param_1);
    CVar2 = *param_1;
  }
  CVar2 = *param_1;
  pCVar6 = (char *)0x0;
  do {
    if (CVar2 == '\0') {
LAB_005368ba:
      if ((pCVar5 != (char *)0x0) && (*pCVar5 != '\0')) {
        uVar3 = _SfTextToLongTokenEx_20(pCVar5,0xffffffff,0,0x8000,0);
        *param_2 = uVar3;
      }
      uVar3 = param_5;
      if ((pCVar4 != (char *)0x0) && (*pCVar4 != '\0')) {
        uVar7 = _SfTextToNanoTimeToken_16(pCVar4,param_5,0,&param_1);
        *param_3 = uVar7;
        if (*param_1 != '\0') {
          local_4 = 0x80070057;
        }
      }
      if ((pCVar6 != (char *)0x0) && (*pCVar6 != '\0')) {
        uVar7 = _SfTextToNanoTimeToken_16(pCVar6,uVar3,0,&param_1);
        *param_4 = uVar7;
        if (*param_1 != '\0') {
          return 0x80070057;
        }
      }
      return local_4;
    }
    if (CVar2 == ';') {
      pCVar6 = CharNextA(param_1);
      *param_1 = '\0';
      param_1 = pCVar6;
      goto LAB_005368ba;
    }
    param_1 = CharNextA(param_1);
    CVar2 = *param_1;
  } while( true );
}


