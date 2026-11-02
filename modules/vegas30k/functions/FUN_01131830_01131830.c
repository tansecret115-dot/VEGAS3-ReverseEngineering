/* Module: vegas30k.dll
   Function: FUN_01131830
   Address: 01131830
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_01131830(HWND param_1,LRESULT param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  LPSTR pCVar4;
  char *pcVar5;
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
  
  uVar3 = 0;
  if (*(short *)(param_4 + 0x12) != 0) {
    uVar3 = *(ushort *)(param_4 + 0x10);
  }
  local_41c = *(undefined4 *)(param_4 + 4);
  local_434 = param_2;
  local_430 = 0;
  lstrcpynA(&local_410,(LPCSTR)(uVar3 + 0x14 + param_4),0x410);
  local_1 = 0;
  pcVar5 = &local_410;
  do {
    cVar2 = *pcVar5;
    lpsz = pcVar5;
    while ((cVar2 != '\0' && (cVar2 != '\t'))) {
      pcVar1 = lpsz + 1;
      lpsz = lpsz + 1;
      cVar2 = *pcVar1;
    }
    if (*lpsz != '\0') {
      pCVar4 = CharNextA(lpsz);
      *lpsz = '\0';
      lpsz = pCVar4;
    }
    local_424 = pcVar5;
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
    pcVar5 = lpsz;
  } while (*lpsz != '\0');
  return param_2;
}


