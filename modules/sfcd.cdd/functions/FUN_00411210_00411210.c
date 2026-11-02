/* Module: sfcd.cdd
   Function: FUN_00411210
   Address: 00411210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00411210(HSFCD__ *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x160);
  uVar4 = 0xff;
  uVar3 = cdr_GetSpeed(param_1,0);
  cVar1 = *(char *)(iVar2 + 0x41);
  if (cVar1 == '\x04') {
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
    }
    if ((uVar3 & 2) != 0) {
      uVar4 = 1;
    }
    if ((uVar3 & 4) != 0) {
      uVar4 = 2;
    }
    if ((uVar3 & 8) != 0) {
      uVar4 = 3;
    }
    if ((uVar3 & 0x10) != 0) {
      uVar4 = 3;
    }
    if ((uVar3 & 0x40) != 0) {
      return 5;
    }
  }
  else if (cVar1 == '\x05') {
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
    }
    if ((uVar3 & 2) != 0) {
      uVar4 = 1;
    }
    if ((uVar3 & 4) != 0) {
      return 3;
    }
  }
  else if (cVar1 == '\x06') {
    if ((uVar3 & 1) != 0) {
      uVar4 = 1;
    }
    if ((uVar3 & 2) != 0) {
      uVar4 = 2;
    }
    if ((uVar3 & 4) != 0) {
      return 4;
    }
  }
  return uVar4;
}


