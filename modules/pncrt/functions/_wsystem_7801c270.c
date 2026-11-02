/* Module: pncrt.dll
   Function: _wsystem
   Address: 7801c270
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wsystem(wchar_t *_Command)

{
  int iVar1;
  intptr_t iVar2;
  int *piVar3;
  wchar_t *local_10;
  undefined *local_c;
  wchar_t *local_8;
  undefined4 local_4;
  
                    /* 0x1c270  563  _wsystem */
  local_10 = _wgetenv(L"COMSPEC");
  if (_Command == (wchar_t *)0x0) {
    if (local_10 != (wchar_t *)0x0) {
      iVar1 = _waccess(local_10,0);
      return (uint)(iVar1 == 0);
    }
    return 0;
  }
  local_c = &DAT_780379d4;
  local_8 = _Command;
  local_4 = 0;
  if (local_10 != (wchar_t *)0x0) {
    iVar2 = _wspawnve(0,local_10,&local_10,(wchar_t **)0x0);
    if (iVar2 != -1) {
      return iVar2;
    }
    piVar3 = _errno();
    if ((*piVar3 != 2) && (piVar3 = _errno(), *piVar3 != 0xd)) {
      return -1;
    }
  }
  local_10 = L"command.com";
  if ((_osver & 0x8000) == 0) {
    local_10 = L"cmd.exe";
  }
  iVar2 = _wspawnvpe(0,local_10,&local_10,(wchar_t **)0x0);
  return iVar2;
}


