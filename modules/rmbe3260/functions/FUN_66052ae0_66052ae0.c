/* Module: rmbe3260.dll
   Function: FUN_66052ae0
   Address: 66052ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66052ae0(void *this,char *param_1)

{
  char cVar1;
  LPCSTR pCVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *local_10 [3];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  FUN_6605b650(local_10);
  uVar5 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if ((~uVar5 - 1 < 2) || (param_1[1] != ':')) {
    piVar4 = (int *)((int)this + 4);
    FUN_6605b900(local_10,piVar4);
    pCVar2 = (LPCSTR)*piVar4;
    pCVar2 = FUN_66052030(pCVar2,pCVar2 + *(int *)(pCVar2 + -8));
    if ((pCVar2 + 1 < (LPCSTR)(*(int *)(*piVar4 + -8) + *piVar4)) || (*pCVar2 != '\\')) {
      FUN_6605bba0(local_10,&DAT_6606c264);
    }
    FUN_6605bba0(local_10,param_1);
  }
  else {
    FUN_6605b970(local_10,param_1);
  }
  uVar6 = 0;
  _chmod(local_10[0],0x180);
  iVar3 = _unlink(local_10[0]);
  if (iVar3 != 0) {
    piVar4 = _errno();
    if (*piVar4 == 0xd) goto LAB_66052ba1;
  }
  uVar6 = 1;
LAB_66052ba1:
  FUN_6605b770((int *)local_10);
  return uVar6;
}


