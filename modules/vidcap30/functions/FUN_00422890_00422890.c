/* Module: vidcap30.exe
   Function: FUN_00422890
   Address: 00422890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004229c3) */
/* WARNING: Removing unreachable block (ram,0x004229d2) */
/* WARNING: Removing unreachable block (ram,0x00422aab) */
/* WARNING: Removing unreachable block (ram,0x00422ac7) */
/* WARNING: Removing unreachable block (ram,0x00422aba) */

int FUN_00422890(int *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  HWND hWnd;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  if (*param_1 != 7) {
    if (*param_1 == 8) {
      iVar1 = FUN_004557b0();
      return iVar1;
    }
    _mbscpy((uchar *)(param_1 + 10),param_2);
    if (((param_1[0x4e] & 1U) != 0) || ((param_1[0x4e] & 2U) != 0)) {
      SetWindowTextA((HWND)param_1[2],(LPCSTR)(param_1 + 10));
    }
    if ((param_1[0x4e] & 4U) == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    InvalidateRect((HWND)param_1[1],(RECT *)(param_1 + 5),0);
    return 0;
  }
  FUN_004258d0();
  piVar8 = param_1 + 10;
  _mbscpy((uchar *)piVar8,param_2);
  iVar1 = FUN_004216b0();
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar2 = lstrcmpA((LPCSTR)piVar8,"");
  if (iVar2 == 0) {
    return iVar1;
  }
  iVar1 = FUN_00422e00();
  if (iVar1 < 0) {
    return iVar1;
  }
  MultiByteToWideChar(0,1,(LPCSTR)piVar8,-1,local_208,0x104);
  local_2 = 0;
  if ((param_1[0x52] & 0x1000U) == 0) {
    uVar4 = param_1[0x53] & 0xfffffff7;
  }
  else {
    uVar4 = param_1[0x53] | 8;
  }
  param_1[0x52] = param_1[0x52];
  param_1[0x53] = uVar4;
  if (((DAT_005bb570 == 0) && ((param_1[0x52] & 0x20U) != 0)) && (param_1[199] != 0)) {
    iVar2 = lstrcmpA("No Capture Device",(LPCSTR)(param_1[199] + 0x28));
    if (iVar2 == 0) {
      return -0x7ffb1feb;
    }
    FUN_004260d0();
    if ((param_1[0x52] & 0x1000U) != 0) {
      return -0x7ffbfb50;
    }
  }
  if ((param_1[0x52] & 0x1000U) != 0) {
    HVar3 = CoCreateInstance((IID *)&DAT_005a2de8,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,
                             (LPVOID *)(param_1 + 0xeb));
    if (HVar3 < 0) {
      return HVar3;
    }
    iVar1 = (**(code **)(*(int *)param_1[0xd4] + 0xc))();
  }
  if (iVar1 < 0) {
    return iVar1;
  }
  if ((param_1[0x53] & 8U) == 0) {
    iVar1 = (**(code **)(*(int *)param_1[0xd4] + 0x34))();
  }
  else {
    iVar1 = FUN_00423670();
  }
  if (iVar1 < 0) {
    return iVar1;
  }
  if ((param_1[0x52] & 0x1000U) == 0) {
    iVar1 = FUN_00423ba0();
  }
  if (iVar1 < 0) {
    return iVar1;
  }
  param_1[0x52] = param_1[0x52] | 4;
  param_1[0x53] = param_1[0x53];
  param_1[0x52] = param_1[0x52] & 0xfffffbff;
  param_1[0x53] = param_1[0x53];
  iVar1 = (**(code **)(*(int *)param_1[200] + 0x14))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)param_1[200] + 0x24))();
    iVar1 = (**(code **)(*(int *)param_1[200] + 0x2c))();
    if (iVar1 == 0) {
      param_1[0x52] = param_1[0x52] | 0x400;
      param_1[0x53] = param_1[0x53];
      (**(code **)(*(int *)param_1[200] + 0x28))();
      (**(code **)(*(int *)param_1[200] + 0x30))();
      param_1[0xe2] = param_1[0xe8];
      param_1[0xe3] = param_1[0xe9];
    }
  }
  piVar8 = (int *)param_1[0xd7];
  (**(code **)(*piVar8 + 0x74))();
  piVar7 = (int *)param_1[0xd7];
  iVar1 = 0;
  (**(code **)(*piVar7 + 0x24))();
  iVar6 = 0;
  (**(code **)(*(int *)param_1[0xd7] + 0x34))((int *)param_1[0xd7]);
  iVar2 = FUN_0042b6a0(param_1);
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  else {
    if (DAT_005bb570 != 0) {
      DAT_005ba4b4 = DAT_005ba4b4 | 0x2000;
      if (DAT_005baad8 == 0) {
        hWnd = GetFocus();
        SfMsgBox_CustomEx(DAT_005ba4bc,0x1030,0,"&Do not show this message again",&DAT_005baad8,
                          "%s%s%s%s","Mouse support will be disabled during full-screen mode.\n\n",
                          "If previewing to the device, you can still use the keyboard to play,\n",
                          "pause, stop, and step through the file. To exit full-screen mode, press Esc.\n\n"
                          ,
                          "If printing to tape, you can press Esc or the Spacebar to stop printing."
                         );
        SetFocus(hWnd);
      }
      iVar2 = (**(code **)(*(int *)param_1[0xd7] + 0x7c))((int *)param_1[0xd7],param_1[1]);
      if ((-1 < iVar2) &&
         (iVar2 = (**(code **)(*(int *)param_1[0xd7] + 0x90))((int *)param_1[0xd7],0xffffffff),
         -1 < iVar2)) {
        param_1[0x52] = param_1[0x52] | 0x4000;
        param_1[0x53] = param_1[0x53];
        FUN_00425230(param_1,1);
      }
      DAT_005ba4b4 = DAT_005ba4b4 & 0xffffdfff;
      goto LAB_00422cc6;
    }
    uVar5 = 0;
  }
  FUN_00425230(param_1,uVar5);
LAB_00422cc6:
  iVar2 = (**(code **)(*(int *)param_1[0xd5] + 0x34))((int *)param_1[0xd5],param_1[1],0x40d,param_1)
  ;
  param_1[0xea] = -1;
  GetClientRect((HWND)param_1[1],(LPRECT)&stack0xfffffdc0);
  SendMessageA((HWND)param_1[1],5,0,((int)piVar8 - (int)piVar7) * 0x10000 | iVar1 - iVar6 & 0xffffU)
  ;
  if (DAT_005bb578 == 0) {
    return iVar2;
  }
  FUN_00411ba0(param_1[1],param_1[0xd4]);
  return iVar2;
}


