/* Module: pncrt.dll
   Function: FUN_78011300
   Address: 78011300
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78011300(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  BOOL BVar3;
  int *piVar4;
  ulong *puVar5;
  int iVar6;
  char *pcVar7;
  DWORD local_41c;
  uint local_414;
  DWORD local_410;
  int local_40c;
  int *local_408;
  char local_404 [1028];
  
  local_41c = 0;
  local_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar4 = &__pioinfo + ((int)param_1 >> 5);
  iVar6 = (param_1 & 0x1f) * 0x24;
  local_408 = piVar4;
  if ((*(byte *)(iVar6 + 4 + *piVar4) & 0x20) != 0) {
    FUN_780116c0(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)(*piVar4 + iVar6) + 1) & 0x80) == 0) {
    BVar3 = WriteFile(*(HANDLE *)(*piVar4 + iVar6),param_2,param_3,&local_410,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      local_414 = GetLastError();
    }
    else {
      local_41c = local_410;
      local_414 = 0;
    }
  }
  else {
    local_414 = 0;
    pcVar7 = param_2;
    if (param_3 != 0) {
      do {
        pcVar2 = local_404;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar1 == '\n') {
            *pcVar2 = '\r';
            local_40c = local_40c + 1;
            pcVar2 = pcVar2 + 1;
          }
          *pcVar2 = cVar1;
          pcVar2 = pcVar2 + 1;
        } while ((int)pcVar2 - (int)local_404 < 0x400);
        BVar3 = WriteFile(*(HANDLE *)(iVar6 + *local_408),local_404,(int)pcVar2 - (int)local_404,
                          &local_410,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          local_414 = GetLastError();
          break;
        }
        local_41c = local_41c + local_410;
        if (((int)local_410 < (int)pcVar2 - (int)local_404) ||
           (param_3 <= (uint)((int)pcVar7 - (int)param_2))) break;
      } while( true );
    }
  }
  if (local_41c != 0) {
    return local_41c - local_40c;
  }
  if (local_414 == 0) {
    if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    piVar4 = _errno();
    *piVar4 = 0x1c;
    puVar5 = __doserrno();
    *puVar5 = 0;
    return -1;
  }
  if (local_414 != 5) {
    FUN_7800a870(local_414);
    return -1;
  }
  piVar4 = _errno();
  *piVar4 = 9;
  puVar5 = __doserrno();
  *puVar5 = 5;
  return -1;
}


