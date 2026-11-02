/* Module: mp3plug.dll
   Function: FUN_5f6a33a0
   Address: 5f6a33a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_5f6a33a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6)

{
  double dVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  LPVOID pvVar8;
  uint uVar9;
  undefined4 uVar10;
  
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  pvVar2 = GlobalAlloc(0x40,0x290);
  puVar3 = GlobalLock(pvVar2);
  if (puVar3 != (undefined4 *)0x0) {
    dVar1 = _DAT_5f72c7c8 / (double)CONCAT44(param_5,param_4);
    puVar3[1] = param_3;
    puVar3[4] = 0xffffffff;
    puVar3[5] = 0xffffffff;
    puVar3[6] = param_4;
    uVar9 = param_6 & 0xf;
    uVar4 = param_6 & 0x30;
    puVar3[8] = 0;
    *puVar3 = param_2;
    puVar3[2] = uVar9;
    puVar3[3] = uVar4;
    puVar3[7] = param_5;
    puVar3[9] = 0;
    puVar3[0x1c] = 1;
    puVar3[0x30] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x33] = 0;
    puVar3[0x32] = 0;
    puVar3[0x2c] = param_2;
    *(double *)(puVar3 + 10) = dVar1;
    switch(param_2) {
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x30:
      if ((uVar9 != 1) || (uVar4 != 0)) {
        puVar3[0x2c] = 0x20;
        puVar5 = FUN_5f6ae070(0x20,param_2);
        puVar3[0x2e] = puVar5;
        uVar10 = puVar3[0x2c];
LAB_5f6a34ab:
        puVar5 = FUN_5f6ae070(param_2,uVar10);
        puVar3[0x31] = puVar5;
      }
      break;
    case 0x13:
      if ((uVar9 != 1) || (uVar4 != 0)) {
        puVar3[0x2c] = 0x21;
        puVar5 = FUN_5f6ae070(0x21,param_2);
        uVar10 = puVar3[0x2c];
        puVar3[0x2e] = puVar5;
        goto LAB_5f6a34ab;
      }
      break;
    default:
      FUN_5f6a39b0(puVar3);
      return (int *)0x80070057;
    case 0x20:
    case 0x21:
      if ((uVar4 != 0) && ((double)CONCAT44(param_5,param_4) < _DAT_5f72c7c8)) {
        puVar5 = FUN_5f6ae070(param_2,param_2);
        puVar3[0x2e] = puVar5;
      }
    }
    piVar7 = param_1;
    if ((int)param_1 < 0) goto LAB_5f6a35a0;
    FUN_5f6a48a0((int)puVar3);
    iVar6 = FUN_5f6a5f30(puVar3[0x2c]);
    puVar3[0x2d] = iVar6 * puVar3[1];
    if (puVar3[2] != 3) goto LAB_5f6a3549;
    puVar3[0x22] = 0x19;
    piVar7 = (int *)FUN_5f6a4760((int)puVar3);
    if ((int)piVar7 < 0) goto LAB_5f6a35a0;
    pvVar2 = GlobalAlloc(0x40,puVar3[0x22] << 3);
    pvVar8 = GlobalLock(pvVar2);
    puVar3[0x23] = pvVar8;
    if (pvVar8 != (LPVOID)0x0) {
      if (puVar3[1] != 2) {
LAB_5f6a3549:
        *param_1 = (int)puVar3;
        return (int *)0x0;
      }
      pvVar2 = GlobalAlloc(0x40,puVar3[0x22] << 3);
      pvVar8 = GlobalLock(pvVar2);
      puVar3[0x24] = pvVar8;
      if (pvVar8 != (LPVOID)0x0) goto LAB_5f6a3549;
    }
  }
  piVar7 = (int *)0x8007000e;
LAB_5f6a35a0:
  FUN_5f6a39b0(puVar3);
  return piVar7;
}


