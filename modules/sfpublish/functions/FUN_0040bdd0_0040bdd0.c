/* Module: sfpublish.dll
   Function: FUN_0040bdd0
   Address: 0040bdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040c02b) */
/* WARNING: Removing unreachable block (ram,0x0040c04a) */

int __thiscall FUN_0040bdd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  SHORT SVar2;
  int *piVar3;
  int iVar4;
  UINT_PTR UVar5;
  int *unaff_EBP;
  int *unaff_ESI;
  int iVar6;
  HRESULT HVar7;
  int **ppiVar8;
  uint uVar9;
  WINDOWPLACEMENT *pWVar10;
  uint uVar11;
  int *local_90 [2];
  int iStack_88;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [8];
  tagRECT local_4c [2];
  WINDOWPLACEMENT WStack_2c;
  
  *param_3 = *(undefined4 *)((int)this + 4);
  GetClientRect(*(HWND *)((int)this + 4),local_4c);
  puVar1 = (undefined4 *)((int)this + 0x4c);
  FUN_0040e0b0(puVar1,"AtlAxWin",*(HWND *)((int)this + 4),&local_4c[0].left,(LPCSTR)0x0,0x50000000,0
               ,(HMENU)0x0,(LPVOID)0x0);
  SetWindowLongA((HWND)*puVar1,-0xc,500);
  local_90[0] = (int *)0x0;
  if (&stack0x00000000 != (undefined1 *)0x94) {
    piVar3 = (int *)SendMessageA((HWND)*puVar1,DAT_004413f4,0,0);
    iVar6 = (-(uint)(piVar3 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
    if (-1 < iVar6) {
      iVar6 = (**(code **)*piVar3)(piVar3);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    if (-1 < iVar6) {
      (**(code **)(*local_90[0] + 0xc))(local_90[0],L"{8856F961-340A-11D0-A96B-00C04FD705A2}");
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      local_90[0] = (int *)0x0;
    }
  }
  if (*(int *)((int)this + 0xa4) != 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x80,0,*(int *)((int)this + 0xa4));
  }
  pWVar10 = &WStack_2c;
  uVar11 = 0x2c;
  uVar9 = 0x3f7;
  iVar6 = FUN_00401310();
  uVar9 = FUN_0041f600(iVar6,uVar9,(LPBYTE)pWVar10,uVar11);
  if (uVar9 == 0) {
    FUN_00424f50(*(HWND *)((int)this + 4),(HWND)0x0,(int *)0x0,0x8001);
  }
  else {
    WStack_2c.length = 0x2c;
    SetWindowPlacement(*(HWND *)((int)this + 4),&WStack_2c);
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  if (&stack0x00000000 == (undefined1 *)0x94) {
    HVar7 = -0x7fffbffd;
  }
  else {
    piVar3 = (int *)SendMessageA(*(HWND *)((int)this + 0x4c),DAT_004413f0,0,0);
    HVar7 = (-(uint)(piVar3 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
    if (-1 < HVar7) {
      HVar7 = (**(code **)*piVar3)(piVar3);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  if (-1 < HVar7) {
    puVar1 = *(undefined4 **)((int)this + 0x54);
    HVar7 = (**(code **)*puVar1)(puVar1);
    if ((-1 < HVar7) &&
       (HVar7 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,&DAT_0043cb30,&stack0xffffff5c),
       -1 < HVar7)) {
      HVar7 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,(int)this + 0x1c,(int)this + 0x44);
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    FUN_00407d90((int *)&stack0xffffff60);
    if (-1 < HVar7) {
      iVar6 = *(int *)((int)this + 0x50);
      if (iVar6 != 0) {
        HVar7 = FUN_0040e110(*(HWND *)((int)this + 0x4c),(LRESULT *)&stack0xffffff60);
        if (-1 < HVar7) {
          HVar7 = (*(code *)*puRam00000000)(0,&DAT_00435620,&stack0xffffff5c);
        }
        if (-1 < HVar7) {
          HVar7 = (*(code *)puRam00000000[7])(0,iVar6);
        }
        if (HVar7 < 0) goto LAB_0040c221;
        if (&stack0x00000000 == (undefined1 *)0xa0) {
          HVar7 = -0x7fffbffd;
        }
        else {
          piVar3 = (int *)SendMessageA(*(HWND *)((int)this + 0x4c),DAT_004413f4,0,0);
          HVar7 = (-(uint)(piVar3 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
          if (-1 < HVar7) {
            HVar7 = (**(code **)*piVar3)(piVar3,&DAT_00435490,&stack0xffffff5c);
          }
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
        }
        if (HVar7 < 0) goto LAB_0040c221;
        SVar2 = GetKeyState(0x10);
        if ((-1 < SVar2) || (SVar2 = GetKeyState(0x11), -1 < SVar2)) {
          HVar7 = (*(code *)puRam00000000[0x1d])(0,0);
        }
        (*(code *)puRam00000000[2])(0);
        if (HVar7 < 0) goto LAB_0040c221;
        SetFocus(*(HWND *)((int)this + 4));
        if (*(int *)((int)this + 0x58) != 0) {
          Ordinal_8(auStack_7c);
          ppiVar8 = local_90;
          Ordinal_8(ppiVar8);
          Ordinal_8(auStack_54);
          Ordinal_8(auStack_78);
          iVar6 = Ordinal_2(*(undefined4 *)((int)this + 0x58));
          if (iVar6 == 0) {
            HVar7 = -0x7ff8fff2;
          }
          else {
            local_90[0] = (int *)CONCAT22(local_90[0]._2_2_,8);
            iStack_88 = iVar6;
            HVar7 = FUN_0040b990((int)this);
            if (-1 < HVar7) {
              Ordinal_8(&stack0xffffff50);
              iVar4 = Ordinal_2(L"Content-Type: text/xml\r\n");
              if (iVar4 == 0) {
                HVar7 = -0x7ff8fff2;
              }
              else {
                HVar7 = (**(code **)(**(int **)((int)this + 0x54) + 0xd0))
                                  (*(int **)((int)this + 0x54),local_90,&stack0xffffff60,auStack_60,
                                   auStack_80,&stack0xffffff50);
                Ordinal_6(ppiVar8);
                iVar4 = FUN_00413370(*(int *)((int)this + 0x80));
                if (iVar4 != 0) {
                  UVar5 = SetTimer(*(HWND *)((int)this + 4),0x108a,500,(TIMERPROC)0x0);
                  *(UINT_PTR *)((int)this + 0x88) = UVar5;
                  Ordinal_6(iVar6);
                  goto LAB_0040c221;
                }
              }
            }
            Ordinal_6(iVar6);
          }
          goto LAB_0040c221;
        }
      }
      HVar7 = -0x7ff8ffa9;
    }
  }
LAB_0040c221:
  return (-1 < HVar7) - 1;
}


