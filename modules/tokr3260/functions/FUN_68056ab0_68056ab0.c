/* Module: tokr3260.dll
   Function: FUN_68056ab0
   Address: 68056ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_68056ab0(uint *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint local_2008 [2042];
  undefined4 uStackY_20;
  
  FUN_6805a6a0();
  uVar2 = param_1[0x3c89];
  iVar3 = *(int *)(uVar2 + 0x1c);
  uVar4 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  param_1[0x3c77] = uVar4;
  if (((param_1[0x1860] == 1) && (*(int *)(uVar2 + 0x14) == 1)) && (*(int *)(uVar2 + 0x18) == 0)) {
    iVar9 = *(int *)(param_1[0x3c88] + 0xf1dc) + uVar4;
    puVar10 = local_2008;
    for (iVar5 = 0x800; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    uStackY_20 = 0x68056b3c;
    uVar4 = FUN_680561b0(param_1,local_2008,param_2);
    if (uVar4 == 0xfff0bdc1) {
      return 0xfff0bdc1;
    }
    iVar5 = 0;
    if (0 < (int)param_1[0x3c77]) {
      iVar6 = iVar9 + param_3;
      do {
        puVar1 = (undefined1 *)((int)local_2008 + iVar5);
        iVar5 = iVar5 + 1;
        *(undefined1 *)(iVar6 + -1) = *puVar1;
        iVar6 = iVar6 + -1;
      } while (iVar5 < (int)param_1[0x3c77]);
    }
    if (iVar9 < iVar3) {
      uVar7 = iVar3 - iVar9;
      puVar11 = (undefined4 *)(param_3 + iVar9);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = 0xf8f8f8f8;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = 0xf8;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    }
  }
  else {
    uStackY_20 = 0x68056be7;
    uVar4 = FUN_680561b0(param_1,(uint *)(*(int *)(uVar2 + 0x20) + param_3),param_2);
    if (uVar4 == 0xfff0bdc1) {
      return 0xfff0bdc1;
    }
  }
  if ((*(int *)(uVar2 + 0x18) != 1) && (*(int *)(uVar2 + 0xc) != 0x12)) {
    *(uint *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + param_1[0x3c75];
    return uVar4;
  }
  *(uint *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + param_1[0x3c77];
  return uVar4;
}


