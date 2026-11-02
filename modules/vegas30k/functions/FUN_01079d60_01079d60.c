/* Module: vegas30k.dll
   Function: FUN_01079d60
   Address: 01079d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01079d60(byte *param_1,HDC param_2,RECT *param_3,CHAR *param_4)

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
                     (double)((float10)0.3010299956639812 * fVar6 * (float10)_DAT_011e23a8));
        param_4 = local_c;
        if (((param_1[4] & 2) != 0) &&
           (iVar2 = (c - 1) * *(int *)(param_1 + 0x48), iVar5 = param_3->right - param_3->left,
           iVar2 - iVar5 != 0 && iVar5 <= iVar2)) {
          c = c - 2;
        }
      }
      else {
        uVar7 = 0x1058;
LAB_01079f3e:
        param_4 = (CHAR *)_SfGetString2_8(CONCAT44(uVar7,DAT_0120e5c8));
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
        goto LAB_01079f3e;
      }
      fVar6 = (float10)log2(fVar6);
      c = SfPrintF(local_c,param_1 + 0x98,
                   (double)((float10)0.3010299956639812 * fVar6 * (float10)_DAT_011e23a8));
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
      goto LAB_01079f3e;
    }
    fVar6 = (float10)log2(fVar6);
    if ((float10)_DAT_011db3f0 <= (float10)0.3010299956639812 * fVar6 * (float10)_DAT_011e23a8) {
      ftol();
    }
    else {
      ftol();
    }
    c = SfPrintF(local_c,&DAT_011e23c8);
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
      goto LAB_01079fca;
    }
  }
  else if (!bVar1) {
    ExtTextOutA(param_2,(param_3->right + param_3->left) / 2,param_3->top + uVar3,4,param_3,param_4,
                c,(INT *)0x0);
    return;
  }
  CVar4 = 0xffffff;
LAB_01079fca:
  CVar4 = SetTextColor(param_2,CVar4);
  ExtTextOutA(param_2,(param_3->right + param_3->left) / 2,uVar3 + param_3->top,6,param_3,param_4,c,
              (INT *)0x0);
  SetTextColor(param_2,CVar4);
  return;
}


