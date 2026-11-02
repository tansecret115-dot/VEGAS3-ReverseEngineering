/* Module: sfxpfx2.dll
   Function: FUN_5c8d6790
   Address: 5c8d6790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8d6790(LPSTR param_1)

{
  int iVar1;
  LPSTR lpString2;
  char *pcVar2;
  CHAR local_100 [256];
  
  for (lpString2 = param_1; (*lpString2 == ' ' || (*lpString2 == '\t')); lpString2 = lpString2 + 1)
  {
  }
  lstrcpyA(local_100,lpString2);
  iVar1 = lstrlenA(local_100);
  if (iVar1 != 0) {
    for (pcVar2 = local_100 + iVar1 + -1; (*pcVar2 == ' ' || (*pcVar2 == '\t'));
        pcVar2 = pcVar2 + -1) {
    }
    pcVar2[1] = '\0';
    lstrcpyA(param_1,local_100);
    lstrlenA(local_100);
  }
  return;
}


