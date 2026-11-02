/* Module: sftrkfx1.dll
   Function: FUN_5cbc7e00
   Address: 5cbc7e00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbc7e00(byte *param_1,HDC param_2,RECT *param_3,uchar *param_4)

{
  bool bVar1;
  UINT c;
  int iVar2;
  uint uVar3;
  COLORREF CVar4;
  int iVar5;
  float10 fVar6;
  uchar local_c [12];
  
  bVar1 = false;
  if ((*param_1 & 2) == 0) {
    if (*(int *)(param_1 + 0x84) < (int)param_4) {
      CVar4 = 0xff;
      bVar1 = true;
      if (((*(uint *)(param_1 + 4) & 0x800) == 0) && ((*(uint *)(param_1 + 4) & 4) != 0)) {
        log2((float10)(float)param_4);
        c = FUN_5cbbf190(local_c,param_1 + 0x98);
        param_4 = local_c;
        if (((param_1[4] & 2) != 0) &&
           (iVar2 = (c - 1) * *(int *)(param_1 + 0x48), iVar5 = param_3->right - param_3->left,
           iVar2 - iVar5 != 0 && iVar5 <= iVar2)) {
          c = c - 2;
        }
      }
      else {
        uVar3 = 0x1057;
LAB_5cbc7fde:
        param_4 = FUN_5cbd6910(DAT_5cc114f8,uVar3);
        c = lstrlenA((LPCSTR)param_4);
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
        uVar3 = 0x1056;
        goto LAB_5cbc7fde;
      }
      log2(fVar6);
      c = FUN_5cbbf190(local_c,param_1 + 0x98);
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
      uVar3 = 0x1056;
      goto LAB_5cbc7fde;
    }
    fVar6 = (float10)log2(fVar6);
    if ((float10)_DAT_5cc04098 <= (float10)0.3010299956639812 * fVar6 * (float10)_DAT_5cc04cd0) {
      ftol();
    }
    else {
      ftol();
    }
    c = FUN_5cbbf190(local_c,"$.1z");
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
      goto LAB_5cbc806a;
    }
  }
  else if (!bVar1) {
    ExtTextOutA(param_2,(param_3->right + param_3->left) / 2,param_3->top + uVar3,4,param_3,
                (LPCSTR)param_4,c,(INT *)0x0);
    return;
  }
  CVar4 = 0xffffff;
LAB_5cbc806a:
  CVar4 = SetTextColor(param_2,CVar4);
  ExtTextOutA(param_2,(param_3->right + param_3->left) / 2,uVar3 + param_3->top,6,param_3,
              (LPCSTR)param_4,c,(INT *)0x0);
  SetTextColor(param_2,CVar4);
  return;
}


