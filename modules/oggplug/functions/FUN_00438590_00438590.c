/* Module: oggplug.dll
   Function: FUN_00438590
   Address: 00438590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00438590(float *param_1,float *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  
  pfVar4 = (float *)&stack0xffffffec;
  pfVar9 = (float *)&stack0xffffffec;
  puVar6 = (undefined4 *)&stack0xffffffec;
  iVar2 = param_3[3];
  iVar3 = param_3[4];
  FUN_00444a80();
  pfVar5 = param_1;
  iVar7 = iVar2;
  if (0 < iVar2) {
    do {
      iVar7 = iVar7 + -1;
      *pfVar4 = (_DAT_0044d71c / (float)iVar2) * *pfVar5;
      pfVar4[1] = 0.0;
      pfVar4 = pfVar4 + 2;
      pfVar5 = pfVar5 + 1;
    } while (iVar7 != 0);
  }
  *(float *)(&stack0xffffffe8 + iVar2 * 8) = (_DAT_0044d71c / (float)iVar2) * param_1[iVar2 + -1];
  FUN_0043ef30(param_3,pfVar9);
  iVar7 = (iVar2 * 2) / 2;
  if (0 < iVar7) {
    puVar8 = (undefined4 *)(&stack0xffffffec + iVar7 * 4);
    do {
      uVar1 = *puVar6;
      *puVar6 = *puVar8;
      puVar6 = puVar6 + 1;
      *puVar8 = uVar1;
      iVar7 = iVar7 + -1;
      puVar8 = puVar8 + 1;
    } while (iVar7 != 0);
  }
  FUN_00438430((int)&stack0xffffffec,param_2,iVar2 * 2,iVar3);
  return;
}


