/* Module: rmto3260.dll
   Function: FUN_662f3a10
   Address: 662f3a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662f3a10(char *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    return 0x80004005;
  }
  uVar3 = 0x80004005;
  iVar1 = _unlink(param_2);
  if ((iVar1 == -1) && (piVar2 = _errno(), *piVar2 == 0xd)) {
    _chmod(param_2,0x180);
    iVar1 = _unlink(param_2);
    if ((iVar1 == -1) && (piVar2 = _errno(), *piVar2 == 0xd)) {
      return 0x80004005;
    }
    iVar1 = rename(param_1,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    _chmod(param_2,0x100);
    return uVar3;
  }
  iVar1 = rename(param_1,param_2);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


