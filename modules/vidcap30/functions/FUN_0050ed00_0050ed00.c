/* Module: vidcap30.exe
   Function: FUN_0050ed00
   Address: 0050ed00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050ed00(byte *param_1,HDC param_2,RECT *param_3,CHAR *param_4)

{
  bool bVar1;
  UINT c;
  int iVar2;
  uint uVar3;
  COLORREF CVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  CHAR local_c [12];
  
  bVar1 = false;
  if ((*param_1 & 2) == 0) {
    if (*(int *)(param_1 + 0x84) < (int)param_4) {
      CVar4 = 0xff;
      bVar1 = true;
      if (((*(uint *)(param_1 + 4) & 0x800) == 0) && ((*(uint *)(param_1 + 4) & 4) != 0)) {
        fVar6 = (float10)log2((float10)(float)param_4);
        c = SfPrintF(local_c,param_1 + 0x98,
                     (double)((float10)0.3010299956639812 * fVar6 * (float10)_DAT_0059bb20));
        param_4 = local_c;
        if (((param_1[4] & 2) != 0) &&
           (iVar2 = (c - 1) * *(int *)(param_1 + 0x48), iVar5 = param_3->right - param_3->left,
           iVar2 - iVar5 != 0 && iVar5 <= iVar2)) {
          c = c - 2;
        }
      }
      else {
        uVar7 = 0x1058;
LAB_0050eede:
        param_4 = (CHAR *)_SfGetString2_8(CONCAT44(uVar7,DAT_005c16d8));
        c = lstrlenA(param_4);
      }
    }
    else {
      if ((param_1[4] & 4) == 0) {
        fVar6 = (float10)(int)param_4 * (float10)*(double *)(param_1 + 0x88);
      }
      else {
        fVar6 = (float10)(float)param_4;
      }
      CVar4 = *(COLORREF *)(param_1 + 100);
      if (fVar6 < (float10)*(double *)(param_1 + 0x88)) {
        uVar7 = 0x1057;
        goto LAB_0050eede;
      }
      fVar6 = (float10)log2(fVar6);
      c = SfPrintF(local_c,param_1 + 0x98,
                   (double)((float10)0.3010299956639812 * fVar6 * (float10)_DAT_0059bb20));
      param_4 = local_c;
      if (((param_1[4] & 2) != 0) &&
         (iVar2 = (c - 1) * *(int *)(param_1 + 0x48), iVar5 = param_3->right - param_3->left,
         iVar2 - iVar5 != 0 && iVar5 <= iVar2)) {
        c = c - 2;
      }
    }
  }
  else {
    if ((param_1[4] & 4) == 0) {
      fVar6 = (float10)(int)param_4 * (float10)*(double *)(param_1 + 0x88);
    }
    else {
      fVar6 = (float10)(float)param_4;
    }
    CVar4 = *(COLORREF *)(param_1 + 100);
    if (fVar6 < (float10)*(double *)(param_1 + 0x88)) {
      uVar7 = 0x1057;
      goto LAB_0050eede;
    }
    fVar6 = (float10)log2(fVar6);
    if ((float10)_DAT_00589f10 <= (float10)0.3010299956639812 * fVar6 * (float10)_DAT_0059bb20) {
      ftol();
    }
    else {
      ftol();
    }
    c = SfPrintF(local_c,&DAT_0059bb38);
    param_4 = local_c;
    if (((param_1[4] & 2) != 0) &&
       (iVar5 = (c - 1) * *(int *)(param_1 + 0x48), iVar2 = param_3->right - param_3->left,
       iVar5 - iVar2 != 0 && iVar2 <= iVar5)) {
      c = c - 2;
    }
  }
  SetBkColor(param_2,CVar4);
  uVar3 = ((param_3->bottom - *(int *)(param_1 + 0x4c)) - param_3->top) / 2;
  uVar3 = uVar3 & ((int)uVar3 < 0) - 1;
  if ((param_1[4] & 0x40) == 0) {
    if (!bVar1) {
      CVar4 = 0;
      goto LAB_0050ef6a;
    }
  }
  else if (!bVar1) {
    ExtTextOutA(param_2,(param_3->right + param_3->left) / 2,param_3->top + uVar3,4,param_3,param_4,
                c,(INT *)0x0);
    return;
  }
  CVar4 = 0xffffff;
LAB_0050ef6a:
  CVar4 = SetTextColor(param_2,CVar4);
  ExtTextOutA(param_2,(param_3->right + param_3->left) / 2,uVar3 + param_3->top,6,param_3,param_4,c,
              (INT *)0x0);
  SetTextColor(param_2,CVar4);
  return;
}


