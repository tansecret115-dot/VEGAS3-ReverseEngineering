/* Module: sdpp3260.dll
   Function: FUN_10002a80
   Address: 10002a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10002a80(char *param_1,int *param_2,void *param_3)

{
  bool bVar1;
  char *pcVar2;
  void *pvVar3;
  long lVar4;
  undefined4 *puVar5;
  
  if (((param_1 == (char *)0x0) || (*(int *)(*param_2 + -8) == 0)) || (param_3 == (void *)0x0)) {
    return 0x80004005;
  }
  FUN_10006b30(param_2,&DAT_100091f0);
  pcVar2 = strtok(param_1,&DAT_100091f0);
  if (pcVar2 == (char *)0x0) {
    FUN_10006b30(param_2,param_1);
  }
  else {
    bVar1 = false;
    FUN_10006b30(param_2,pcVar2);
    pcVar2 = strtok((char *)0x0,&DAT_100091f0);
    if (pcVar2 != (char *)0x0) {
      pvVar3 = operator_new(0x10);
      if (pvVar3 == (void *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        lVar4 = strtol(pcVar2,(char **)0x0,10);
        puVar5 = FUN_10006e60(pvVar3,s_SamplesPerSecond_100091dc,lVar4);
      }
      FUN_10005bc0(param_3,puVar5);
      bVar1 = true;
    }
    pcVar2 = strtok((char *)0x0,&DAT_100091d8);
    if (pcVar2 != (char *)0x0) {
      if (bVar1) {
        pvVar3 = operator_new(0x10);
        if (pvVar3 != (void *)0x0) {
          lVar4 = strtol(pcVar2,(char **)0x0,10);
          puVar5 = FUN_10006e60(pvVar3,s_Channels_100091cc,lVar4);
          FUN_10005bc0(param_3,puVar5);
          return 0;
        }
      }
      else {
        pvVar3 = operator_new(0x10);
        if (pvVar3 != (void *)0x0) {
          lVar4 = strtol(pcVar2,(char **)0x0,10);
          puVar5 = FUN_10006e60(pvVar3,s_SamplesPerSecond_100091dc,lVar4);
          FUN_10005bc0(param_3,puVar5);
          return 0;
        }
      }
      FUN_10005bc0(param_3,0);
      return 0;
    }
  }
  return 0;
}


