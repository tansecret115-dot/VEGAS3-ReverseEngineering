/* Module: rmbe3260.dll
   Function: FUN_6604ee00
   Address: 6604ee00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6604ee00(void *param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  FARPROC pFVar3;
  int iVar4;
  char *local_10 [3];
  
  iVar4 = param_4;
  pcVar1 = param_3;
  if ((param_3 == (char *)0x0) || (param_4 == 0)) {
    return -0x7fffbffd;
  }
  FUN_6605b650(local_10);
  iVar2 = FUN_6604fa90(param_2,local_10,&param_3);
  if (-1 < iVar2) {
    if (*(int *)((int)param_1 + 0xc) == 0) {
      iVar2 = FUN_66051780(param_1,local_10[0],(ushort)param_3);
      if (iVar2 != 0) goto LAB_6604ee76;
    }
    pFVar3 = FUN_66051940(param_1,pcVar1);
    if (pFVar3 != (FARPROC)0x0) {
      iVar4 = (*pFVar3)(iVar4);
      FUN_6605b770((int *)local_10);
      return iVar4;
    }
  }
LAB_6604ee76:
  FUN_6605b770((int *)local_10);
  return -0x7ffbfd9e;
}


