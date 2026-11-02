/* Module: aviplug.dll
   Function: FUN_5f943d30
   Address: 5f943d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f943d30(int *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_retaddr;
  
  piVar5 = param_1;
  iVar8 = param_1[0x15];
  if (*(char *)(iVar8 + 0xb) != '\0') {
    param_1[0x1a] = 0;
    param_1[0x1c] = param_1[0x2a];
    param_1[0x17] = iVar8;
    param_1[0x1b] = 0;
    param_1[0x1d] = 0;
    return 0;
  }
  iVar6 = iVar8 + 0x20;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1 = (int *)0x1;
  piVar5[0x1c] = *(int *)(iVar8 + 0x2c);
  iVar8 = 0;
  piVar5[0x1d] = 0;
  uVar9 = piVar5[0x1c];
  if ((param_3 < 0x80000000) && ((iVar7 = iVar6, 0 < (int)param_3 || (uVar9 <= param_2)))) {
    while (iVar6 = iVar7, param_1 < *(int **)(piVar5[0x15] + 0xc)) {
      uVar10 = *(uint *)(iVar7 + 0xc);
      uVar3 = piVar5[0x1a];
      piVar5[0x1a] = uVar3 + uVar10;
      iVar6 = iVar7 + 0x10;
      piVar5[0x1b] = piVar5[0x1b] + (uint)CARRY4(uVar3,uVar10);
      param_1 = (int *)((int)param_1 + 1);
      iVar8 = iVar8 + (uint)CARRY4(*(uint *)(iVar7 + 0x1c),uVar9);
      piVar5[0x1c] = *(uint *)(iVar7 + 0x1c) + uVar9;
      piVar5[0x1d] = iVar8;
      uVar9 = piVar5[0x1c];
      iVar7 = iVar6;
      if (((int)param_3 <= iVar8) && (((int)param_3 < iVar8 || (param_2 < uVar9)))) break;
    }
  }
  if (((int)param_3 <= piVar5[0x1d]) &&
     (((int)param_3 < piVar5[0x1d] || (param_2 <= (uint)piVar5[0x1c])))) {
    iVar8 = (**(code **)(*piVar5 + 0x54))(piVar5,iVar6);
    if (-1 < iVar8) {
      iVar6 = piVar5[0x17];
      cVar2 = *(char *)(iVar6 + 0xb);
      while (cVar2 == '\0') {
        uVar10 = 0;
        piVar5[0x1c] = piVar5[0x1a];
        piVar5[0x1d] = piVar5[0x1b];
        iVar8 = piVar5[0x1d];
        uVar9 = piVar5[0x1c];
        iVar6 = iVar6 + 0x20;
        if ((iVar8 <= (int)param_3) &&
           ((iVar7 = iVar6, iVar8 < (int)param_3 || (uVar9 <= unaff_retaddr)))) {
          while (iVar6 = iVar7, uVar10 < *(uint *)(piVar5[0x15] + 0xc)) {
            uVar4 = *(uint *)(iVar7 + 0xc);
            puVar1 = (uint *)(piVar5 + 0x1a);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 + uVar4;
            iVar6 = iVar7 + 0x10;
            uVar10 = uVar10 + 1;
            piVar5[0x1b] = piVar5[0x1b] + (uint)CARRY4(uVar3,uVar4);
            iVar8 = iVar8 + (uint)CARRY4(*(uint *)(iVar7 + 0x1c),uVar9);
            piVar5[0x1c] = *(uint *)(iVar7 + 0x1c) + uVar9;
            piVar5[0x1d] = iVar8;
            uVar9 = piVar5[0x1c];
            iVar7 = iVar6;
            if (((int)param_3 <= iVar8) && (((int)param_3 < iVar8 || (unaff_retaddr < uVar9))))
            break;
          }
        }
        if ((piVar5[0x1d] < (int)param_3) ||
           ((piVar5[0x1d] <= (int)param_3 && ((uint)piVar5[0x1c] < unaff_retaddr))))
        goto LAB_5f943eca;
        iVar8 = (**(code **)(*piVar5 + 0x54))(piVar5,iVar6);
        if (iVar8 < 0) goto LAB_5f943e99;
        iVar6 = piVar5[0x17];
        cVar2 = *(char *)(iVar6 + 0xb);
      }
      if (-1 < iVar8) {
        return iVar8;
      }
    }
LAB_5f943e99:
    piVar5[0x1a] = 0;
    piVar5[0x1c] = 0;
    piVar5[0x1b] = 0;
    piVar5[0x1d] = 0;
    return iVar8;
  }
LAB_5f943eca:
  piVar5[0x1a] = 0;
  piVar5[0x1c] = 0;
  piVar5[0x1b] = 0;
  piVar5[0x1d] = 0;
  return -0x7ffb1ff6;
}


