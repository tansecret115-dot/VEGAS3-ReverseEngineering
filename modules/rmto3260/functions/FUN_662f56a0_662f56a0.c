/* Module: rmto3260.dll
   Function: FUN_662f56a0
   Address: 662f56a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662f56a0(void *param_1,uint param_2,char *param_3,int param_4)

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
  FUN_662eefd0(local_10);
  iVar2 = FUN_662f6180(param_2,local_10,&param_3);
  if (-1 < iVar2) {
    if (*(int *)((int)param_1 + 0xc) == 0) {
      iVar2 = FUN_662f2ce0(param_1,local_10[0],(ushort)param_3);
      if (iVar2 != 0) goto LAB_662f5716;
    }
    pFVar3 = FUN_662f2ea0(param_1,pcVar1);
    if (pFVar3 != (FARPROC)0x0) {
      iVar4 = (*pFVar3)(iVar4);
      FUN_662ef0f0((int *)local_10);
      return iVar4;
    }
  }
LAB_662f5716:
  FUN_662ef0f0((int *)local_10);
  return -0x7ffbfd9e;
}


