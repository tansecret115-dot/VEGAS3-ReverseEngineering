/* Module: rmto3260.dll
   Function: FUN_662f38d0
   Address: 662f38d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662f38d0(void *this,char *param_1)

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
  FUN_662eefd0(local_10);
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
    FUN_662ef280(local_10,piVar4);
    pCVar2 = (LPCSTR)*piVar4;
    pCVar2 = FUN_662f44c0(pCVar2,pCVar2 + *(int *)(pCVar2 + -8));
    if ((pCVar2 + 1 < (LPCSTR)(*(int *)(*piVar4 + -8) + *piVar4)) || (*pCVar2 != '\\')) {
      FUN_662ef520(local_10,&DAT_6630b51c);
    }
    FUN_662ef520(local_10,param_1);
  }
  else {
    FUN_662ef2f0(local_10,param_1);
  }
  uVar6 = 0;
  _chmod(local_10[0],0x180);
  iVar3 = _unlink(local_10[0]);
  if (iVar3 != 0) {
    piVar4 = _errno();
    if (*piVar4 == 0xd) goto LAB_662f3991;
  }
  uVar6 = 1;
LAB_662f3991:
  FUN_662ef0f0((int *)local_10);
  return uVar6;
}


