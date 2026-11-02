/* Module: hhupd.exe
   Function: FUN_01002631
   Address: 01002631
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01002631(LPCSTR param_1,LPSTR param_2)

{
  char cVar1;
  LPSTR pCVar2;
  int iVar3;
  CHAR local_108 [260];
  
  *param_2 = '\0';
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    GetModuleFileNameA(DAT_0100b6dc,local_108,0x104);
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      *param_2 = cVar1;
      if (*param_1 == '#') {
        param_1 = CharNextA(param_1);
        pCVar2 = CharUpperA((LPSTR)(int)*param_1);
        if ((char)pCVar2 == 'D') {
          FUN_01005a29(local_108);
          iVar3 = lstrlenA(local_108);
          if (local_108[iVar3 + -1] == '\\') {
            iVar3 = lstrlenA(local_108);
            local_108[iVar3 + -1] = '\0';
          }
        }
        else {
          pCVar2 = CharUpperA((LPSTR)(int)*param_1);
          if ((char)pCVar2 != 'E') {
            if (*param_1 == '#') goto LAB_01002705;
            goto LAB_0100270a;
          }
        }
        lstrcpyA(param_2,local_108);
        iVar3 = lstrlenA(local_108);
        param_2 = param_2 + iVar3;
      }
      else {
LAB_01002705:
        param_2 = CharNextA(param_2);
      }
LAB_0100270a:
      param_1 = CharNextA(param_1);
      cVar1 = *param_1;
    }
    *param_2 = '\0';
  }
  return;
}


