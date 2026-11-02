/* Module: vegas30.exe
   Function: FUN_0048ef20
   Address: 0048ef20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048ef20(int param_1,uint param_2,WPARAM param_3,uint param_4)

{
  short sVar1;
  undefined2 uVar2;
  uint *puVar3;
  int *piVar4;
  HGLOBAL pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  
  piVar13 = *(int **)(param_1 + 0x134);
  if (piVar13 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar13;
  }
  if (((int)param_3 < 0) || (iVar8 + -1 < (int)param_3)) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = *(int **)(piVar13[2] + param_3 * 4);
  }
  if (piVar13 == (int *)0x0) {
switchD_0048efd8_caseD_d:
    return 0;
  }
  piVar4 = (int *)0x0;
  piVar9 = (int *)0x0;
  piVar11 = (int *)0x0;
  piVar10 = piVar9;
  if (((((*(int *)(param_1 + 0x94) < 3) || (piVar12 = piVar13, 7 < *(int *)(param_1 + 0x94))) &&
       (iVar8 = *piVar13, piVar12 = piVar11, iVar8 != 0x10)) &&
      ((piVar10 = piVar13, iVar8 != 0x20 && (piVar10 = piVar9, iVar8 == 0x25)))) &&
     ((piVar10 = (int *)piVar13[2], piVar4 = piVar13, (*(byte *)(piVar13 + 4) & 8) != 0 &&
      ((sVar1 = *(short *)(*(int *)(param_1 + 0xf4) + 8 + param_2 * 0x10), sVar1 != 0xb &&
       (sVar1 != 10)))))) {
    return 0;
  }
  uVar2 = *(undefined2 *)(param_2 * 0x10 + 8 + *(int *)(param_1 + 0xf4));
  switch(uVar2) {
  case 8:
    if ((param_4 & 1) != 0) {
      FUN_00489a10(piVar4,uVar2,(uint)~piVar4[4] >> 1 & 1);
      break;
    }
    goto LAB_0048f0ea;
  case 9:
    if ((param_4 & 1) == 0) {
      FUN_005c9030(piVar4,4,(param_4 & 0xff) >> 1 & 1);
    }
    else {
      FUN_005c9030(piVar4,4,(uint)~piVar4[4] >> 2 & 1);
    }
    break;
  case 10:
    if ((param_4 & 1) != 0) {
      FUN_00489a10(piVar4,uVar2,(uint)~piVar4[4] >> 3 & 1);
      break;
    }
    goto LAB_0048f0ea;
  case 0xb:
    if ((param_4 & 1) == 0) {
      uVar7 = (param_4 & 0xff) >> 1;
    }
    else {
      uVar7 = (uint)~piVar4[4] >> 4;
    }
    FUN_005c9030(piVar4,0x10,uVar7 & 1);
    FUN_00469280(DAT_00647630);
    break;
  case 0xc:
    if ((param_4 & 1) == 0) {
      FUN_005c9030(piVar4,0x20,(param_4 & 0xff) >> 1 & 1);
    }
    else {
      FUN_005c9030(piVar4,0x20,(uint)~piVar4[4] >> 5 & 1);
    }
    break;
  default:
    goto switchD_0048efd8_caseD_d;
  case 0xe:
    if ((param_4 & 1) != 0) {
      FUN_00489a10(piVar4,uVar2,(uint)~piVar4[4] >> 8 & 1);
      break;
    }
    goto LAB_0048f0ea;
  case 0xf:
    if (piVar4[1] != 2) {
      return 0;
    }
    if ((param_4 & 1) != 0) {
      FUN_00489a10(piVar4,uVar2,(uint)~piVar4[4] >> 9 & 1);
      break;
    }
LAB_0048f0ea:
    FUN_00489a10(piVar4,uVar2,(param_4 & 0xff) >> 1 & 1);
    break;
  case 0x2b:
    if ((param_4 & 1) == 0) {
      uVar7 = (param_4 & 0xff) >> 1;
    }
    else {
      uVar7 = ~piVar10[4];
    }
    FUN_005cb070(piVar10,(uVar7 & 1) != 0,3);
    break;
  case 0x2c:
    if ((param_4 & 1) == 0) {
      param_4 = param_4 & 0xff;
    }
    else {
      param_4 = ~piVar10[4];
    }
    FUN_005cb070(piVar10,-((param_4 >> 1 & 1) != 0) & 2,3);
    break;
  case 0x2d:
    if ((param_4 & 1) == 0) {
      uVar7 = (param_4 & 0xff) >> 1;
    }
    else {
      uVar7 = (uint)~piVar10[4] >> 2;
    }
    FUN_005cb070(piVar10,-((uVar7 & 1) != 0) & 4,4);
    break;
  case 0x2e:
    if ((param_4 & 1) == 0) {
      uVar7 = (param_4 & 0xff) >> 1;
    }
    else {
      uVar7 = (uint)~piVar10[4] >> 3;
    }
    FUN_005cb070(piVar10,-((uVar7 & 1) != 0) & 8,8);
    break;
  case 0x30:
    if ((param_4 & 1) == 0) {
      uVar7 = (param_4 & 0xff) >> 1;
    }
    else {
      uVar7 = (uint)~piVar10[4] >> 7;
    }
    FUN_004c8190(piVar10,uVar7 & 1);
    break;
  case 0x4a:
    if (piVar12[10] == 0) {
      pvVar5 = GlobalAlloc(2,0x14);
      puVar6 = GlobalLock(pvVar5);
      piVar12[10] = (int)puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
      }
      if (piVar12[10] == 0) break;
    }
    piVar12[0xb] = 0x676e6463;
    puVar3 = (uint *)piVar12[10];
    if ((param_4 & 1) == 0) {
      param_4 = param_4 & 0xff;
    }
    else {
      param_4 = ~*puVar3;
    }
    *puVar3 = (param_4 >> 1 & 1) << 1 | *puVar3 & 0xfffffffd;
    break;
  case 0x4b:
    if (piVar12[10] == 0) {
      pvVar5 = GlobalAlloc(2,0x14);
      puVar6 = GlobalLock(pvVar5);
      piVar12[10] = (int)puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
      }
      if (piVar12[10] == 0) break;
    }
    piVar12[0xb] = 0x676e6463;
    puVar3 = (uint *)piVar12[10];
    if ((param_4 & 1) == 0) {
      uVar7 = (param_4 & 0xff) >> 1;
    }
    else {
      uVar7 = ~*puVar3 >> 2;
    }
    *puVar3 = (uVar7 & 1) << 2 | *puVar3 & 0xfffffffb;
  }
  SendMessageA(*(HWND *)(param_1 + 0xdc),0x422,param_3,param_2 & 0xffff | 0x10000);
  return 1;
}


