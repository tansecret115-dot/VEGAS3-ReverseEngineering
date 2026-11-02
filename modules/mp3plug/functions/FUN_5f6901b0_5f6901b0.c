/* Module: mp3plug.dll
   Function: FUN_5f6901b0
   Address: 5f6901b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f6901b0(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *this;
  int iVar3;
  LPCWSTR lpWideCharStr;
  uchar *lpMultiByteStr;
  undefined1 *puVar4;
  LPSTR pCVar5;
  LPSTR pCVar6;
  undefined4 *unaff_retaddr;
  LPSTR lpString1;
  LPSTR iMaxLength;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *local_140;
  undefined1 uStack_13c;
  int local_138;
  int *piStack_134;
  uint uStack_130;
  undefined1 auStack_12c [8];
  int iStack_124;
  uchar auStack_10c [264];
  HANDLE pvStack_4;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  pvVar1 = GlobalAlloc(0x40,0x1c);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    this = (int *)0x0;
  }
  else {
    this = (int *)FUN_5f69b6c0((int)pvVar2);
  }
  local_140 = this;
  FUN_5f69b6d0((int)this);
  piVar8 = &local_138;
  local_138 = 0;
  iVar3 = (**(code **)(*param_2 + 0x1c))(param_2);
  if ((-1 < iVar3) && (local_140 != (int *)0x0)) {
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 1;
    }
    piVar7 = (int *)0x0;
    iVar3 = (**(code **)(*local_140 + 0x14))(local_140,0,0,0);
    if (((-1 < iVar3) &&
        (iVar3 = (**(code **)(*piVar8 + 0xc))(piVar8,auStack_12c,0xc,&stack0xfffffeb4), -1 < iVar3))
       && (0 < iStack_124)) {
      uVar9 = 0x104;
      pvVar1 = GlobalAlloc(0x42,0x208);
      lpWideCharStr = GlobalLock(pvVar1);
      pvVar1 = GlobalAlloc(0x42,0x208);
      lpMultiByteStr = GlobalLock(pvVar1);
      iVar10 = 0;
      if (0 < iStack_124) {
        do {
          if (iVar3 < 0) break;
          iVar3 = (**(code **)(*piVar8 + 0xc))(piVar8,&local_138,0xc,&stack0xfffffeb4);
          this = piVar7;
          if (-1 < iVar3) {
            if (uVar9 * 2 < uStack_130) {
              pvVar1 = GlobalHandle(lpWideCharStr);
              GlobalUnlock(pvVar1);
              pvVar1 = GlobalHandle(lpWideCharStr);
              GlobalFree(pvVar1);
              pvVar1 = GlobalHandle(lpMultiByteStr);
              GlobalUnlock(pvVar1);
              pvVar1 = GlobalHandle(lpMultiByteStr);
              GlobalFree(pvVar1);
              uVar9 = uStack_130 + 1 >> 1;
              pvVar1 = GlobalAlloc(0x42,uStack_130 + 1);
              lpWideCharStr = GlobalLock(pvVar1);
              if (lpWideCharStr == (LPCWSTR)0x0) {
                iVar3 = -0x7ff8fff2;
              }
              pvVar1 = GlobalAlloc(0x42,uStack_130 + 1);
              lpMultiByteStr = GlobalLock(pvVar1);
              this = piVar7;
              if (lpMultiByteStr == (uchar *)0x0) {
                iVar3 = -0x7ff8fff2;
                goto LAB_5f6905dc;
              }
            }
            if ((-1 < iVar3) &&
               (iVar3 = (**(code **)(*piVar8 + 0xc))
                                  (piVar8,lpWideCharStr,uStack_130,&stack0xfffffeb4), -1 < iVar3)) {
              if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
                WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)lpMultiByteStr,uVar9 * 2,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
              }
              else if (lpMultiByteStr != (uchar *)0x0) {
                *lpMultiByteStr = '\0';
              }
              lpMultiByteStr[uVar9 * 2 + -1] = '\0';
              if (piStack_134 < (int *)0x4d414e4a) {
                if (piStack_134 == (int *)0x4d414e49) {
                  FUN_5f69c060(this,0x23,lpMultiByteStr);
                  if ((param_2 != (int *)0x0) && (pCVar6 = (LPSTR)*param_2, pCVar6 != (LPSTR)0x0)) {
                    pCVar5 = (LPSTR)param_2[7];
                    lpString1 = pCVar6;
                    iMaxLength = pCVar5;
                    goto LAB_5f6905d1;
                  }
                }
                else if (piStack_134 < (int *)0x474e454a) {
                  if (piStack_134 == (int *)0x474e4549) {
                    FUN_5f69c500(this,(uchar *)"Engineer",lpMultiByteStr);
                  }
                  else if (piStack_134 == (int *)0x43525349) {
                    FUN_5f69c060(this,0x17,lpMultiByteStr);
                    if ((param_2 != (int *)0x0) &&
                       (pCVar6 = (LPSTR)param_2[2], pCVar6 != (LPSTR)0x0)) {
                      pCVar5 = (LPSTR)param_2[9];
                      lpString1 = pCVar6;
                      iMaxLength = pCVar5;
LAB_5f6905d1:
                      lstrcpynA(lpString1,(LPCSTR)lpMultiByteStr,(int)iMaxLength);
                      (pCVar5 + -1)[(int)pCVar6] = '\0';
                    }
                  }
                  else {
                    if (piStack_134 != (int *)0x44524349) goto LAB_5f690580;
                    FUN_5f69c060(this,0x3c,lpMultiByteStr);
                    if ((param_2 != (int *)0x0) &&
                       (pCVar6 = (LPSTR)param_2[3], pCVar6 != (LPSTR)0x0)) {
                      pCVar5 = (LPSTR)param_2[10];
                      lpString1 = pCVar6;
                      iMaxLength = pCVar5;
                      goto LAB_5f6905d1;
                    }
                  }
                }
                else {
                  if (piStack_134 != (int *)0x4b435254) goto LAB_5f690580;
                  FUN_5f69c060(this,0x35,lpMultiByteStr);
                  if ((param_2 != (int *)0x0) && (pCVar6 = (LPSTR)param_2[6], pCVar6 != (LPSTR)0x0))
                  {
                    pCVar5 = (LPSTR)param_2[0xd];
                    lpString1 = pCVar6;
                    iMaxLength = pCVar5;
                    goto LAB_5f6905d1;
                  }
                }
              }
              else if (piStack_134 < (int *)0x544d434a) {
                if (piStack_134 == (int *)0x544d4349) {
                  FUN_5f69c300(this,"",lpMultiByteStr);
                  if ((param_2 != (int *)0x0) && (pCVar6 = (LPSTR)param_2[5], pCVar6 != (LPSTR)0x0))
                  {
                    pCVar5 = (LPSTR)param_2[0xc];
                    lpString1 = pCVar6;
                    iMaxLength = pCVar5;
                    goto LAB_5f6905d1;
                  }
                }
                else if (piStack_134 == (int *)0x504f4349) {
                  FUN_5f69c060(this,0x1b,lpMultiByteStr);
                }
                else {
                  if (piStack_134 != (int *)0x524e4749) goto LAB_5f690580;
                  FUN_5f69c060(this,0x1a,lpMultiByteStr);
                  if ((param_2 != (int *)0x0) && (pCVar5 = (LPSTR)param_2[4], pCVar5 != (LPSTR)0x0))
                  {
                    pCVar6 = (LPSTR)param_2[0xb];
                    lpString1 = pCVar5;
                    iMaxLength = pCVar6;
                    goto LAB_5f6905d1;
                  }
                }
              }
              else if (piStack_134 == (int *)0x54524149) {
                FUN_5f69c060(this,0x2f,lpMultiByteStr);
                if ((param_2 != (int *)0x0) && (pCVar5 = (LPSTR)param_2[1], pCVar5 != (LPSTR)0x0)) {
                  pCVar6 = (LPSTR)param_2[8];
                  lpString1 = pCVar5;
                  iMaxLength = pCVar6;
                  goto LAB_5f6905d1;
                }
              }
              else {
LAB_5f690580:
                local_140 = piStack_134;
                uStack_13c = 0;
                puVar4 = FUN_5f69a400((byte *)&local_140);
                if (((puVar4 != (undefined1 *)0x0) && (*(int *)(puVar4 + 8) != 0)) &&
                   (*(int *)(puVar4 + 0xc) == 2)) {
                  FUN_5f69c060(this,*(int *)(puVar4 + 0x10),lpMultiByteStr);
                }
              }
            }
          }
LAB_5f6905dc:
          iVar10 = iVar10 + 1;
          piVar7 = this;
        } while (iVar10 < iStack_124);
      }
      if (lpWideCharStr != (LPCWSTR)0x0) {
        pvVar1 = GlobalHandle(lpWideCharStr);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(lpWideCharStr);
        GlobalFree(pvVar1);
      }
      if (lpMultiByteStr != (uchar *)0x0) {
        pvVar1 = GlobalHandle(lpMultiByteStr);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(lpMultiByteStr);
        GlobalFree(pvVar1);
      }
    }
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  if (param_4 != 0) {
    if (((*(char *)(param_4 + 8) != '\0') &&
        (FUN_5f69c060(this,0x23,(uchar *)(param_4 + 8)), param_2 != (int *)0x0)) &&
       (pCVar5 = (LPSTR)*param_2, pCVar5 != (LPSTR)0x0)) {
      iVar3 = param_2[7];
      lstrcpynA(pCVar5,(LPCSTR)(param_4 + 8),iVar3);
      pCVar5[iVar3 + -1] = '\0';
    }
    if (((*(char *)(param_4 + 0x107) != '\0') &&
        (FUN_5f69c060(this,0x2f,(uchar *)(param_4 + 0x107)), param_2 != (int *)0x0)) &&
       (pCVar5 = (LPSTR)param_2[1], pCVar5 != (LPSTR)0x0)) {
      iVar3 = param_2[8];
      lstrcpynA(pCVar5,(LPCSTR)(param_4 + 0x107),iVar3);
      pCVar5[iVar3 + -1] = '\0';
    }
    if (*(char *)(param_4 + 0x206) != '\0') {
      FUN_5f69c060(this,0x1b,(uchar *)(param_4 + 0x206));
    }
    if (((*(char *)(param_4 + 0x305) != '\0') &&
        (FUN_5f69c060(this,0x17,(uchar *)(param_4 + 0x305)), param_2 != (int *)0x0)) &&
       (pCVar5 = (LPSTR)param_2[2], pCVar5 != (LPSTR)0x0)) {
      iVar3 = param_2[9];
      lstrcpynA(pCVar5,(LPCSTR)(param_4 + 0x305),iVar3);
      pCVar5[iVar3 + -1] = '\0';
    }
    if (((*(char *)(param_4 + 0x404) != '\0') &&
        (FUN_5f69c060(this,0x3c,(uchar *)(param_4 + 0x404)), param_2 != (int *)0x0)) &&
       (pCVar5 = (LPSTR)param_2[3], pCVar5 != (LPSTR)0x0)) {
      iVar3 = param_2[10];
      lstrcpynA(pCVar5,(LPCSTR)(param_4 + 0x404),iVar3);
      pCVar5[iVar3 + -1] = '\0';
    }
    if (((*(char *)(param_4 + 0x409) != '\0') &&
        (FUN_5f69c300(this,"",(uchar *)(param_4 + 0x409)), param_2 != (int *)0x0)) &&
       (pCVar5 = (LPSTR)param_2[5], pCVar5 != (LPSTR)0x0)) {
      iVar3 = param_2[0xc];
      lstrcpynA(pCVar5,(LPCSTR)(param_4 + 0x409),iVar3);
      pCVar5[iVar3 + -1] = '\0';
    }
    if (((*(char *)(param_4 + 0x809) != '\0') &&
        (iVar3 = FUN_5f6869b0(CONCAT31((int3)((uint)param_4 >> 8),*(char *)(param_4 + 0x809)),
                              (LPSTR)auStack_10c,0x104), -1 < iVar3)) &&
       ((FUN_5f69c060(this,0x1a,auStack_10c), param_2 != (int *)0x0 &&
        (pCVar5 = (LPSTR)param_2[4], pCVar5 != (LPSTR)0x0)))) {
      iVar3 = param_2[0xb];
      lstrcpynA(pCVar5,(LPCSTR)auStack_10c,iVar3);
      pCVar5[iVar3 + -1] = '\0';
    }
  }
  FUN_5f690890(this,unaff_retaddr);
  FUN_5f69bb50(this,pvStack_4);
  FUN_5f69b700((int)this);
  pvVar1 = GlobalHandle(this);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(this);
  GlobalFree(pvVar1);
  return 0;
}


