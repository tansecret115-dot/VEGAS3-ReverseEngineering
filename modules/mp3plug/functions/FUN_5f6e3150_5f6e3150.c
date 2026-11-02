/* Module: mp3plug.dll
   Function: FUN_5f6e3150
   Address: 5f6e3150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6e3150(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int local_2c [2];
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  
  iVar1 = *param_1;
  iVar3 = 0;
  piVar5 = param_1;
  if (0 < iVar1) {
    do {
      iVar1 = FUN_5f6fc3f0((int)(param_1 + 0x18d5),0x90,iVar3);
      FUN_5f6fb1a0((int *)piVar5[0x553],iVar1);
      iVar3 = iVar3 + 1;
      iVar1 = *param_1;
      piVar5 = piVar5 + 0x9c1;
    } while (iVar3 < iVar1);
  }
  if (iVar1 == 1) {
    iVar1 = FUN_5f6fc3f0((int)(param_1 + 0x18d5),0,0);
    FUN_5f6fcbc0(param_1 + 0x556);
    FUN_5f6fb600((int *)param_1[0x555],iVar1,(int)(param_1 + 0x556));
  }
  else {
    FUN_5f6fcbc0(param_1 + 0x556);
    FUN_5f6fcbc0(param_1 + 0xf17);
    iVar1 = FUN_5f6fc3f0((int)(param_1 + 0x18d5),0,0);
    FUN_5f6fb970((int *)param_1[0x555],iVar1,(int)(param_1 + 0x556),(int)(param_1 + 0xf17));
    if (param_1[0x89] != 0) {
      FUN_5f6fd3f0((int)(param_1 + 0x556),(int)(param_1 + 0xf17),(float)param_1[0x18d4],0x240);
    }
  }
  FUN_5f6fb4c0((int *)param_1[0x553],(int *)param_1[0xf14],*param_1,1,param_1 + 0x554,
               param_1 + 0xf15);
  iVar1 = 0;
  piVar5 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar5[0x554] == 2) {
        local_2c[iVar1] = 1;
      }
      else {
        local_2c[iVar1] = 0;
      }
      if (local_2c[iVar1] == 0) {
        FUN_5f6e3ad0((int)(param_1 + 1),(int)(param_1 + 0x553));
      }
      else {
        FUN_5f6e36f0((int)(param_1 + 0x2aa),(int)(param_1 + 0x553));
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 0x9c1;
    } while (iVar1 < *param_1);
  }
  FUN_5f6fc420((int)(param_1 + 0x18d5),0x240);
  iVar1 = *param_1;
  if ((iVar1 == 2) && (param_1[0x554] == param_1[0xf15])) {
    if (param_1[local_2c[0] * 0x2a9 + 0x88] == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_5f6fd060(param_1[local_2c[0] * 0x2a9 + 0x86],(int)(param_1 + 0xe25),
                           (int)(param_1 + 0x17e6),(int)(param_1 + 0xe4c),(int)(param_1 + 0x180d),
                           (int)(param_1 + 0x9d6),(int)(param_1 + 0x1397),(int)(param_1 + 0xdfe),
                           (int)(param_1 + 0x17bf),param_1 + 0xf12,param_2,param_1 + 0x1834,
                           (int)(param_1 + local_2c[0] * 0x2a9 + 0x5e));
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    *param_3 = uVar2;
    iVar1 = 0;
    if (0 < param_1[local_2c[0] * 0x2a9 + 0x86]) {
      do {
        param_3[iVar1 + 0x30a] = param_1[local_2c[0] * 0x2a9 + 0x5d];
        param_3[iVar1 + 0x5ef] = param_1[iVar1 + 0x1834];
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[local_2c[0] * 0x2a9 + 0x86]);
    }
    if (((param_2 == 0) && (param_3[1] = 0, param_1[local_2c[0] * 0x2a9 + 0x8c] != 0)) &&
       (iVar1 = 0, 0 < param_1[local_2c[0] * 0x2a9 + 0x86])) {
      do {
        iVar3 = iVar1 + 0x5ef;
        iVar1 = iVar1 + 1;
        param_3[1] = (uint)((int)param_3[iVar3] < param_1[local_2c[0] * 0x2a9 + 0x5d]) | param_3[1];
      } while (iVar1 < param_1[local_2c[0] * 0x2a9 + 0x86]);
    }
    if (param_3[1] == 0) {
      iVar1 = *param_1;
    }
    else {
      FUN_5f6fdde0(param_1[local_2c[0] * 0x2a9 + 0x87],(int)(param_1 + 0xe25),
                   (int)(param_1 + 0x17e6),(int)(param_1 + 0x9d6),(int)(param_1 + 0x1397),
                   (int)(param_1 + 0xdfe),(int)(param_1 + 0x17bf),(int)(param_1 + 0x185e),
                   (int)(param_1 + 0x1885),(int)(param_1 + 0x18ac),param_3 + 0x5ef,
                   param_1[local_2c[0] * 0x2a9 + 0x5d],(int)(param_1 + local_2c[0] * 0x2a9 + 0x5e),
                   param_1[local_2c[0] * 0x2a9 + 0x86]);
      local_24 = (int *)0x0;
      iVar1 = param_1[local_2c[0] * 0x2a9 + 0x86];
      if (iVar1 < 1) {
        iVar1 = *param_1;
      }
      else {
        piVar5 = param_1 + 0x1837;
        puVar4 = param_3 + 2;
        local_18 = piVar5;
        do {
          FUN_5f6d5c60(piVar5,1,puVar4,iVar1,param_1[local_2c[0] * 0x2a9 + 0x5d]);
          puVar4 = puVar4 + 1;
          local_24 = (int *)((int)local_24 + 1);
          piVar5 = piVar5 + 0xd;
          iVar1 = param_1[local_2c[0] * 0x2a9 + 0x86];
        } while ((int)local_24 < iVar1);
        iVar1 = *param_1;
      }
    }
  }
  if (0 < iVar1) {
    local_24 = param_1 + 0x9d6;
    local_20 = param_1 + 0xdfe;
    local_1c = param_1 + 0xe25;
    local_18 = param_1 + 0xe4c;
    piVar5 = param_3 + 0x29;
    iVar1 = 0;
    piVar6 = param_1;
    do {
      iVar3 = local_2c[iVar1];
      FUN_5f6fd5e0(local_24,local_20,local_1c,local_18,piVar6[0x554],param_1[iVar3 * 0x2a9 + 0x5c],
                   param_1[iVar3 * 0x2a9 + 0x5d],param_1 + iVar3 * 0x2a9 + 0x5e,piVar5);
      local_24 = local_24 + 0x9c1;
      local_20 = local_20 + 0x9c1;
      local_1c = local_1c + 0x9c1;
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 0x2e5;
      piVar6 = piVar6 + 0x9c1;
      local_18 = local_18 + 0x9c1;
    } while (iVar1 < *param_1);
  }
  return 0;
}


