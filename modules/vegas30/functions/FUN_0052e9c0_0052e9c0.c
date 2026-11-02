/* Module: vegas30.exe
   Function: FUN_0052e9c0
   Address: 0052e9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052e9c0(LPCSTR param_1,LPCSTR param_2)

{
  LPCSTR pCVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int local_8;
  
  local_8 = 1;
  cVar3 = *param_2;
  bVar2 = false;
  if (cVar3 != '\0') {
    do {
      if (bVar2) {
        return local_8;
      }
      while (cVar3 != '\0') {
        param_2 = CharNextA(param_2);
        cVar3 = *param_2;
      }
      pCVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar3 = *pCVar1;
      while (cVar3 != '\0') {
        do {
          if (cVar3 == '.') break;
          param_2 = CharNextA(param_2);
          cVar3 = *param_2;
        } while (cVar3 != '\0');
        if (*param_2 == '.') {
          param_2 = CharNextA(param_2);
          iVar4 = lstrcmpA(param_2,param_1);
          if (iVar4 == 0) {
            bVar2 = true;
            goto LAB_0052ea40;
          }
        }
        cVar3 = *param_2;
      }
      param_2 = param_2 + 1;
      local_8 = local_8 + 1;
LAB_0052ea40:
      cVar3 = *param_2;
    } while (cVar3 != '\0');
    if (bVar2) {
      return local_8;
    }
  }
  return 1;
}


