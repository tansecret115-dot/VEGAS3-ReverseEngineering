/* Module: aviplug.dll
   Function: FUN_5f943aa0
   Address: 5f943aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f943aa0(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uchar *puVar5;
  char *pcVar6;
  undefined4 local_84;
  uchar auStack_80 [128];
  
  if (param_1[5] != 0x68727473) {
    return 0x8000ffff;
  }
  if ((short)param_1[0x44] == 0) {
    FUN_5f9432e0(param_1 + 0x31,param_3,(int)(param_1 + 5),param_1[0x2a]);
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,0x6e727473,0,&local_84);
    if (iVar1 == 0) {
      iVar1 = *param_1;
      local_84 = 0x3f;
      puVar5 = auStack_80;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5 = puVar5 + 4;
      }
      (**(code **)(iVar1 + 0x2c))(param_1,0x6e727473,auStack_80,&local_84);
      MultiByteToWideChar(0,0,(LPCSTR)auStack_80,-1,(LPWSTR)(param_1 + 0x44),0x40);
    }
    else {
      if (param_1[0x22] == 1) {
        pcVar6 = "Audio stream #%d";
      }
      else if (param_1[0x22] == 2) {
        pcVar6 = "Video stream #%d";
      }
      else {
        pcVar6 = "Unknown stream #%d";
      }
      FUN_5f988570(auStack_80,(BYTE *)pcVar6);
      MultiByteToWideChar(0,1,(LPCSTR)auStack_80,-1,(LPWSTR)(param_1 + 0x44),0x40);
      *(undefined2 *)((int)param_1 + 0x18e) = 0;
    }
  }
  if (0xcb < param_3) {
    param_3 = 0xcc;
  }
  piVar4 = param_1 + 0x31;
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *piVar4;
    piVar4 = piVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)param_2 = (char)*piVar4;
    piVar4 = (int *)((int)piVar4 + 1);
    param_2 = (int *)((int)param_2 + 1);
  }
  return 0;
}


