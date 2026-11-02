/* Module: vegas30.exe
   Function: FUN_005f2600
   Address: 005f2600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f2600(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  SIZE_T SVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EBX;
  code *pcVar6;
  int *unaff_EBP;
  int *unaff_ESI;
  LPCWSTR lpWideCharStr;
  LPCSTR lpMultiByteStr;
  int *piVar7;
  int ***pppiStack_6c;
  undefined4 uStack_68;
  undefined4 **ppuStack_64;
  int *piStack_5c;
  undefined4 **ppuStack_58;
  SIZE_T SVar8;
  int ***pppiStack_4c;
  undefined4 *puStack_48;
  int iStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  SIZE_T SStack_24;
  LPCSTR pCStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  
  iVar2 = 1;
  lpWideCharStr = (LPCWSTR)0x0;
  *param_3 = 0;
  param_3[1] = 0;
  *param_4 = 0xffffffff;
  param_4[1] = 0xffffffff;
  pppiStack_4c = *(int ****)(param_1 + 0x14c);
  if ((int ****)pppiStack_4c != (int ****)0x0) {
    puStack_48 = &local_34;
    local_34 = 0;
    iVar2 = (*(code *)(*pppiStack_4c)[0x16])();
    if (-1 < iVar2) {
      ppuStack_58 = &puStack_48;
      puStack_48 = (undefined4 *)0x0;
      piStack_5c = piStack_3c;
      iVar2 = (**(code **)(*piStack_3c + 0xc))();
      if (-1 < iVar2) {
        ppuStack_64 = (undefined4 **)0x0;
        uStack_68 = 0;
        pppiStack_6c = (int ***)0x0;
        iVar2 = (**(code **)(*unaff_EBP + 0x14))(unaff_EBP);
        if (-1 < iVar2) {
          ppuStack_64 = &puStack_48;
          pppiStack_6c = (int ***)&pppiStack_4c;
          uStack_68 = 4;
          iVar2 = (**(code **)(*unaff_EBP + 0xc))();
          if (-1 < iVar2) {
            piVar7 = (int *)0x0;
            (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,0,0,0);
            piVar5 = unaff_EBP;
            if ((int *)0xb < unaff_EBP) {
              piVar5 = (int *)0xc;
            }
            iVar2 = (**(code **)(*piVar7 + 0xc))(piVar7,&piStack_5c,piVar5,&pppiStack_6c);
            if ((-1 < iVar2) && (unaff_ESI < &DAT_00000065)) {
              SVar8 = 0;
              lpMultiByteStr = (LPCSTR)0x0;
              iVar2 = (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,puStack_48 + -3,0,1,0);
              pppiStack_4c = (int ***)0x0;
              if (0 < iStack_40) {
                do {
                  piVar5 = unaff_EBX;
                  (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,&piStack_5c,4,&ppuStack_58);
                  pppiStack_4c = pppiStack_6c;
                  if ((int ****)0x1b < pppiStack_6c) {
                    pppiStack_6c = (int ***)0x1c;
                  }
                  pppiStack_6c = pppiStack_6c + -1;
                  (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,&puStack_48,pppiStack_6c,&uStack_68);
                  iVar2 = (**(code **)(*piVar5 + 0x14))(piVar5,piStack_5c + -7,0,1,0);
                  pcVar6 = GlobalHandle_exref;
                  if (SStack_24 == 0) {
                    if (lpWideCharStr != (LPCWSTR)0x0) {
                      *lpWideCharStr = L'\0';
                    }
                  }
                  else {
                    if ((int)SVar8 < (int)SStack_24) {
                      if (lpWideCharStr != (LPCWSTR)0x0) {
                        pvVar3 = GlobalHandle(lpWideCharStr);
                        GlobalUnlock(pvVar3);
                        pvVar3 = GlobalHandle(lpWideCharStr);
                        GlobalFree(pvVar3);
                      }
                      if (lpMultiByteStr != (LPCSTR)0x0) {
                        pvVar3 = GlobalHandle(lpMultiByteStr);
                        GlobalUnlock(pvVar3);
                        pvVar3 = GlobalHandle(lpMultiByteStr);
                        GlobalFree(pvVar3);
                      }
                      pvVar3 = GlobalAlloc(0x42,SStack_24);
                      lpWideCharStr = GlobalLock(pvVar3);
                      if (lpWideCharStr == (LPCWSTR)0x0) {
                        iVar2 = -0x7ff8fff2;
                        goto LAB_005f291c;
                      }
                      pvVar3 = GlobalAlloc(0x42,SStack_24);
                      lpMultiByteStr = GlobalLock(pvVar3);
                      SVar8 = SStack_24;
                      if (lpMultiByteStr == (LPCSTR)0x0) {
                        iVar2 = -0x7ff8fff2;
                        goto LAB_005f2904;
                      }
                    }
                    iVar2 = (**(code **)(*unaff_EBX + 0xc))
                                      (unaff_EBX,lpWideCharStr,SStack_24,&ppuStack_58);
                  }
                  SVar1 = SStack_24;
                  if ((-1 < iVar2) && (lpMultiByteStr != (LPCSTR)0x0)) {
                    if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
                      WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,SStack_24,(LPCSTR)0x0,
                                          (LPBOOL)0x0);
                    }
                    else {
                      *lpMultiByteStr = '\0';
                    }
                    lpMultiByteStr[SVar1 - 1] = '\0';
                    iVar4 = lstrcmpA(lpMultiByteStr,pCStack_1c);
                    if (iVar4 == 0) {
                      *puStack_18 = uStack_38;
                      puStack_18[1] = local_34;
                      if (iStack_28 == 0) {
                        *puStack_14 = 0xffffffff;
                        puStack_14[1] = 0xffffffff;
                      }
                      else {
                        *puStack_14 = uStack_30;
                        puStack_14[1] = uStack_2c;
                      }
                      iVar2 = 0;
                      break;
                    }
                  }
                  pppiStack_4c = (int ***)((int)pppiStack_4c + 1);
                } while ((int)pppiStack_4c < iStack_40);
                pcVar6 = GlobalHandle_exref;
                if (lpMultiByteStr != (LPCSTR)0x0) {
                  pvVar3 = GlobalHandle(lpMultiByteStr);
                  GlobalUnlock(pvVar3);
                  pvVar3 = GlobalHandle(lpMultiByteStr);
                  GlobalFree(pvVar3);
                  pcVar6 = GlobalHandle_exref;
                }
LAB_005f2904:
                if (lpWideCharStr != (LPCWSTR)0x0) {
                  pvVar3 = (HGLOBAL)(*pcVar6)(lpWideCharStr);
                  GlobalUnlock(pvVar3);
                  pvVar3 = (HGLOBAL)(*pcVar6)(lpWideCharStr);
                  GlobalFree(pvVar3);
                }
              }
            }
          }
LAB_005f291c:
          (**(code **)(*unaff_EBX + 8))(unaff_EBX);
        }
      }
      ppuStack_64 = (undefined4 **)0x5f2931;
      (**(code **)(*unaff_ESI + 8))();
    }
  }
  return iVar2;
}


