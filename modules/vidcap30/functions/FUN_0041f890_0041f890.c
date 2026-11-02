/* Module: vidcap30.exe
   Function: FUN_0041f890
   Address: 0041f890
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_0041f890(HWND param_1,LRESULT param_2,undefined4 param_3,LPCSTR param_4,
                    undefined4 param_5)

{
  char *pcVar1;
  char cVar2;
  LPSTR pCVar3;
  char *pcVar4;
  LPCSTR lpsz;
  undefined4 local_438;
  LRESULT local_434;
  int local_430;
  char *local_424;
  undefined4 local_41c;
  undefined4 local_418;
  CHAR local_410;
  char local_40f [1038];
  undefined1 local_1;
  
  local_41c = param_5;
  local_434 = param_2;
  local_430 = 0;
  lstrcpynA(&local_410,param_4,0x410);
  local_1 = 0;
  pcVar4 = &local_410;
  do {
    cVar2 = *pcVar4;
    lpsz = pcVar4;
    while ((cVar2 != '\0' && (cVar2 != '\t'))) {
      pcVar1 = lpsz + 1;
      lpsz = lpsz + 1;
      cVar2 = *pcVar1;
    }
    if (*lpsz != '\0') {
      pCVar3 = CharNextA(lpsz);
      *lpsz = '\0';
      lpsz = pCVar3;
    }
    local_424 = pcVar4;
    if (local_430 == 0) {
      local_438 = 7;
      local_418 = param_3;
      param_2 = SendMessageA(param_1,0x1007,0,(LPARAM)&local_438);
      local_434 = param_2;
    }
    else {
      local_438 = 1;
      SendMessageA(param_1,0x1006,0,(LPARAM)&local_438);
    }
    local_430 = local_430 + 1;
    pcVar4 = lpsz;
  } while (*lpsz != '\0');
  return param_2;
}


