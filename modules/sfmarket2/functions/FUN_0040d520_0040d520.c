/* Module: sfmarket2.dll
   Function: FUN_0040d520
   Address: 0040d520
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040d520(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  SHORT SVar3;
  HWND pHVar4;
  int iVar5;
  DWORD dwStyle;
  int unaff_EBX;
  int iVar6;
  uint uVar7;
  WINDOWPLACEMENT *pWVar8;
  uint uVar9;
  int *piVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iStack_50;
  WINDOWPLACEMENT WStack_4c;
  undefined4 uStack_8;
  int *piStack_4;
  
  *param_3 = *(int *)((int)this + 4);
  if (*(int *)((int)this + 0x10bc) != 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x80,0,*(int *)((int)this + 0x10bc));
  }
  pHVar4 = CreateWindowExA(0,"AtlAxWin",(LPCSTR)0x0,0x50000000,DAT_004a7348,DAT_004a734c,
                           DAT_004a7350 - DAT_004a7348,DAT_004a7354 - DAT_004a734c,
                           *(HWND *)((int)this + 4),(HMENU)0x0,DAT_004a9c0c,(LPVOID)0x0);
  *(HWND *)((int)this + 0x48) = pHVar4;
  SetWindowLongA(pHVar4,-0xc,500);
  param_3 = (int *)0x0;
  if (&stack0x00000000 == (undefined1 *)0xfffffff4) {
    iVar6 = -0x7fffbffd;
  }
  else {
    piVar10 = (int *)SendMessageA(*(HWND *)((int)this + 0x48),DAT_004a99b4,0,0);
    iVar6 = (-(uint)(piVar10 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
    if (-1 < iVar6) {
      iVar6 = (**(code **)*piVar10)();
    }
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 8))();
    }
  }
  if (-1 < iVar6) {
    pwVar11 = L"{8856F961-340A-11D0-A96B-00C04FD705A2}";
    iVar6 = (**(code **)(iRam00000000 + 0xc))();
    (**(code **)(*piStack_4 + 8))(piStack_4);
    uStack_8 = 0;
    if (-1 < iVar6) {
      puVar1 = (undefined4 *)((int)this + 0x50);
      *puVar1 = 0;
      if (&stack0x00000000 == (undefined1 *)0x8) {
        iVar6 = -0x7fffbffd;
      }
      else {
        piVar10 = (int *)SendMessageA(*(HWND *)((int)this + 0x48),DAT_004a99b0,0,0);
        iVar6 = (-(uint)(piVar10 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
        if (-1 < iVar6) {
          iVar6 = (**(code **)*piVar10)(piVar10,&DAT_004a4130,puVar1);
        }
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 8))(piVar10);
        }
      }
      if (-1 < iVar6) {
        iVar6 = (*(code *)**(undefined4 **)*puVar1)
                          ((undefined4 *)*puVar1,&DAT_004a4120,&stack0xffffff9c);
        if ((-1 < iVar6) &&
           (iVar6 = (**(code **)(*(int *)pwVar11 + 0x10))(pwVar11,&DAT_004a4090,&stack0xffffff8c),
           -1 < iVar6)) {
          iVar6 = (**(code **)(*param_3 + 0x14))(param_3,(int)this + 0x1c,(int)this + 0x44);
        }
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 8))(param_3);
        }
        FUN_00409c30((int *)&stack0xffffff90);
        if (-1 < iVar6) {
          iVar5 = *(int *)((int)this + 0x4c);
          if (iVar5 != 0) {
            piVar10 = (int *)0x0;
            piVar12 = (int *)0x0;
            iVar6 = FUN_0040e110(*(HWND *)((int)this + 0x48),(LRESULT *)&stack0xffffff90);
            if (-1 < iVar6) {
              iVar6 = (**(code **)*piVar12)(piVar12,&DAT_004956a8,&stack0xffffff8c);
            }
            if (piVar12 != (int *)0x0) {
              (**(code **)(*piVar12 + 8))(piVar12);
            }
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*piVar10 + 0x1c))(piVar10,iVar5);
            }
            if (piVar10 != (int *)0x0) {
              (**(code **)(*piVar10 + 8))(piVar10);
            }
          }
          if (-1 < iVar6) {
            piVar10 = (int *)0x0;
            if (&stack0x00000000 == (undefined1 *)0x14) {
              iVar6 = -0x7fffbffd;
            }
            else {
              piVar12 = (int *)SendMessageA(*(HWND *)((int)this + 0x48),DAT_004a99b4,0,0);
              iVar6 = (-(uint)(piVar12 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
              if (-1 < iVar6) {
                iVar6 = (**(code **)*piVar12)(piVar12,&DAT_00495500,&stack0xffffff8c);
              }
              if (piVar12 != (int *)0x0) {
                (**(code **)(*piVar12 + 8))(piVar12);
              }
            }
            if (-1 < iVar6) {
              SVar3 = GetKeyState(0x10);
              if ((-1 < SVar3) || (SVar3 = GetKeyState(0x11), -1 < SVar3)) {
                iVar6 = (**(code **)(*piVar10 + 0x74))(piVar10,0);
              }
              (**(code **)(*piVar10 + 8))(piVar10);
            }
            SetFocus(*(HWND *)((int)this + 0x48));
            pWVar8 = &WStack_4c;
            uVar9 = 0x2c;
            uVar7 = 3;
            iVar5 = FUN_00401340();
            uVar7 = FUN_004290f0(iVar5,uVar7,(LPBYTE)pWVar8,uVar9);
            if (uVar7 != 0) {
              SetWindowPlacement(*(HWND *)((int)this + 4),&WStack_4c);
            }
            if (*(int *)((int)this + 0x10ac) == 0) {
              uVar7 = GetWindowLongA(*(HWND *)((int)this + 4),-0x10);
              SetWindowLongA(*(HWND *)((int)this + 4),-0x10,uVar7 & 0xfffbffff);
            }
            if (((*(int *)((int)this + 0x109c) != 0) && (*(int *)((int)this + 0x10a0) != 0)) &&
               (pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),500), pHVar4 != (HWND)0x0)) {
              iVar5 = *(int *)((int)this + 0x10a0);
              iVar2 = *(int *)((int)this + 0x109c);
              iVar13 = 0;
              iVar14 = 0;
              dwStyle = 0x80c80000;
              if (*(int *)((int)this + 0x10ac) != 0) {
                dwStyle = 0x80cc0000;
              }
              AdjustWindowRectEx((LPRECT)&stack0xffffff94,dwStyle,0,0x480);
              *(int *)((int)this + 0x10a4) = iVar2 - iVar13;
              *(int *)((int)this + 0x10a8) = iVar5 - iVar14;
              if ((*(int *)((int)this + 0x10b0) != 0) || (*(int *)((int)this + 0x10ac) != 0)) {
                iVar5 = GetSystemMetrics(3);
                pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1f9);
                if (pHVar4 != (HWND)0x0) {
                  GetClientRect(pHVar4,(LPRECT)&stack0xffffffa4);
                  if (iVar5 <= iStack_50 - unaff_EBX) {
                    iVar5 = iStack_50 - unaff_EBX;
                  }
                }
                *(int *)((int)this + 0x10a8) = *(int *)((int)this + 0x10a8) + iVar5;
              }
              SetWindowPos(*(HWND *)((int)this + 4),(HWND)0x0,0,0,*(int *)((int)this + 0x10a4),
                           *(int *)((int)this + 0x10a8),0x16);
            }
            pHVar4 = GetDlgItem(*(HWND *)((int)this + 4),0x1f9);
            if (pHVar4 != (HWND)0x0) {
              if (*(WPARAM **)((int)this + 0x10b0) == (WPARAM *)0x0) {
                ShowWindow(pHVar4,0);
              }
              else {
                SendMessageA(pHVar4,0xf1,**(WPARAM **)((int)this + 0x10b0),0);
              }
            }
            if (-1 < iVar6) {
              FUN_0043d3f0(*(HWND *)((int)this + 4),(HWND)0x0,(int *)0x0,0x8001);
              iVar6 = FUN_0040d420((int)this);
            }
          }
        }
      }
    }
  }
  return (-1 < iVar6) - 1;
}


