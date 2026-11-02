/* Module: tokr3260.dll
   Function: FUN_68057a10
   Address: 68057a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68057a10(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  
  piVar2 = calloc(2,4);
  if (piVar2 == (int *)0x0) {
    return 0xfff0bdc1;
  }
  piVar3 = calloc(2,4);
  if (piVar3 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar2;
    do {
      pvVar4 = calloc(8,0x2c);
      *piVar7 = (int)pvVar4;
      if (pvVar4 == (void *)0x0) {
        return 0xfff0bdc1;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < 2);
    iVar6 = 0;
    piVar7 = piVar3;
    do {
      pvVar4 = calloc(8,0x2c);
      *piVar7 = (int)pvVar4;
      if (pvVar4 == (void *)0x0) {
        return 0xfff0bdc1;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < 2);
    ppuVar8 = &PTR_DAT_6805ce18;
    *(int **)(param_1 + 0x40) = piVar2;
    *(int **)(param_1 + 0x44) = piVar3;
    puVar10 = &DAT_6805c398;
    do {
      iVar6 = FUN_680578c0(1,7,(int)*ppuVar8,*(int *)(param_1 + 0x2c),(int)puVar10,
                           *(int *)((int)(piVar2 + -0x1a017386) + (int)ppuVar8));
      if (iVar6 == -999999) {
        return 0xfff0bdc1;
      }
      puVar10 = puVar10 + 0x20;
      ppuVar8 = ppuVar8 + 1;
    } while ((int)puVar10 < 0x6805c3d8);
    puVar9 = &DAT_6805c31c;
    do {
      iVar6 = 0x2c;
      puVar5 = puVar9;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *(undefined4 *)(iVar6 + 0x10 + *piVar2) = uVar1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar6 < 0x135);
      puVar9 = puVar9 + 8;
      piVar2 = piVar2 + 1;
    } while ((int)puVar9 < 0x6805c35c);
    ppuVar8 = &PTR_DAT_6805ce20;
    puVar10 = &DAT_6805c3d8;
    do {
      iVar6 = FUN_680578c0(1,7,(int)*ppuVar8,*(int *)(param_1 + 0x2c),(int)puVar10,
                           *(int *)((int)(piVar3 + -0x1a017388) + (int)ppuVar8));
      if (iVar6 == -999999) {
        return 0xfff0bdc1;
      }
      puVar10 = puVar10 + 0x20;
      ppuVar8 = ppuVar8 + 1;
    } while ((int)puVar10 < 0x6805c418);
    puVar9 = &DAT_6805c35c;
    do {
      iVar6 = 0x2c;
      puVar5 = puVar9;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *(undefined4 *)(*piVar3 + 0x10 + iVar6) = uVar1;
        iVar6 = iVar6 + 0x2c;
      } while (iVar6 < 0x135);
      puVar9 = puVar9 + 8;
      piVar3 = piVar3 + 1;
    } while ((int)puVar9 < 0x6805c39c);
    return 0;
  }
  return 0xfff0bdc1;
}


