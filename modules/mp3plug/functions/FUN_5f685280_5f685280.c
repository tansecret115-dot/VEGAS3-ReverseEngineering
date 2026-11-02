/* Module: mp3plug.dll
   Function: FUN_5f685280
   Address: 5f685280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f685280(HWND param_1)

{
  void *this;
  void *this_00;
  int iVar1;
  uint uVar2;
  LPSTR pCVar3;
  HWND pHVar4;
  int iVar5;
  int local_14;
  int local_10 [2];
  int local_8;
  DWORD local_4;
  
  this_00 = DAT_5f74d2fc;
  this = DAT_5f74d2f8;
  if (DAT_5f74d32c == 0) {
    DAT_5f74d308 = 0;
  }
  else if (DAT_5f74d2fc == (void *)0x0) {
    DAT_5f74d308 = 0;
    DAT_5f74d334 = 0;
  }
  else {
    iVar1 = FUN_5f7212c0(DAT_5f74d2fc,local_10,&local_14,1);
    if (DAT_5f74d30c == 0) {
      if (iVar1 == -0x7ffb1ecb) {
        iVar1 = 0x4e130;
      }
      else if (iVar1 < 0) {
        DAT_5f74d334 = 0;
        DAT_5f74d338 = -0xc4;
        DAT_5f74d33c = 0;
        DAT_5f74d340 = -0x128;
        DAT_5f74d308 = 0;
        goto LAB_5f685359;
      }
    }
    else {
      iVar1 = 0;
    }
    if (((DAT_5f74d320 != 0) || (iVar1 == 0x4e12f)) || (this == (void *)0x0)) {
      iVar1 = -0x7fffbffb;
      DAT_5f74d33c = 0;
      DAT_5f74d340 = (-(uint)(DAT_5f74d310 != 0) & 5) - 0x12a;
    }
    iVar5 = -0x7fffbffb;
    if (((iVar1 < 0) || (DAT_5f74d320 != 0)) && ((DAT_5f74d314 == 0 && (DAT_5f74d318 == 0)))) {
LAB_5f685453:
      if (iVar1 < 0) goto LAB_5f68545b;
      DAT_5f74d334 = 1;
      DAT_5f74d308 = -1;
      DAT_5f74d338 = 200;
    }
    else {
      if (this == (void *)0x0) {
        iVar1 = -0x7fffbffb;
      }
      else {
        iVar1 = FUN_5f7212c0(this,local_10,&local_14,1);
      }
      iVar5 = iVar1;
      if (DAT_5f74d31c == 0) {
        if ((iVar1 == 0x4e12e) || (iVar1 == 0x4e137)) goto LAB_5f6853d6;
      }
      else if (iVar1 == 0x4e132) {
LAB_5f6853d6:
        if (local_14 == 1) {
          DAT_5f74d33c = 0;
          DAT_5f74d340 = -0x127;
          goto LAB_5f685453;
        }
      }
      if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
        if (DAT_5f74d33c == 0) goto LAB_5f68545b;
      }
      else {
        DAT_5f74d33c = 1;
      }
      if ((iVar1 == -0x7ffb1ecb) || (iVar1 == 0x4e130)) {
        DAT_5f74d340 = 0x12d;
      }
      else {
        DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
      }
LAB_5f68545b:
      local_10[1] = 4;
      uVar2 = FUN_5f722c30(this_00,(char *)0x0,"3",&local_4,(byte *)&local_8,(LPDWORD)(local_10 + 1)
                          );
      if (((((int)uVar2 < 0) || (local_8 == 0)) || (DAT_5f74d314 != 0)) || (DAT_5f74d318 != 0)) {
        DAT_5f74d308 = 0;
        DAT_5f74d334 = 0;
        if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
          if (DAT_5f74d340 == -0x124) {
            DAT_5f74d338 = -0xc2;
          }
          else {
            DAT_5f74d338 = (-(uint)(DAT_5f74d340 != -0x123) & 0xfffffffb) - 0xc1;
          }
        }
        else {
          DAT_5f74d338 = -0xc5;
          if (((DAT_5f74d324 != 0) || (DAT_5f74d328 != 0)) && (DAT_5f74d2f8 != (void *)0x0)) {
            if (iVar5 == -0x7ffb1ed3) {
              DAT_5f74d33c = 1;
              DAT_5f74d340 = (-(uint)(DAT_5f74d324 != 0) & 0xfffffffe) + 0x12e;
            }
            else if ((iVar5 == -0x7ffb1ecb) || (iVar5 == 0x4e130)) {
              DAT_5f74d33c = 1;
              DAT_5f74d340 = 0x12d;
            }
          }
        }
      }
      else {
        DAT_5f74d308 = local_8;
        DAT_5f74d334 = 1;
        DAT_5f74d338 = 0xc9;
      }
    }
    if (DAT_5f74d308 == -1) goto LAB_5f685359;
  }
  if (DAT_5f74d33c != 0) {
    if (299 < DAT_5f74d340) {
      if (DAT_5f74d340 < 0x12e) {
        pCVar3 = FUN_5f69e250(DAT_5f74d2f4,0xbba);
        pHVar4 = GetDlgItem(param_1,0x425);
        SetWindowTextA(pHVar4,pCVar3);
        return;
      }
      if (DAT_5f74d340 == 0x12e) {
        pCVar3 = FUN_5f69e250(DAT_5f74d2f4,0xbbb);
        pHVar4 = GetDlgItem(param_1,0x425);
        SetWindowTextA(pHVar4,pCVar3);
        return;
      }
    }
    FUN_5f685670(param_1);
    return;
  }
LAB_5f685359:
  FUN_5f685670(param_1);
  return;
}


