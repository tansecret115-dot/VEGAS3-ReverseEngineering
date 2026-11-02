/* Module: vegas30.exe
   Function: FUN_0045fa10
   Address: 0045fa10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045fa10(int param_1,undefined4 param_2,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  BOOL BVar1;
  int iVar2;
  LPCSTR lpString2;
  int iVar3;
  uint uVar4;
  RECT *lprc;
  
  pt.y = param_4;
  pt.x = param_3;
  BVar1 = PtInRect((RECT *)(param_1 + 0x3d4),pt);
  if (BVar1 == 0) {
    pt_00.y = param_4;
    pt_00.x = param_3;
    BVar1 = PtInRect((RECT *)(param_1 + 0x3e4),pt_00);
    if (BVar1 == 0) {
      pt_01.y = param_4;
      pt_01.x = param_3;
      BVar1 = PtInRect((RECT *)(param_1 + 0x3f4),pt_01);
      if (BVar1 == 0) {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x408) != 0) {
          lprc = (RECT *)(param_1 + 0x40c);
          do {
            pt_02.y = param_4;
            pt_02.x = param_3;
            BVar1 = PtInRect(lprc,pt_02);
            if (BVar1 != 0) {
              iVar3 = uVar4 + 0x80;
              *(LONG *)(param_1 + 0x3a8) = lprc->left;
              *(LONG *)(param_1 + 0x3ac) = lprc->top;
              *(LONG *)(param_1 + 0x3b0) = lprc->right;
              *(LONG *)(param_1 + 0x3b4) = lprc->bottom;
              lpString2 = (LPCSTR)FUN_0043b1a0(lprc[1].top);
              if ((lprc[1].right & 4) == 0) {
                iVar3 = 0x7f;
              }
              goto LAB_0045fb31;
            }
            uVar4 = uVar4 + 1;
            lprc = (RECT *)&lprc[1].bottom;
          } while (uVar4 < *(uint *)(param_1 + 0x408));
        }
        return 0;
      }
      iVar3 = 3;
      iVar2 = 0x5046;
    }
    else {
      iVar3 = 2;
      iVar2 = 0x5045;
    }
  }
  else {
    iVar3 = 1;
    iVar2 = 0x5042;
    if (*(int *)(param_1 + 0xb78) == 0 && *(int *)(param_1 + 0xb7c) == 0) {
      iVar2 = 0x5043;
    }
    if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
      if (iVar2 == 0) {
        return 1;
      }
    }
    else {
      iVar2 = 0x5044;
    }
  }
  lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,iVar2);
LAB_0045fb31:
  if (lpString2 != (LPCSTR)0x0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x3000;
    lstrcpynA((LPSTR)(param_1 + 0x240),lpString2,0x100);
    *(undefined1 *)(param_1 + 0x33f) = 0;
  }
  return iVar3;
}


