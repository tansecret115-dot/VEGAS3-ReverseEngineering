/* Module: pncrt.dll
   Function: FUN_78015100
   Address: 78015100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78015100(undefined1 param_1,int *param_2,byte *param_3,uint *param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  switch(param_1) {
  case 0x25:
    **(undefined1 **)param_3 = 0x25;
    *(int *)param_3 = *(int *)param_3 + 1;
    *param_4 = *param_4 - 1;
    break;
  case 0x41:
    FUN_780156a0(*(char **)(param_5 + 0x1c + param_2[6] * 4),(int *)param_3,(int *)param_4);
    return;
  case 0x42:
    FUN_780156a0(*(char **)(param_5 + 0x68 + param_2[4] * 4),(int *)param_3,(int *)param_4);
    return;
  case 0x48:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(param_2[2],2,(int *)param_3,param_4);
    return;
  case 0x49:
    DAT_78042510 = DAT_7804250c;
    iVar3 = param_2[2] % 0xc;
    if (iVar3 == 0) {
      iVar3 = 0xc;
    }
    FUN_780156d0(iVar3,2,(int *)param_3,param_4);
    return;
  case 0x4d:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(param_2[1],2,(int *)param_3,param_4);
    return;
  case 0x53:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(*param_2,2,(int *)param_3,param_4);
    return;
  case 0x55:
    iVar3 = param_2[6];
    goto LAB_78015437;
  case 0x57:
    if (param_2[6] == 0) {
      iVar3 = 6;
    }
    else {
      iVar3 = param_2[6] + -1;
    }
LAB_78015437:
    DAT_78042510 = DAT_7804250c;
    iVar1 = param_2[7];
    if (iVar1 < iVar3) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar1 / 7;
      if (iVar3 <= iVar1 % 7) {
        iVar4 = iVar4 + 1;
      }
    }
    FUN_780156d0(iVar4,2,(int *)param_3,param_4);
    return;
  case 0x58:
    DAT_7804250c = 0;
    FUN_780157e0(*(byte **)(param_5 + 0xa8),param_2,param_3,(int *)param_4,param_5);
    return;
  case 0x59:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(param_2[5] % 100 + (param_2[5] / 100 + 0x13) * 100,4,(int *)param_3,param_4);
    return;
  case 0x5a:
  case 0x7a:
    FUN_78015b30();
    FUN_780156a0((&_tzname)[param_2[8] != 0],(int *)param_3,(int *)param_4);
    return;
  case 0x61:
    FUN_780156a0(*(char **)(param_5 + param_2[6] * 4),(int *)param_3,(int *)param_4);
    return;
  case 0x62:
    FUN_780156a0(*(char **)(param_5 + 0x38 + param_2[4] * 4),(int *)param_3,(int *)param_4);
    return;
  case 99:
    if (DAT_7804250c == 0) {
      pbVar2 = *(byte **)(param_5 + 0xa0);
    }
    else {
      DAT_7804250c = 0;
      pbVar2 = *(byte **)(param_5 + 0xa4);
    }
    FUN_780157e0(pbVar2,param_2,param_3,(int *)param_4,param_5);
    if (*param_4 != 0) {
      **(undefined1 **)param_3 = 0x20;
      *(int *)param_3 = *(int *)param_3 + 1;
      *param_4 = *param_4 - 1;
      FUN_780157e0(*(byte **)(param_5 + 0xa8),param_2,param_3,(int *)param_4,param_5);
      return;
    }
    break;
  case 100:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(param_2[3],2,(int *)param_3,param_4);
    return;
  case 0x6a:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(param_2[7] + 1,3,(int *)param_3,param_4);
    return;
  case 0x6d:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(param_2[4] + 1,2,(int *)param_3,param_4);
    return;
  case 0x70:
    if (param_2[2] < 0xc) {
      FUN_780156a0(*(char **)(param_5 + 0x98),(int *)param_3,(int *)param_4);
      return;
    }
    FUN_780156a0(*(char **)(param_5 + 0x9c),(int *)param_3,(int *)param_4);
    return;
  case 0x77:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(param_2[6],1,(int *)param_3,param_4);
    return;
  case 0x78:
    if (DAT_7804250c != 0) {
      DAT_7804250c = 0;
      FUN_780157e0(*(byte **)(param_5 + 0xa4),param_2,param_3,(int *)param_4,param_5);
      return;
    }
    FUN_780157e0(*(byte **)(param_5 + 0xa0),param_2,param_3,(int *)param_4,param_5);
    return;
  case 0x79:
    DAT_78042510 = DAT_7804250c;
    FUN_780156d0(param_2[5] % 100,2,(int *)param_3,param_4);
    return;
  }
  return;
}


