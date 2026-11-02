/* Module: aviplug.dll
   Function: FUN_5f94f180
   Address: 5f94f180
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f94f180(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  piVar3 = param_1;
  iVar1 = param_1[0x1c];
  iVar6 = -1;
  if (iVar1 == 0) {
    iVar6 = param_1[10];
  }
  else if (*(char *)(iVar1 + 0xb) == '\0') {
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar6 = 0;
    if (iVar4 != 0) {
      piVar7 = (int *)(iVar1 + 0x2c);
      do {
        iVar1 = *piVar7;
        piVar7 = piVar7 + 4;
        iVar6 = iVar6 + iVar1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (*(char *)(iVar1 + 0xb) == '\x01') {
    if (param_1[2] == 0x73647561) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      iVar6 = 0;
      iVar4 = iVar1 + 0x20;
      param_1 = (int *)0x0;
      if (*(int *)(iVar1 + 0xc) != 0) {
        do {
          uVar2 = piVar3[0x14];
          uVar5 = *(uint *)(iVar4 + 4) & 0x7fffffff;
          piVar3[0x14] = uVar2 + uVar5;
          piVar3[0x15] = piVar3[0x15] + (uint)CARRY4(uVar2,uVar5);
          iVar6 = iVar6 + (((*(uint *)(iVar4 + 4) & 0x7fffffff) - 1) +
                          (uint)*(ushort *)(piVar3[0x17] + 0xc)) /
                          (uint)*(ushort *)(piVar3[0x17] + 0xc);
          iVar4 = iVar4 + (uint)*(ushort *)(iVar1 + 8) * 4;
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < *(int **)(iVar1 + 0xc));
      }
    }
    else if ((*param_1 == 0x73646976) || ((param_1[2] == 0x73766169 && (param_1[3] == 0x64737664))))
    {
      iVar6 = *(int *)(iVar1 + 0xc);
    }
  }
  piVar3[0x12] = iVar6;
  piVar3[0x13] = 0;
  return (iVar6 != -1) - 1 & 0x8004e016;
}


