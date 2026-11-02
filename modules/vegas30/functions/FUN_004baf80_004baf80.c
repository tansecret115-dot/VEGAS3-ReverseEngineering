/* Module: vegas30.exe
   Function: FUN_004baf80
   Address: 004baf80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004baf80(LPSTR param_1,LPCSTR param_2,LPSTR param_3,int param_4,LPCSTR param_5)

{
  char cVar1;
  CHAR CVar2;
  LPCSTR pCVar3;
  LPCSTR lpString2;
  LPCSTR local_4;
  
  if (param_5 == (char *)0x0) {
    *param_1 = '\0';
    *param_3 = '\0';
    return;
  }
  cVar1 = *param_5;
  pCVar3 = param_5;
  while ((cVar1 != '\0' && (cVar1 != '\t'))) {
    pCVar3 = CharNextA(pCVar3);
    cVar1 = *pCVar3;
  }
  cVar1 = *param_5;
  local_4 = param_5;
  while ((cVar1 != '\0' && (cVar1 != ':'))) {
    local_4 = CharNextA(local_4);
    cVar1 = *local_4;
  }
  lpString2 = param_5;
  param_5 = pCVar3;
  if (pCVar3 < local_4) {
    do {
      if (local_4 == param_5 + 1) {
        if (1 < (int)param_2) {
          pCVar3 = param_5 + (1 - (int)lpString2);
          if ((int)param_2 <= (int)(param_5 + (1 - (int)lpString2))) {
            pCVar3 = param_2;
          }
          lstrcpynA(param_1,lpString2,(int)pCVar3);
          param_1[(int)(pCVar3 + -1)] = '\0';
          param_1 = param_1 + (int)(pCVar3 + -1);
          param_2 = param_2 + (1 - (int)pCVar3);
          if (1 < (int)param_2) {
            *param_1 = ':';
            param_1 = param_1 + 1;
            param_2 = param_2 + -1;
          }
        }
        lpString2 = local_4 + 1;
        CVar2 = *lpString2;
        param_5 = lpString2;
        while ((CVar2 != '\0' && (CVar2 != '\t'))) {
          param_5 = CharNextA(param_5);
          CVar2 = *param_5;
        }
        CVar2 = *lpString2;
        local_4 = lpString2;
        while ((CVar2 != '\0' && (CVar2 != ':'))) {
          local_4 = CharNextA(local_4);
          CVar2 = *local_4;
        }
      }
      else {
        if (1 < (int)param_2) {
          pCVar3 = param_5 + (1 - (int)lpString2);
          if ((int)param_2 <= (int)(param_5 + (1 - (int)lpString2))) {
            pCVar3 = param_2;
          }
          lstrcpynA(param_1,lpString2,(int)pCVar3);
          param_1[(int)(pCVar3 + -1)] = '\0';
          param_1 = param_1 + (int)(pCVar3 + -1);
          param_2 = param_2 + (1 - (int)pCVar3);
          if (1 < (int)param_2) {
            *param_1 = '\t';
            param_1 = param_1 + 1;
            param_2 = param_2 + -1;
          }
        }
        lpString2 = param_5 + 2;
        CVar2 = param_5[2];
        param_5 = lpString2;
        while ((CVar2 != '\0' && (CVar2 != '\t'))) {
          param_5 = CharNextA(param_5);
          CVar2 = *param_5;
        }
      }
    } while (param_5 < local_4);
  }
  if ((int)(local_4 + (1 - (int)lpString2)) < (int)param_2) {
    param_2 = local_4 + (1 - (int)lpString2);
  }
  lstrcpynA(param_1,lpString2,(int)param_2);
  param_1[(int)(param_2 + -1)] = '\0';
  lstrcpynA(param_3,local_4 + 1,param_4);
  param_3[param_4 + -1] = '\0';
  return;
}


