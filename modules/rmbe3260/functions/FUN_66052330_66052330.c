/* Module: rmbe3260.dll
   Function: FUN_66052330
   Address: 66052330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66052330(void *this,char *param_1)

{
  int *this_00;
  char cVar1;
  LPCSTR pCVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int local_10 [3];
  
  if (param_1 != (char *)0x0) {
    FUN_6605b970((void *)((int)this + 4),param_1);
  }
  this_00 = (int *)((int)this + 4);
  if ((*(int *)(*(int *)((int)this + 4) + -8) == 2) &&
     (*(char *)(*(int *)((int)this + 4) + 1) == ':')) {
    FUN_6605bba0(this_00,&DAT_6606c264);
  }
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pCVar2 = FUN_66052030(param_1,param_1 + (~uVar4 - 1));
  if (3 < *(int *)(*this_00 + -8)) {
    uVar4 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((pCVar2 + 1 == param_1 + (~uVar4 - 1)) && (*pCVar2 == '\\')) {
      piVar3 = FUN_6605bf20(this_00,local_10,*(int *)(*this_00 + -8) - 1);
      FUN_6605b900(this_00,piVar3);
      FUN_6605b770(local_10);
    }
  }
  return;
}


