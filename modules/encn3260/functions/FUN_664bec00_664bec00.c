/* Module: encn3260.dll
   Function: FUN_664bec00
   Address: 664bec00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bec00(undefined4 *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  char *local_1c [3];
  char *local_10 [3];
  
  iVar1 = _strnicmp((char *)*param_1,s_RTSP__664ef918,5);
  if (iVar1 == 0) {
    iVar1 = FUN_664bb950(param_1,'.');
    if (5 < iVar1) {
      FUN_664bb9f0(param_1,local_1c,5,iVar1 - 5);
      lVar2 = strtol(local_1c[0],(char **)0x0,10);
      *param_2 = lVar2;
      FUN_664bb9d0(param_1,local_10,iVar1 + 1);
      lVar2 = strtol(local_10[0],(char **)0x0,10);
      *param_3 = lVar2;
      FUN_664bb3e0((int *)local_10);
      FUN_664bb3e0((int *)local_1c);
      return 1;
    }
  }
  return 0;
}


