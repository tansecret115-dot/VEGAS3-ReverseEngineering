/* Module: sftrans1.dll
   Function: FUN_00542780
   Address: 00542780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00542780(int param_1,float *param_2,int param_3,int param_4,int param_5)

{
  LPRECT lprcDst;
  BITMAPINFO *lpbmi;
  undefined1 uVar1;
  int iVar2;
  HDC hdc;
  HDC pHVar3;
  int iVar4;
  HBITMAP pHVar5;
  int iVar6;
  RECT *lprcSrc2;
  RECT local_20;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = param_4;
  *(int *)(param_1 + 4) = param_4;
  *(int *)(param_1 + 8) = param_5;
  if (param_4 == 0) {
    return -0x7fffbffd;
  }
  if (param_5 == 0) {
    return -0x7fffbffd;
  }
  if (param_2 == (float *)0x0) {
    return -0x7fffbffd;
  }
  if (param_3 != 0) {
    local_8 = param_2[2] * param_2[3];
    local_c = param_2[1] * param_2[3];
    local_10 = *param_2 * param_2[3];
    local_4 = param_2[3];
    uVar1 = ftol();
    *(undefined1 *)(param_1 + 0x92) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)(param_1 + 0x91) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)(param_1 + 0x90) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)(param_1 + 0x93) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)(param_1 + 0x96) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)(param_1 + 0x95) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)(param_1 + 0x94) = uVar1;
    uVar1 = ftol();
    lprcSrc2 = (RECT *)(param_4 + 0x3c);
    lprcDst = (LPRECT)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x97) = uVar1;
    UnionRect(lprcDst,lprcDst,lprcSrc2);
    param_4 = 0;
    param_5 = 0;
    do {
      if (*(int *)(param_5 + *(int *)(param_1 + 0x24)) != 0) {
        iVar2 = *(int *)(param_1 + 0x28) + param_4;
        local_20.bottom = *(int *)(iVar2 + 4);
        local_20.left = (lprcSrc2->left + *(int *)(iVar2 + 0xc)) - local_20.bottom;
        local_20.top = (*(int *)(iVar4 + 0x40) + *(int *)(iVar2 + 0x10)) - local_20.bottom;
        local_20.right = *(int *)(iVar4 + 0x44) + *(int *)(iVar2 + 0xc) + local_20.bottom;
        local_20.bottom = *(int *)(iVar4 + 0x48) + *(int *)(iVar2 + 0x10) + local_20.bottom;
        UnionRect(lprcDst,lprcDst,&local_20);
      }
      param_5 = param_5 + 0x54;
      param_4 = param_4 + 0x1c;
    } while (param_5 < 0xa8);
    hdc = GetDC((HWND)0x0);
    pHVar3 = CreateCompatibleDC(hdc);
    *(HDC *)(param_1 + 0x8c) = pHVar3;
    ReleaseDC((HWND)0x0,hdc);
    lpbmi = (BITMAPINFO *)(param_1 + 0x58);
    iVar4 = FUN_004de3f0(lpbmi,0x1c,*(int *)(param_1 + 0x40) - lprcDst->left,
                         *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c),0,0,0);
    if (-1 < iVar4) {
      pHVar5 = CreateDIBSection(*(HDC *)(param_1 + 0x8c),lpbmi,0,(void **)(param_1 + 0x84),
                                (HANDLE)0x0,0);
      *(HBITMAP *)(param_1 + 0x88) = pHVar5;
      if (pHVar5 == (HBITMAP)0x0) {
        return -0x7fffbffb;
      }
      FUN_004e3070(lpbmi,*(void **)(param_1 + 0x84),0,0,local_8,local_c,local_10,local_4,3);
      iVar4 = 0;
      iVar2 = 0;
      do {
        if ((*(int *)(iVar2 + *(int *)(param_1 + 0x24)) != 0) &&
           (iVar6 = FUN_00541650(iVar2 + *(int *)(param_1 + 0x24),iVar4,0), iVar6 < 0)) {
          return iVar6;
        }
        iVar2 = iVar2 + 0x54;
        iVar4 = iVar4 + 1;
      } while (iVar2 < 0xa8);
      iVar4 = FUN_00541650(0,2,0);
    }
    return iVar4;
  }
  return -0x7fffbffd;
}


