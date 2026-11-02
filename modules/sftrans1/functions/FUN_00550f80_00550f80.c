/* Module: sftrans1.dll
   Function: FUN_00550f80
   Address: 00550f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00550f80(ushort *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_4 - param_2 == 1) {
    iVar6 = 0;
    iVar5 = 0;
    puVar2 = param_1;
    do {
      if (*puVar2 != 0) {
        *(int *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x916) = param_2 + -1;
        *(int *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x928) = iVar6 + -1 + param_3;
        *(uint *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x93a) = (uint)*puVar2;
        *(int *)(param_1 + 0x914) = *(int *)(param_1 + 0x914) + 1;
      }
      iVar4 = 2;
      puVar1 = puVar2;
      do {
        *puVar1 = puVar1[1];
        puVar1 = puVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      param_1[iVar5 + 2] = 0;
      iVar5 = iVar5 + 3;
      iVar6 = iVar6 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar5 < 9);
  }
  else if (param_4 - param_2 == -1) {
    iVar5 = 0;
    puVar2 = param_1 + 2;
    do {
      puVar1 = puVar2 + -2;
      if (*puVar2 != 0) {
        *(int *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x916) = param_2 + 1;
        *(int *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x928) = iVar5 + -1 + param_3;
        *(uint *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x93a) = (uint)*puVar2;
        *(int *)(param_1 + 0x914) = *(int *)(param_1 + 0x914) + 1;
      }
      iVar6 = 2;
      puVar3 = puVar2;
      do {
        *puVar3 = puVar3[-1];
        puVar3 = puVar3 + -1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 3;
      *puVar1 = 0;
    } while (iVar5 < 3);
  }
  if (param_5 - param_3 != 1) {
    if (param_5 - param_3 == -1) {
      iVar5 = 0;
      puVar2 = param_1 + 6;
      do {
        if (*puVar2 != 0) {
          *(int *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x916) = iVar5 + -1 + param_4;
          *(int *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x928) = param_3 + 1;
          *(uint *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x93a) = (uint)*puVar2;
          *(int *)(param_1 + 0x914) = *(int *)(param_1 + 0x914) + 1;
        }
        iVar6 = 2;
        puVar1 = puVar2;
        do {
          *puVar1 = puVar1[-3];
          puVar1 = puVar1 + -3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        puVar2[-6] = 0;
        iVar5 = iVar5 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar5 < 3);
    }
    return;
  }
  iVar5 = 0;
  puVar2 = param_1;
  do {
    if (*puVar2 != 0) {
      *(int *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x916) = iVar5 + -1 + param_4;
      *(int *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x928) = param_3 + -1;
      *(uint *)(param_1 + *(int *)(param_1 + 0x914) * 2 + 0x93a) = (uint)*puVar2;
      *(int *)(param_1 + 0x914) = *(int *)(param_1 + 0x914) + 1;
    }
    iVar6 = 2;
    puVar1 = puVar2;
    do {
      *puVar1 = puVar1[3];
      puVar1 = puVar1 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    param_1[iVar5 + 6] = 0;
    iVar5 = iVar5 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar5 < 3);
  return;
}


