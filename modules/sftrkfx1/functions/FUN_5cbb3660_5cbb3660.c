/* Module: sftrkfx1.dll
   Function: FUN_5cbb3660
   Address: 5cbb3660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cbb3660(void *this,HWND param_1,uint param_2,uchar *param_3,HWND param_4)

{
  HMODULE pHVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  BOOL BVar5;
  HWND pHVar6;
  int iVar7;
  undefined4 uVar8;
  LRESULT LVar9;
  HFONT__ *pHVar10;
  HFONT pHVar11;
  uchar *puVar12;
  uint uVar13;
  WPARAM WVar14;
  int *piVar15;
  float10 fVar16;
  RECT *pRVar17;
  CHAR *pCVar18;
  UINT UVar19;
  WPARAM WVar20;
  HFONT wParam;
  LPARAM lParam;
  uchar local_22c [260];
  CHAR local_128 [260];
  CHAR local_24 [8];
  double local_1c;
  CHAR local_14 [16];
  
  pHVar6 = param_4;
  if (param_2 < 0x7c) {
    if (param_2 == 0x7b) {
      FUN_5cbb33f0(this,param_1,param_3,(int)(short)param_4,(int)(short)((uint)param_4 >> 0x10));
      return 0;
    }
    if (param_2 == 2) {
      piVar15 = *(int **)((int)this + 0x2c);
      if (piVar15 != (int *)0x0) {
        (**(code **)(*piVar15 + 0x18))(piVar15,*(undefined4 *)((int)this + 0x14),0);
      }
      if (*(HGDIOBJ *)((int)this + 0x184) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)((int)this + 0x184));
        *(undefined4 *)((int)this + 0x184) = 0;
      }
      if (*(LPCVOID *)((int)this + 400) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 400));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 400));
        GlobalFree(pvVar3);
      }
      if (*(LPCVOID *)((int)this + 0x194) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x194));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x194));
        GlobalFree(pvVar3);
      }
      if (*(HGDIOBJ *)((int)this + 0x30) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)((int)this + 0x30));
      }
      pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfca);
      if (pHVar6 != (HWND)0x0) {
        DestroyWindow(pHVar6);
      }
      pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfaa);
      if (pHVar6 != (HWND)0x0) {
        DestroyWindow(pHVar6);
      }
      FUN_5cbd98e0(0,*(HWND *)((int)this + 0x14),0,0,(uchar *)0x0);
      *(undefined4 *)((int)this + 0x14) = 0;
      return 0;
    }
    if (param_2 == 0x14) {
      if ((((DAT_5cc11480 == 0) || (DAT_5cc11488 < 1)) &&
          (pHVar1 = GetModuleHandleA((LPCSTR)0x0), pHVar1 != (HMODULE)0x0)) &&
         ((DVar2 = GetModuleFileNameA(pHVar1,local_128,0x104), DVar2 != 0 &&
          (DVar2 = GetFileVersionInfoSizeA(local_128,(LPDWORD)0x0), DVar2 != 0)))) {
        pvVar3 = GlobalAlloc(0x42,DVar2);
        pvVar4 = GlobalLock(pvVar3);
        if (pvVar4 != (LPVOID)0x0) {
          BVar5 = GetFileVersionInfoA(local_128,0,DVar2,pvVar4);
          if (((BVar5 != 0) &&
              (BVar5 = VerQueryValueA(pvVar4,"\\VarFileInfo\\Translation",&param_3,(PUINT)&param_1),
              BVar5 != 0)) && (param_1 != (HWND)0x0)) {
            FUN_5cbbf190(local_22c,(BYTE *)"\\StringFileInfo\\%04hX%04hX\\CompanyName");
            BVar5 = VerQueryValueA(pvVar4,(LPCSTR)local_22c,&param_3,(PUINT)&param_1);
            if (BVar5 != 0) {
              _mbsstr(param_3,(uchar *)"Sonic Foundry");
            }
          }
          pvVar3 = GlobalHandle(pvVar4);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pvVar4);
          GlobalFree(pvVar3);
        }
      }
      return 0;
    }
    if (param_2 != 0x53) {
      return 0;
    }
    iVar7 = param_4[2].unused;
    if (((iVar7 == 0xfc5) || (iVar7 == 0xfa1)) || (iVar7 == 0xfa8)) {
      (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_3);
      FUN_5cbb2a10(this,param_3,&param_4);
      if (param_4 != (HWND)0x2) {
        FUN_5cbd96d0(0,param_1,0,0xfcc,(int *)&DAT_5cc045d8,(uchar *)0x0);
        return 1;
      }
    }
    FUN_5cbd96d0(0,param_1,0,pHVar6[2].unused,(int *)&DAT_5cc045d8,(uchar *)0x0);
    return 1;
  }
  if (param_2 == 0x110) {
    piVar15 = *(int **)((int)this + 0x2c);
    *(HWND *)((int)this + 0x14) = param_1;
    if (piVar15 != (int *)0x0) {
      (**(code **)(*piVar15 + 0x18))(piVar15,param_1,0x7fbc);
    }
    pHVar10 = GetWingdingsFont();
    *(HFONT__ **)((int)this + 0x30) = pHVar10;
    pHVar6 = FUN_5cbb34c0((int)this);
    if (pHVar6 == (HWND)0x0) {
      return 0;
    }
    FUN_5cbb20c0((int)this);
    iVar7 = FUN_5cbb2030((int)this);
    if (iVar7 == 0) {
      return 0;
    }
    pHVar6 = FUN_5cbb2380((int)this);
    if (pHVar6 == (HWND)0x0) {
      return 0;
    }
    SendMessageA(pHVar6,0x602,0,0);
    if (*(int *)((int)this + 0x30) != 0) {
      WVar14 = 0;
      do {
        FUN_5cbb2bd0(this,WVar14,&param_3);
        pHVar6 = *(HWND *)((int)this + 0x14);
        wsprintfA(local_14,"%c",WVar14 + (int)param_3 * 0xb + 0x81);
        pCVar18 = local_14;
        UVar19 = 0x604;
        WVar20 = WVar14;
        pHVar6 = GetDlgItem(pHVar6,0xfca);
        SendMessageA(pHVar6,UVar19,WVar20,(LPARAM)pCVar18);
        WVar14 = WVar14 + 1;
      } while ((int)WVar14 < 4);
    }
    pHVar11 = FUN_5cbdc9c0(0x6e);
    piVar15 = &DAT_5cc0fec8;
    do {
      lParam = 0;
      UVar19 = 0x30;
      wParam = pHVar11;
      pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),*piVar15);
      SendMessageA(pHVar6,UVar19,(WPARAM)wParam,lParam);
      piVar15 = piVar15 + 1;
    } while (piVar15 < &DAT_5cc0ff00);
    (**(code **)(*(int *)this + 0x50))();
    (**(code **)(*(int *)this + 0x54))(0);
    if ((DAT_5cc11480 == 0) || (DAT_5cc11488 < 1)) {
      pHVar1 = GetModuleHandleA((LPCSTR)0x0);
      if ((pHVar1 != (HMODULE)0x0) &&
         ((DVar2 = GetModuleFileNameA(pHVar1,local_128,0x104), DVar2 != 0 &&
          (DVar2 = GetFileVersionInfoSizeA(local_128,(LPDWORD)0x0), DVar2 != 0)))) {
        pvVar3 = GlobalAlloc(0x42,DVar2);
        pvVar4 = GlobalLock(pvVar3);
        if (pvVar4 != (LPVOID)0x0) {
          BVar5 = GetFileVersionInfoA(local_128,0,DVar2,pvVar4);
          uVar13 = 0;
          if (((BVar5 != 0) &&
              (uVar13 = VerQueryValueA(pvVar4,"\\VarFileInfo\\Translation",&param_3,(PUINT)&param_1)
              , uVar13 != 0)) && (param_1 != (HWND)0x0)) {
            FUN_5cbbf190(local_22c,(BYTE *)"\\StringFileInfo\\%04hX%04hX\\CompanyName");
            BVar5 = VerQueryValueA(pvVar4,(LPCSTR)local_22c,&param_3,(PUINT)&param_1);
            uVar13 = 0;
            if (BVar5 != 0) {
              puVar12 = _mbsstr(param_3,(uchar *)"Sonic Foundry");
              uVar13 = (uint)(puVar12 != (uchar *)0x0);
            }
          }
          pvVar3 = GlobalHandle(pvVar4);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pvVar4);
          GlobalFree(pvVar3);
          if (uVar13 != 0) {
            return 1;
          }
        }
      }
      PostMessageA(*(HWND *)((int)this + 0x14),0x601,0,0);
    }
  }
  else {
    if (param_2 != 0x111) {
      if (param_2 != 0x114) {
        return 0;
      }
      if (*(int *)((int)this + 0x2c) == 0) {
        return 1;
      }
      iVar7 = GetDlgCtrlID(param_4);
      if (iVar7 == 0xfa1) {
        (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_1);
        FUN_5cbb2a10(this,param_1,&param_4);
        if (param_4 == (HWND)0x2) {
          uVar8 = FUN_5cbce290(0x114,(uint)param_3,pHVar6,1,10);
          FUN_5cbb29a0(this,param_1,uVar8);
        }
        else {
          uVar8 = FUN_5cbce290(0x114,(uint)param_3,pHVar6,1,1);
          FUN_5cbb2b60(this,param_1,uVar8);
        }
        pHVar6 = *(HWND *)((int)this + 0x14);
      }
      else if (iVar7 == 0xfa2) {
        (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_1);
        uVar8 = FUN_5cbce290(0x114,(uint)param_3,pHVar6,1,10);
        FUN_5cbb27e0(this,param_1,uVar8);
        pHVar6 = *(HWND *)((int)this + 0x14);
      }
      else {
        if (iVar7 != 0xfa3) goto LAB_5cbb3aba;
        (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_1);
        uVar8 = FUN_5cbce290(0x114,(uint)param_3,pHVar6,1,100);
        FUN_5cbb28c0(this,param_1,uVar8);
        pHVar6 = *(HWND *)((int)this + 0x14);
      }
      BVar5 = 1;
      pRVar17 = (RECT *)0x0;
      pHVar6 = GetDlgItem(pHVar6,0xfaa);
      InvalidateRect(pHVar6,pRVar17,BVar5);
      iVar7 = 0;
LAB_5cbb3aba:
      (**(code **)(*(int *)this + 0x54))(iVar7);
      return 1;
    }
    if (*(int **)((int)this + 0x2c) == (int *)0x0) {
      return 1;
    }
    puVar12 = (uchar *)((uint)param_3 & 0xffff);
    uVar13 = (uint)param_3 >> 0x10;
    param_3 = puVar12;
    if ((puVar12 < (uchar *)0x9e34) || ((uchar *)0xa027 < puVar12)) {
      if ((uchar *)0xfca < puVar12) {
        if (puVar12 < (uchar *)0xa02a) {
          if (puVar12 == (uchar *)0xa029) {
            FUN_5cba16e0(param_1);
            (**(code **)(*(int *)this + 0x54))(0xa029);
            return 1;
          }
          if (puVar12 == (uchar *)0x7fbc) {
            if (uVar13 == 100) {
              pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfaa);
              SendMessageA(pHVar6,0x606,0,0);
              puVar12 = (uchar *)0x0;
              if (*(int *)((int)this + 0x30) != 0) {
                WVar14 = 0;
                do {
                  FUN_5cbb2bd0(this,WVar14,&param_3);
                  param_1 = *(HWND *)((int)this + 0x14);
                  wsprintfA(local_24,"%c",WVar14 + (int)param_3 * 0xb + 0x81);
                  pCVar18 = local_24;
                  UVar19 = 0x604;
                  WVar20 = WVar14;
                  pHVar6 = GetDlgItem(param_1,0xfca);
                  SendMessageA(pHVar6,UVar19,WVar20,(LPARAM)pCVar18);
                  WVar14 = WVar14 + 1;
                } while ((int)WVar14 < 4);
                (**(code **)(*(int *)this + 0x54))(0);
                return 1;
              }
            }
          }
          else if (puVar12 == (uchar *)0xa028) {
            FUN_5cbd98e0(1,param_1,0,0,(uchar *)0x0);
            (**(code **)(*(int *)this + 0x54))(41000);
            return 1;
          }
        }
        else if (puVar12 == (uchar *)0xa02b) {
          if (uVar13 == 1000) {
            FUN_5cbb09c0((int)this + 0x68,*(int **)((int)this + 0x2c),(int)this + 0x38);
            puVar12 = (uchar *)0x0;
          }
          else if (uVar13 == 0x3e9) {
            LVar9 = SendMessageA(param_4,0x607,0,0);
            FUN_5cbb1fd0(*(HWND *)((int)this + 0x14),LVar9);
            (**(code **)(**(int **)((int)this + 0x2c) + 0xe0))(*(int **)((int)this + 0x2c),LVar9);
            (**(code **)(*(int *)this + 0x54))(0);
            return 1;
          }
        }
        goto switchD_5cbb3b3a_caseD_faa;
      }
      if (puVar12 == (uchar *)0xfca) {
        pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfca);
        param_3 = (uchar *)SendMessageA(pHVar6,0x601,0,0);
        pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfaa);
        SendMessageA(pHVar6,0x606,0,(LPARAM)param_3);
        (**(code **)(*(int *)this + 0x54))(0xfca);
        return 1;
      }
    }
    else {
      FUN_5cbb3290((int)this);
      param_3 = (uchar *)0x0;
    }
    puVar12 = param_3;
    switch(param_3) {
    case (uchar *)0xfa7:
      if (uVar13 == 0x200) {
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),(int)param_3,local_14,0xf);
        FUN_5cbdaef0(local_14,(undefined4 *)0x0);
        param_4 = (HWND)ftol();
        param_1 = (HWND)FUN_5cbdc610(-0x96,1,-0x96,(uchar *)0x0);
        FUN_5cc020f0();
        FUN_5cc020f0();
        lstrcpynA(&stack0xfffffdc8,local_14,3);
        lstrcpynA(&stack0xfffffdc8,(LPCSTR)param_1,3);
        iVar7 = lstrcmpiA(&stack0xfffffdc8,&stack0xfffffdc8);
        pHVar6 = (HWND)0xffffff6a;
        if (iVar7 != 0) {
          pHVar6 = param_4;
        }
        (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_2);
        FUN_5cbb27e0(this,param_2,pHVar6);
        BVar5 = 1;
        pRVar17 = (RECT *)0x0;
        pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfaa);
        InvalidateRect(pHVar6,pRVar17,BVar5);
        (**(code **)(*(int *)this + 0x54))(param_3);
        return 1;
      }
      break;
    case (uchar *)0xfa8:
      if (uVar13 == 0x200) {
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),(int)param_3,local_14,0xf);
        fVar16 = FUN_5cbdaef0(local_14,(undefined4 *)0x0);
        local_1c = (double)fVar16;
        (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_3);
        FUN_5cbb2a10(this,param_3,&param_1);
        if (param_1 == (HWND)0x2) {
          uVar8 = ftol();
          FUN_5cbb29a0(this,param_3,uVar8);
        }
        else {
          uVar8 = ftol();
          FUN_5cbb2b60(this,param_3,uVar8);
        }
        BVar5 = 1;
        pRVar17 = (RECT *)0x0;
        pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfaa);
        InvalidateRect(pHVar6,pRVar17,BVar5);
        (**(code **)(*(int *)this + 0x54))(puVar12);
        return 1;
      }
      break;
    case (uchar *)0xfa9:
      if (uVar13 == 0x200) {
        GetDlgItemTextA(*(HWND *)((int)this + 0x14),(int)param_3,local_14,0xf);
        fVar16 = FUN_5cbdaef0(local_14,(undefined4 *)0x0);
        local_1c = (double)fVar16;
        (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_3);
        uVar8 = ftol();
        FUN_5cbb28c0(this,param_3,uVar8);
        BVar5 = 1;
        pRVar17 = (RECT *)0x0;
        pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfaa);
        InvalidateRect(pHVar6,pRVar17,BVar5);
        (**(code **)(*(int *)this + 0x54))(0);
        return 1;
      }
      break;
    case (uchar *)0xfbe:
      (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_3);
      UVar19 = IsDlgButtonChecked(*(HWND *)((int)this + 0x14),(int)puVar12);
      FUN_5cbb2c40(this,param_3,(uint)(UVar19 != 0));
      puVar12 = param_3;
      if (*(int *)((int)this + 0x30) != 0) {
        param_1 = *(HWND *)((int)this + 0x14);
        wsprintfA(local_24,"%c",param_3 + (uint)(UVar19 != 0) * 0xb + 0x81);
        pCVar18 = local_24;
        UVar19 = 0x604;
        pHVar6 = GetDlgItem(param_1,0xfca);
        SendMessageA(pHVar6,UVar19,(WPARAM)puVar12,(LPARAM)pCVar18);
      }
      BVar5 = 1;
      pRVar17 = (RECT *)0x0;
      pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfaa);
      InvalidateRect(pHVar6,pRVar17,BVar5);
      (**(code **)(*(int *)this + 0x54))(0);
      return 1;
    case (uchar *)0xfc3:
      if (uVar13 == 1) {
        (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))(*(int **)((int)this + 0x2c),&param_3);
        LVar9 = SendMessageA(param_4,0x147,0,0);
        FUN_5cbb2a80(this,param_3,LVar9 + 1);
        pRVar17 = (RECT *)0x0;
        pHVar6 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfaa);
        InvalidateRect(pHVar6,pRVar17,uVar13);
        (**(code **)(*(int *)this + 0x54))(0);
        return 1;
      }
    default:
switchD_5cbb3b3a_caseD_faa:
      (**(code **)(*(int *)this + 0x54))(puVar12);
      return 1;
    }
  }
  return 1;
}


