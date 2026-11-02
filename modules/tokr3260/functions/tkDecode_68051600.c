/* Module: tokr3260.dll
   Function: tkDecode
   Address: 68051600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 tkDecode(int *param_1,int param_2,int param_3,double *param_4)

{
  uint *puVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
                    /* 0x1600  5  tkDecode */
  if (param_1 == (int *)0x0) {
    return 0x80040205;
  }
  param_1[1] = param_1[1] + 1;
  uVar5 = DAT_6805b04c;
  if (param_3 == 0) {
    uVar3 = 0;
    puVar1 = (uint *)param_1[4];
    if ((param_1[2] & 0xfffffffcU) != 0) {
      iVar4 = param_2 - (int)puVar1;
      do {
        uVar3 = uVar3 + 1;
        *puVar1 = *(uint *)(iVar4 + (int)puVar1) ^ uVar5;
        puVar1 = puVar1 + 1;
      } while (uVar3 < (uint)param_1[2] >> 2);
    }
  }
  else if ((param_3 == 1) && (*(char *)param_1[4] == '\0')) {
    uVar5 = param_1[3];
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_4 = 0;
      param_4 = (double *)((int)param_4 + 4);
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)param_4 = 0;
      param_4 = (double *)((int)param_4 + 1);
    }
    return 0;
  }
  pdVar2 = param_4;
  if (*param_1 == 1) {
    pdVar2 = (double *)param_1[5];
  }
  if (param_3 == -1) {
    iVar4 = FUN_680536c0(pdVar2,param_1 + 6,param_1[1]);
    if (iVar4 != 0) {
      return 0x80040206;
    }
  }
  else {
    iVar4 = FUN_68052c60(param_1[4],pdVar2,(uint *)(param_1 + 6),param_1[1]);
    if (iVar4 != 0) {
      return 0x80040206;
    }
  }
  if ((*param_1 == 1) && (uVar5 = 0, (param_1[3] & 0xfffffffeU) != 0)) {
    do {
      uVar5 = uVar5 + 1;
      *(undefined2 *)param_4 = *(undefined2 *)pdVar2;
      pdVar2 = (double *)((int)pdVar2 + 4);
      param_4 = (double *)((int)param_4 + 2);
    } while (uVar5 < (uint)param_1[3] >> 1);
  }
  return 0;
}


