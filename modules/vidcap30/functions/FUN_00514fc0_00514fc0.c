/* Module: vidcap30.exe
   Function: FUN_00514fc0
   Address: 00514fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00514fc0(int param_1,HDC param_2,int *param_3)

{
  BITMAPINFO *lpbmi;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  HDC hdcSrc;
  int *piVar5;
  HGDIOBJ h;
  int x;
  int iVar6;
  uint uVar7;
  int y;
  int *piVar8;
  HIMAGELIST himl;
  
  piVar5 = param_3;
  hdcSrc = DAT_005b81f8;
  if (*(HGDIOBJ *)(param_1 + 0xf8) == (HGDIOBJ)0x0) {
    iVar6 = SetStretchBltMode(param_2,3);
    lpbmi = *(BITMAPINFO **)(param_1 + 0x100);
    StretchDIBits(param_2,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],0,0,
                  (lpbmi->bmiHeader).biWidth,(lpbmi->bmiHeader).biHeight,*(void **)(param_1 + 0x104)
                  ,lpbmi,0,0xcc0020);
    SetStretchBltMode(param_2,iVar6);
  }
  else {
    h = SelectObject(DAT_005b81f8,*(HGDIOBJ *)(param_1 + 0xf8));
    BitBlt(param_2,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],hdcSrc,0,0,
           0xcc0020);
    SelectObject(hdcSrc,h);
  }
  iVar6 = *(int *)(param_1 + 0x150) * 4;
  uVar1 = *(uint *)(param_1 + 400);
  uVar2 = *(uint *)(*(int *)(param_1 + 0xa4) + iVar6);
  uVar3 = *(uint *)(param_1 + 0x9c);
  uVar4 = *(uint *)(*(int *)(param_1 + 0xa0) + iVar6);
  piVar8 = (int *)(param_1 + 0x19c);
  param_3 = (int *)0x0;
  do {
    uVar7 = 1 << ((byte)param_3 & 0x1f);
    if ((*(uint *)(param_1 + 0x98) & uVar7) != 0) {
      if (((~uVar2 & uVar3 | uVar4 ^ uVar1) & uVar7) == 0) {
        y = (piVar8[1] - *(int *)(param_1 + 0x5c)) + piVar5[1];
        iVar6 = piVar8[4];
        x = (*piVar8 - *(int *)(param_1 + 0x58)) + *piVar5;
        himl = *(HIMAGELIST *)(param_1 + 0xfc);
      }
      else {
        y = (piVar8[1] - *(int *)(param_1 + 0x5c)) + piVar5[1];
        iVar6 = piVar8[5];
        x = (*piVar8 - *(int *)(param_1 + 0x58)) + *piVar5;
        himl = *(HIMAGELIST *)(param_1 + 0xfc);
      }
      ImageList_Draw(himl,iVar6,param_2,x,y,1);
    }
    piVar8 = piVar8 + 8;
    param_3 = (int *)((int)param_3 + 1);
  } while (param_3 < 8);
  return;
}


