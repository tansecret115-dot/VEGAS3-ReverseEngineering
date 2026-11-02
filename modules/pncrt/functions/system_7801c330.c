/* Module: pncrt.dll
   Function: system
   Address: 7801c330
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl system(char *_Command)

{
  int iVar1;
  intptr_t iVar2;
  int *piVar3;
  char *local_10;
  undefined *local_c;
  char *local_8;
  undefined4 local_4;
  
                    /* 0x1c330  727  system */
  local_10 = getenv("COMSPEC");
  if (_Command == (char *)0x0) {
    if (local_10 != (char *)0x0) {
      iVar1 = _access(local_10,0);
      return (uint)(iVar1 == 0);
    }
    return 0;
  }
  local_c = &DAT_78037a00;
  local_8 = _Command;
  local_4 = 0;
  if (local_10 != (char *)0x0) {
    iVar2 = _spawnve(0,local_10,&local_10,(char **)0x0);
    if (iVar2 != -1) {
      return iVar2;
    }
    piVar3 = _errno();
    if ((*piVar3 != 2) && (piVar3 = _errno(), *piVar3 != 0xd)) {
      return -1;
    }
  }
  local_10 = "command.com";
  if ((_osver & 0x8000) == 0) {
    local_10 = "cmd.exe";
  }
  iVar2 = _spawnvpe(0,local_10,&local_10,(char **)0x0);
  return iVar2;
}


