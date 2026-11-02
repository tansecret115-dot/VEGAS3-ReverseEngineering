/* Module: aviplug.dll
   Function: FUN_5f992440
   Address: 5f992440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f992440(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  double dVar1;
  HGLOBAL pvVar2;
  int *piVar3;
  LPVOID pvVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  code *pcVar11;
  
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  pcVar11 = GlobalAlloc_exref;
  pvVar2 = GlobalAlloc(0x40,0x1d90);
  piVar3 = GlobalLock(pvVar2);
  if (piVar3 == (int *)0x0) {
    return 0x8007000e;
  }
  piVar3[1] = param_5;
  dVar1 = (double)param_4 / (double)param_3;
  piVar3[2] = param_3;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[3] = param_4;
  piVar3[0x756] = param_6 & 0xf00;
  uVar6 = param_6 & 0xf0;
  *piVar3 = param_2;
  piVar3[0x757] = uVar6;
  piVar3[0x758] = param_6 & 0xf;
  piVar3[0x759] = param_6 >> 0xc & 1;
  piVar3[0x74c] = param_6 >> 0xd & 1;
  *(double *)(piVar3 + 6) = dVar1;
  *(double *)(piVar3 + 10) = _DAT_5f9d7c98 / dVar1;
  if ((param_2 == 0x20) || (param_2 == 0x21)) {
    FUN_5f992340(uVar6,dVar1,piVar3 + 0x4c);
    if (1 < param_5) {
      iVar8 = param_5 + -1;
      piVar5 = piVar3 + 0x84;
      do {
        iVar8 = iVar8 + -1;
        piVar9 = piVar3 + 0x4c;
        piVar10 = piVar5;
        for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar10 = piVar10 + 1;
        }
        piVar5 = piVar5 + 0x38;
        pcVar11 = GlobalAlloc_exref;
      } while (iVar8 != 0);
    }
    iVar8 = DAT_5f9f5c40;
    if (piVar3[0x758] == 3) {
      piVar3[0x75c] = -0x4ec4ec4f;
      piVar3[0x75b] = 1;
      piVar3[0x75d] = 0x40533b13;
      if ((iVar8 == 0) && (iVar8 = FUN_5f992690(), iVar8 < 0)) {
        FUN_5f992dc0(piVar3);
        return 0x8007000e;
      }
      pvVar2 = (HGLOBAL)(*pcVar11)(0x40,piVar3[1] << 2);
      pvVar4 = GlobalLock(pvVar2);
      piVar3[0x75a] = (int)pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        FUN_5f992dc0(piVar3);
        return 0x8007000e;
      }
      iVar8 = 0;
      if (0 < piVar3[1]) {
        do {
          pvVar2 = (HGLOBAL)(*pcVar11)(0x40,200);
          pvVar4 = GlobalLock(pvVar2);
          *(LPVOID *)(piVar3[0x75a] + iVar8 * 4) = pvVar4;
          if (pvVar4 == (LPVOID)0x0) goto LAB_5f99264c;
          iVar8 = iVar8 + 1;
        } while (iVar8 < piVar3[1]);
      }
      pvVar2 = (HGLOBAL)(*pcVar11)(0x40,0x6c);
      piVar5 = GlobalLock(pvVar2);
      piVar3[0x762] = (int)(piVar5 + 1);
      if (piVar5 + 1 == (int *)0x0) {
LAB_5f99264c:
        FUN_5f992dc0(piVar3);
        return 0x8007000e;
      }
      iVar8 = -1;
      do {
        iVar7 = iVar8 + 0x19;
        iVar8 = iVar8 + 1;
        *piVar5 = iVar7 % 0x19;
        piVar5 = piVar5 + 1;
      } while (iVar8 < 0x1a);
    }
  }
  else if (((param_6 & 0xf) == 3) || (uVar6 != 0)) {
    piVar3[0x758] = 2;
    piVar3[0x757] = 0;
    *param_1 = (int)piVar3;
    return 0;
  }
  *param_1 = (int)piVar3;
  return 0;
}


