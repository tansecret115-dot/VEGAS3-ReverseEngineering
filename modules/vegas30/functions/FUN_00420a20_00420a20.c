/* Module: vegas30.exe
   Function: FUN_00420a20
   Address: 00420a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420a20(int param_1,int *param_2)

{
  SHORT SVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_EBX;
  WPARAM wParam;
  int **ppiVar6;
  undefined4 uVar7;
  undefined1 *puStack_148;
  int *piStack_144;
  int *piStack_13c;
  int *piStack_138;
  undefined4 uStack_134;
  int *piVar8;
  int *piVar9;
  int local_10c;
  undefined4 local_108;
  
  wParam = 0;
  switch(param_2[2]) {
  case 1:
    lstrcpynA((LPSTR)(param_1 + 0xa8),(LPCSTR)(param_2 + 10),0x104);
    *(undefined1 *)(param_1 + 0x1ab) = 0;
    break;
  case 2:
    if (*(int *)(param_2[6] + 0x244) == 0) {
      piVar9 = *(int **)(param_2[6] + 0x234);
      if (piVar9 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar9;
      }
    }
    else {
      iVar5 = FUN_005d0420();
    }
    wParam = iVar5 - 1;
    _SfGetString_8();
    SfPrintF();
    if (((-1 < (int)wParam) && (param_2[0x53] == 0)) && (SVar1 = GetAsyncKeyState(0x10), -1 < SVar1)
       ) break;
    uVar4 = *(undefined4 *)(param_1 + 0x94);
    local_108 = 0;
    *(int *)(param_1 + 0x94) = param_2[6];
    FUN_005b8630();
    iVar5 = *(int *)(param_1 + 0x8c);
    if (iVar5 == 4) {
      uStack_134 = 1;
LAB_00420cdc:
      piStack_138 = (int *)0x420ce1;
      FUN_005b4320();
    }
    else {
      if (iVar5 == 3) {
        uStack_134 = 4;
        goto LAB_00420cdc;
      }
      if (iVar5 == 2) {
        uStack_134 = 0xffffffff;
        goto LAB_00420cdc;
      }
    }
    FUN_0041ec40();
    *(undefined4 *)(param_1 + 0x94) = uVar4;
    if (*(int *)(param_2[6] + 0x244) == 0) {
      piVar9 = *(int **)(param_2[6] + 0x234);
      if (piVar9 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar9;
      }
    }
    else {
      iVar5 = FUN_005d0420();
    }
    wParam = iVar5 - 1;
    if ((int)wParam < 0) {
      return;
    }
    FUN_00418090();
    break;
  case 3:
  case 4:
    if ((int *)param_2[4] == (int *)0x0) {
      return;
    }
    piVar9 = &local_10c;
    local_10c = 0;
    iVar5 = (**(code **)(*(int *)param_2[4] + 0xb8))();
    if (iVar5 < 0) {
      return;
    }
    if (unaff_EBX == (int *)0x0) {
      return;
    }
    piVar8 = (int *)0x0;
    uStack_134 = 1;
    piStack_13c = (int *)0x420d73;
    piStack_138 = unaff_EBX;
    iVar5 = (**(code **)(*unaff_EBX + 0xc))();
    piStack_13c = piVar9;
    (**(code **)(*piStack_13c + 8))();
    if (iVar5 < 0) {
      return;
    }
    piVar9 = piVar8;
    if (iVar5 == 1) goto LAB_00420db1;
    if (piVar8 == (int *)0x0) {
LAB_00420dbf:
      piStack_144 = (int *)0x50bf;
      puStack_148 = DAT_00647204;
      piStack_144 = (int *)_SfGetString_8();
      puStack_148 = &stack0xfffffee0;
      SfPrintF();
      piStack_144 = (int *)0x420dee;
      FUN_005b8630();
      iVar5 = *(int *)(param_1 + 0x8c);
      if (iVar5 == 4) {
        puStack_148 = *(undefined1 **)(param_1 + 0x1bc);
        uVar4 = *(undefined4 *)(param_1 + 0x88);
        piStack_144 = (int *)0x0;
        uVar7 = 1;
LAB_00420e52:
        FUN_005b4320(uVar7,uVar4);
      }
      else {
        if (iVar5 == 3) {
          puStack_148 = *(undefined1 **)(param_1 + 0x1bc);
          uVar4 = *(undefined4 *)(param_1 + 0x88);
          piStack_144 = (int *)0x0;
          uVar7 = 4;
          goto LAB_00420e52;
        }
        if (iVar5 == 2) {
          piStack_144 = *(int **)(param_1 + 0x94);
          puStack_148 = *(undefined1 **)(param_1 + 0x1bc);
          uVar4 = 0xffffffff;
          uVar7 = 0xffffffff;
          goto LAB_00420e52;
        }
      }
      if (param_2[2] == 4) {
        puStack_148 = (undefined1 *)param_2[3];
        piStack_144 = (int *)(param_2[1] + 0xca);
        FUN_004e9f70();
        piStack_144 = (int *)param_2[1];
        iVar5 = param_2[3];
        puStack_148 = (undefined1 *)0x1;
LAB_00420ea5:
        FUN_004ea590(iVar5);
      }
      else if (param_2[2] == 3) {
        puStack_148 = (undefined1 *)param_2[3];
        piStack_144 = (int *)(param_2[1] + 0x198);
        FUN_004e9f70();
        piStack_144 = (int *)param_2[1];
        iVar5 = param_2[3];
        puStack_148 = (undefined1 *)0x4;
        goto LAB_00420ea5;
      }
      piStack_144 = (int *)&stack0xfffffedc;
      puStack_148 = (undefined1 *)0x1;
      puVar2 = (undefined1 *)FUN_0052b4f0(DAT_00647624,&stack0xfffffee0,0,param_2[4],1);
      piStack_144 = (int *)0x0;
      puStack_148 = puVar2;
      iVar5 = (**(code **)(*(int *)param_2[4] + 0x30))((int *)param_2[4],FUN_0052b5b0);
      FUN_0052b580(puVar2);
      if ((iVar5 == 0) && ((int *)*param_2 != (int *)0x0)) {
        (**(code **)(*(int *)*param_2 + 0x14))();
      }
      *(uint *)**(undefined4 **)(param_1 + 700) = *(uint *)**(undefined4 **)(param_1 + 700) | 0x8000
      ;
      iVar3 = FUN_00418e90(param_2[4]);
      if (iVar3 == 0) {
        (**(code **)(*(int *)param_2[4] + 8))((int *)param_2[4]);
        param_2[4] = 0;
        if (param_2[2] == 3) {
          FUN_00422ed0(param_2[3],param_2[1],0);
        }
        if (iVar5 == 0) {
          FUN_004eb2b0(param_2[3]);
        }
        FUN_004ea040(param_2[3],0);
        return;
      }
      if (iVar5 == 0) {
        FUN_004eb2b0(param_2[3]);
      }
      FUN_004ea040(param_2[3],0);
      FUN_00418090(param_1,piStack_138);
      ppiVar6 = &piStack_13c;
      iVar5 = (**(code **)(*(int *)param_2[4] + 0xb8))((int *)param_2[4]);
      if (iVar5 < 0) {
        return;
      }
      if (piStack_144 == (int *)0x0) {
        return;
      }
      iVar5 = (**(code **)(*piStack_144 + 0xc))(piStack_144,1,&puStack_148,0);
      (*(code *)(*ppiVar6)[2])(ppiVar6);
      goto joined_r0x00420bd5;
    }
    if (param_2[0x53] != 0) {
LAB_00420db1:
      piVar8 = (int *)0x0;
      if (piVar9 != (int *)0x0) {
        piStack_144 = (int *)0x420dbb;
        (**(code **)(*piVar9 + 8))();
        piVar8 = (int *)0x0;
      }
      goto LAB_00420dbf;
    }
    piStack_144 = (int *)0x420da4;
    SVar1 = GetAsyncKeyState(0x10);
    piVar9 = piVar8;
    if (SVar1 < 0) goto LAB_00420db1;
    goto LAB_00420fe4;
  case 5:
    if ((int *)param_2[4] == (int *)0x0) {
      return;
    }
    piVar9 = &local_10c;
    local_10c = 0;
    iVar5 = (**(code **)(*(int *)param_2[4] + 0xb8))();
    if (iVar5 < 0) {
      return;
    }
    if (unaff_EBX == (int *)0x0) {
      return;
    }
    piVar8 = (int *)0x0;
    uStack_134 = 1;
    piStack_13c = (int *)0x420ab7;
    piStack_138 = unaff_EBX;
    iVar5 = (**(code **)(*unaff_EBX + 0xc))();
    piStack_13c = piVar9;
    (**(code **)(*piStack_13c + 8))();
    if (iVar5 < 0) {
      return;
    }
    piVar9 = piVar8;
    if (iVar5 == 1) {
LAB_00420af5:
      piVar8 = (int *)0x0;
      if (piVar9 != (int *)0x0) {
        piStack_144 = (int *)0x420aff;
        (**(code **)(*piVar9 + 8))();
        piVar8 = (int *)0x0;
      }
    }
    else if (piVar8 != (int *)0x0) {
      if (param_2[0x53] == 0) {
        piStack_144 = (int *)0x420ae8;
        SVar1 = GetAsyncKeyState(0x10);
        piVar9 = piVar8;
        if (-1 < SVar1) goto LAB_00420fe4;
      }
      goto LAB_00420af5;
    }
    piStack_144 = (int *)0x50bf;
    puStack_148 = DAT_00647204;
    piStack_144 = (int *)_SfGetString_8();
    puStack_148 = &stack0xfffffee0;
    SfPrintF();
    piStack_144 = (int *)&stack0xfffffedc;
    puStack_148 = (undefined1 *)0x1;
    puVar2 = (undefined1 *)FUN_0052b4f0(DAT_00647624,&stack0xfffffee0,0,param_2[4],1);
    piStack_144 = (int *)0x0;
    puStack_148 = puVar2;
    (**(code **)(*(int *)param_2[4] + 0x30))((int *)param_2[4],FUN_0052b5b0);
    FUN_0052b580(puVar2);
    iVar5 = FUN_00418e90(param_2[4]);
    if (iVar5 == 0) {
      (**(code **)(*(int *)param_2[4] + 8))((int *)param_2[4]);
      param_2[4] = 0;
      return;
    }
    FUN_00418090(param_1,piStack_138);
    ppiVar6 = &piStack_13c;
    iVar5 = (**(code **)(*(int *)param_2[4] + 0xb8))((int *)param_2[4]);
    if (iVar5 < 0) {
      return;
    }
    if (piStack_144 == (int *)0x0) {
      return;
    }
    iVar5 = (**(code **)(*piStack_144 + 0xc))(piStack_144,1,&puStack_148,0);
    (*(code *)(*ppiVar6)[2])(ppiVar6);
joined_r0x00420bd5:
    if (iVar5 < 0) {
      return;
    }
    if (piVar8 == (int *)0x0) {
      return;
    }
LAB_00420fe4:
    piStack_144 = (int *)0x420fea;
    (**(code **)(*piVar8 + 8))();
    lstrcpynA((LPSTR)(param_1 + 0xa8),(LPCSTR)(param_2 + 10),0x104);
    *(undefined1 *)(param_1 + 0x1ab) = 0;
    iVar5 = FUN_00418e90();
    wParam = iVar5 - 1;
  }
  iVar5 = *(int *)(param_1 + 0x8c);
  if (iVar5 == 2) {
    FUN_0041fa50();
  }
  else if (iVar5 == 3) {
    FUN_0041fa50();
    if (*(int **)(param_1 + 0x354) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x354) + 8))();
      *(undefined4 *)(param_1 + 0x354) = 0;
    }
  }
  else if (iVar5 == 4) {
    FUN_0041fa50();
    if (*(int **)(param_1 + 0x354) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x354) + 8))();
      *(undefined4 *)(param_1 + 0x354) = 0;
    }
  }
  *(int *)(param_1 + 0x88) = param_2[1];
  *(int *)(param_1 + 0x8c) = param_2[2];
  *(int *)(param_1 + 700) = param_2[3];
  *(int *)(param_1 + 0x90) = param_2[4];
  *(int *)(param_1 + 0x2b8) = param_2[5];
  iVar5 = param_2[6];
  *(int *)(param_1 + 0x94) = iVar5;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar5 + 0x1c);
  }
  *(int *)(param_1 + 0x9c) = param_2[8];
  iVar5 = param_2[9];
  *(int *)(param_1 + 0xa0) = iVar5;
  if (iVar5 != 0) {
    uVar4 = FUN_00573720();
    *(undefined4 *)(param_1 + 0xa4) = uVar4;
  }
  *(int *)(param_1 + 0x280) = param_2[0x4e];
  *(int *)(param_1 + 0x1ac) = param_2[0x4b];
  *(int *)(param_1 + 0x1b0) = param_2[0x4c];
  *(int *)(param_1 + 0x284) = param_2[0x4f];
  *(int *)(param_1 + 0x288) = param_2[0x50];
  *(int *)(param_1 + 0x28c) = param_2[0x51];
  *(int *)(param_1 + 0x290) = param_2[0x52];
  iVar5 = FUN_00422820();
  if (iVar5 == 0) {
    if (*(HWND *)(param_1 + 0x210) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(param_1 + 0x210));
      *(undefined4 *)(param_1 + 0x210) = 0;
    }
  }
  else {
    FUN_004181a0();
  }
  iVar5 = FUN_00418050();
  if (iVar5 < (int)wParam) {
    wParam = FUN_00418050();
  }
  FUN_0041eb90();
  FUN_00419310();
  FUN_00418c30();
  uStack_134 = 0x42117d;
  SendMessageA(*(HWND *)(param_1 + 0x1b4),0x602,wParam,0);
  FUN_0041a890();
  FUN_00418270();
  InvalidateRect(*(HWND *)(param_1 + 0x1b4),(RECT *)0x0,1);
  InvalidateRect(*(HWND *)(param_1 + 0x1c8),(RECT *)0x0,1);
  FUN_0040d4a0();
  return;
}


