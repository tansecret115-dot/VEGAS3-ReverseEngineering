/* Module: oggplug.dll
   Function: FUN_0043d5a0
   Address: 0043d5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
FUN_0043d5a0(int param_1,uint *param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,float *param_7)

{
  int *piVar1;
  float fVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float local_c;
  
  puVar3 = param_2;
  uVar7 = param_2[4];
  DAT_0051639c = DAT_0051639c + 1;
  iVar5 = 0;
  if (0 < (int)*param_2) {
    pfVar4 = param_7;
    do {
      iVar5 = iVar5 + 1;
      *pfVar4 = (float)*(int *)(uVar7 + 0x10) +
                *(float *)((param_5 - (int)param_7) + -4 + (int)(pfVar4 + 1));
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < (int)*param_2);
  }
  fVar11 = (float10)FUN_0043d420(param_7,param_7,(int *)param_2);
  puVar8 = (uint *)((1 << ((byte)*(undefined4 *)(uVar7 + 0xc) & 0x1f)) + -1);
  floor((double)((SQRT(fVar11) / (float10)*(int *)(uVar7 + 0x10)) * (float10)(int)puVar8 +
                (float10)_DAT_0044d71c));
  param_2 = (uint *)ftol();
  if ((int)param_2 < 0) {
    param_2 = (uint *)0x0;
  }
  if ((int)puVar8 < (int)param_2) {
    param_2 = puVar8;
  }
  if ((int)param_2 < 1) {
    local_c = 0.0;
  }
  else {
    local_c = ((float)(int)param_2 / (float)(int)puVar8) * (float)*(int *)(uVar7 + 0x10);
  }
  if (param_2 != (uint *)0x0) {
    FUN_00432360();
    iVar5 = FUN_004408f0(param_7,param_7,puVar3[2]);
    if (iVar5 != 0) {
      param_2 = (uint *)0x0;
    }
  }
  piVar6 = (int *)(param_1 + 4);
  FUN_00441e10(piVar6,(uint)param_2,*(int *)(uVar7 + 0xc));
  puVar3[0xb] = puVar3[0xb] + *(int *)(uVar7 + 0xc) + 1;
  puVar3[0xc] = puVar3[0xc] + 1;
  if (param_2 == (uint *)0x0) {
    for (uVar7 = *puVar3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
      *param_7 = 0.0;
      param_7 = param_7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)param_7 = 0;
      param_7 = (float *)((int)param_7 + 1);
    }
    for (uVar7 = *puVar3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)param_3 = 0;
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    return 0;
  }
  FUN_00444a80();
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x68);
  FUN_00432360();
  if ((int)*(uint *)(uVar7 + 0x14) < 2) {
    uVar10 = 0;
  }
  else {
    iVar9 = 0;
    pfVar4 = param_7;
    fVar2 = _DAT_0044d6f0;
    if (0 < (int)puVar3[2]) {
      do {
        if ((*pfVar4 - fVar2 < *(float *)(uVar7 + 0x58)) ||
           (*(float *)(uVar7 + 0x5c) < *pfVar4 - fVar2)) break;
        fVar2 = *pfVar4;
        iVar9 = iVar9 + 1;
        pfVar4 = pfVar4 + 1;
      } while (iVar9 < (int)puVar3[2]);
    }
    uVar10 = (uint)((int)puVar3[2] <= iVar9);
  }
  piVar1 = (int *)(*(int *)(iVar5 + 0x2c) + *(int *)(uVar7 + 0x18 + uVar10 * 4) * 0x1c);
  iVar5 = FUN_00435290(*(uint *)(uVar7 + 0x14));
  FUN_00441e10(piVar6,uVar10,iVar5);
  iVar5 = FUN_00435290(*(uint *)(uVar7 + 0x14));
  iVar9 = 0;
  puVar3[0xb] = puVar3[0xb] + iVar5;
  if (0 < (int)puVar3[2]) {
    do {
      iVar5 = FUN_0043d8c0(piVar1,(int)param_7,(int)&stack0xffffffe8,iVar9);
      iVar5 = FUN_004363f0((int)piVar1,iVar5,piVar6);
      puVar3[0xb] = puVar3[0xb] + iVar5;
      iVar9 = iVar9 + *piVar1;
    } while (iVar9 < (int)puVar3[2]);
  }
  FUN_00432360();
  iVar5 = 0;
  pfVar4 = param_7;
  if (0 < (int)*puVar3) {
    do {
      *pfVar4 = 1.0;
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < (int)*puVar3);
  }
  FUN_00440770((int)param_7,puVar3[3],*puVar3,(float)puVar3[1],(float *)&stack0xffffffe8,puVar3[2],
               local_c,(float)*(int *)(uVar7 + 0x10));
  FUN_00432360();
  FUN_00432360();
  return (uint)param_2;
}


