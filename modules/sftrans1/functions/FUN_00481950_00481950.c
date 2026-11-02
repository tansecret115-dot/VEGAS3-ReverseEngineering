/* Module: sftrans1.dll
   Function: FUN_00481950
   Address: 00481950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00481950(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  UINT UVar4;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar5;
  int iVar6;
  double local_10;
  
  uVar2 = param_3 >> 0x10;
  switch(param_3 & 0xffff) {
  case 0x656:
    if (uVar2 != 1) {
      return 0;
    }
    hWnd = GetDlgItem((HWND)param_1[1],0x656);
    wParam = SendMessageA(hWnd,0x147,0,0);
    LVar5 = SendMessageA(hWnd,0x150,wParam,0);
    *(LRESULT *)(param_1[0xc] + 0x14) = LVar5;
    *(undefined4 *)(param_1[0xc] + 0x10) = 1;
    puVar3 = (undefined4 *)(param_1[0xc] + 0x18);
    for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar6 = param_1[0xc];
    switch(*(undefined4 *)(iVar6 + 0x14)) {
    case 1:
      *(undefined4 *)(iVar6 + 0x18) = 0;
      *(undefined4 *)(iVar6 + 0x1c) = 0x3ff00000;
      break;
    case 2:
      *(undefined4 *)(iVar6 + 0x20) = 0;
      *(undefined4 *)(iVar6 + 0x24) = 0x3ff00000;
      break;
    case 3:
      *(undefined4 *)(iVar6 + 0x28) = 0;
      *(undefined4 *)(iVar6 + 0x2c) = 0x3ff00000;
      break;
    case 4:
      *(undefined4 *)(iVar6 + 0x30) = 0;
      *(undefined4 *)(iVar6 + 0x34) = 0x3ff00000;
      break;
    case 5:
      *(undefined4 *)(iVar6 + 0x40) = 0;
      *(undefined4 *)(iVar6 + 0x44) = 0x3ff00000;
      break;
    case 6:
      *(undefined4 *)(iVar6 + 0x38) = 0;
      *(undefined4 *)(iVar6 + 0x3c) = 0x3ff00000;
      break;
    case 7:
      *(undefined4 *)(iVar6 + 0x30) = 0;
      *(undefined4 *)(iVar6 + 0x34) = 0x3ff00000;
      iVar6 = param_1[0xc];
      *(undefined4 *)(iVar6 + 0x28) = 0;
      *(undefined4 *)(iVar6 + 0x2c) = 0x3ff00000;
      break;
    case 8:
      *(undefined4 *)(iVar6 + 0x40) = 0;
      *(undefined4 *)(iVar6 + 0x44) = 0x3ff00000;
      iVar6 = param_1[0xc];
      *(undefined4 *)(iVar6 + 0x38) = 0;
      *(undefined4 *)(iVar6 + 0x3c) = 0x3ff00000;
      break;
    case 10:
      *(undefined4 *)(iVar6 + 0x48) = 0;
      *(undefined4 *)(iVar6 + 0x4c) = 0x3ff00000;
      break;
    case 0xb:
      *(undefined4 *)(iVar6 + 0x50) = 0;
      *(undefined4 *)(iVar6 + 0x54) = 0x3ff00000;
      break;
    case 0xc:
      *(undefined4 *)(iVar6 + 0x58) = 0;
      *(undefined4 *)(iVar6 + 0x5c) = 0x3ff00000;
      break;
    case 0xd:
      *(undefined4 *)(iVar6 + 0x60) = 0;
      *(undefined4 *)(iVar6 + 100) = 0x3ff00000;
      break;
    case 0xe:
      *(undefined4 *)(iVar6 + 0x50) = 0;
      *(undefined4 *)(iVar6 + 0x54) = 0x3ff00000;
      iVar6 = param_1[0xc];
      *(undefined4 *)(iVar6 + 0x48) = 0;
      *(undefined4 *)(iVar6 + 0x4c) = 0x3ff00000;
      break;
    case 0xf:
      *(undefined4 *)(iVar6 + 0x60) = 0;
      *(undefined4 *)(iVar6 + 100) = 0x3ff00000;
      iVar6 = param_1[0xc];
      *(undefined4 *)(iVar6 + 0x58) = 0;
      *(undefined4 *)(iVar6 + 0x5c) = 0x3ff00000;
    }
    goto switchD_00481a9b_caseD_9;
  case 0x658:
    if (uVar2 == 0x200) {
      puVar3 = (undefined4 *)(param_1[0xc] + 0x68);
      iVar6 = FUN_0047c4e0(param_4,puVar3,*puVar3,*(undefined4 *)(param_1[0xc] + 0x6c),0,0xbff00000,
                           0,0x3ff00000,0xd2f1a9fc,0x3f50624d);
      if (iVar6 == 0) {
        (**(code **)(*param_1 + 8))();
        return 0;
      }
      *(undefined4 *)(param_1[0xc] + 0x10) = 1;
      piVar1 = (int *)param_1[0xd];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x2c))(piVar1);
        return 0;
      }
    }
    break;
  case 0x665:
    UVar4 = IsDlgButtonChecked((HWND)param_1[1],0x665);
    *(UINT *)(param_1[0xc] + 0x104) = UVar4;
    goto LAB_00481cad;
  case 0x667:
    if (uVar2 != 0x200) {
      return 0;
    }
    local_10 = (double)*(float *)(param_1[0xc] + 0x124);
    iVar6 = FUN_0047c4e0(param_4,&local_10,local_10,0,0,0,0x3ff00000,0xd2f1a9fc,0x3f50624d);
    if (iVar6 == 0) {
LAB_00481e0d:
      (**(code **)(*param_1 + 8))();
      return 0;
    }
    *(float *)(param_1[0xc] + 0x124) = (float)local_10;
    *(undefined4 *)(param_1[0xc] + 0x104) = 1;
    goto switchD_00481a9b_caseD_9;
  case 0x669:
    if (uVar2 != 0x200) {
      return 0;
    }
    local_10 = (double)*(float *)(param_1[0xc] + 0x120);
    iVar6 = FUN_0047c4e0(param_4,&local_10,local_10,0,0,0,0x3ff00000,0xd2f1a9fc,0x3f50624d);
    if (iVar6 == 0) goto LAB_00481e0d;
    *(float *)(param_1[0xc] + 0x120) = (float)local_10;
    *(undefined4 *)(param_1[0xc] + 0x104) = 1;
    goto switchD_00481a9b_caseD_9;
  case 0x66a:
    UVar4 = IsDlgButtonChecked((HWND)param_1[1],0x66a);
    *(UINT *)(param_1[0xc] + 0xb0) = UVar4;
LAB_00481cad:
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x66c:
    if (uVar2 != 0x200) {
      return 0;
    }
    local_10 = (double)*(float *)(param_1[0xc] + 0xf4);
    iVar6 = FUN_0047c4e0(param_4,&local_10,local_10,0,0,0,0x3ff00000,0xd2f1a9fc,0x3f50624d);
    if (iVar6 == 0) goto LAB_00481e0d;
    *(float *)(param_1[0xc] + 0xf4) = (float)local_10;
    goto LAB_00481de8;
  case 0x66e:
    if (uVar2 != 0x200) {
      return 0;
    }
    local_10 = (double)*(float *)(param_1[0xc] + 0xdc);
    iVar6 = FUN_0047c4e0(param_4,&local_10,local_10,0,0xbff00000,0,0x3ff00000,0xd2f1a9fc,0x3f50624d)
    ;
    if (iVar6 == 0) goto LAB_00481e0d;
    *(float *)(param_1[0xc] + 0xdc) = (float)local_10;
    goto LAB_00481de8;
  case 0x670:
    if (uVar2 != 0x200) {
      return 0;
    }
    local_10 = (double)*(float *)(param_1[0xc] + 0xe0);
    iVar6 = FUN_0047c4e0(param_4,&local_10,local_10,0,0xbff00000,0,0x3ff00000,0xd2f1a9fc,0x3f50624d)
    ;
    if (iVar6 == 0) goto LAB_00481e0d;
    *(float *)(param_1[0xc] + 0xe0) = (float)local_10;
LAB_00481de8:
    *(undefined4 *)(param_1[0xc] + 0xb0) = 1;
switchD_00481a9b_caseD_9:
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x671:
    UVar4 = IsDlgButtonChecked((HWND)param_1[1],0x671);
    *(UINT *)(param_1[0xc] + 0x10) = UVar4;
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x676:
    FUN_00482170();
    return 0;
  case 0x677:
    FUN_004821c0();
  }
  return 0;
}


