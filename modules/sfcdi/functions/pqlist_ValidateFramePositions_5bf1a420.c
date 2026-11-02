/* Module: sfcdi.dll
   Function: pqlist_ValidateFramePositions
   Address: 5bf1a420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall pqlist_ValidateFramePositions(struct HWND__ *,struct HSFCD__ *,struct tSFLIST
   *,int) */

int pqlist_ValidateFramePositions(HWND__ *param_1,HSFCD__ *param_2,tSFLIST *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  BYTE *pBVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int local_404;
  uint local_400;
  uint local_3fc [2];
  CHAR *local_3f4;
  CHAR *local_3ec;
  uint local_3e4;
  uint local_3e0;
  int local_3dc [10];
  uchar local_3b4 [256];
  undefined4 local_2b4 [15];
  uint local_278;
  CHAR local_250 [80];
  CHAR local_200 [512];
  
  piVar9 = local_3dc;
                    /* 0x1a420  248
                       ?pqlist_ValidateFramePositions@@YGHPAUHWND__@@PAUHSFCD__@@PAUtSFLIST@@H@Z */
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  iVar7 = 0;
  bVar1 = false;
  bVar2 = false;
  FUN_5bf27f10(DAT_5bf65fc4,0x936,local_250,0x50);
  FUN_5bf1a100(local_3fc);
  local_3f4 = local_250;
  local_3ec = local_200;
  local_2b4[0] = 100;
  cdr_GetDeviceCaps(param_2,(cdrcaps_tag *)local_2b4);
  local_3e0 = local_278 >> 0x11 & 1;
  if (param_3 == (tSFLIST *)0x0) {
    pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x937);
    FUN_5bf25750(local_3b4,pBVar3);
    FUN_5bf1a120((int *)local_3fc,local_3b4);
    iVar7 = 1;
    bVar2 = true;
LAB_5bf1a711:
    if (local_404 == 0) goto LAB_5bf1a717;
  }
  else {
    local_3e4 = *(uint *)param_3;
    local_404 = 0;
    local_400 = 0;
    if (local_3e4 != 0) {
      do {
        piVar9 = *(int **)(*(int *)(param_3 + 8) + local_400 * 4);
        FUN_5bf39820((int)piVar9);
        if (*piVar9 == 3) {
          iVar8 = piVar9[1];
          uVar5 = piVar9[2];
          if ((local_3e0 == 0) && ((piVar9[4] & 8U) != 0)) {
            pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x939);
            FUN_5bf25750(local_3b4,pBVar3);
            FUN_5bf1a120((int *)local_3fc,local_3b4);
            iVar7 = iVar7 + 1;
          }
          if (((piVar9[4] & 8U) != 0) && (iVar4 = FUN_5bf394b0((byte *)(piVar9 + 6)), iVar4 == 0)) {
            pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x93a);
            FUN_5bf25750(local_3b4,pBVar3);
            FUN_5bf1a120((int *)local_3fc,local_3b4);
            iVar7 = iVar7 + 1;
          }
          if ((iVar8 == 1) && (uVar5 < 0x96)) {
            pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x93b);
            FUN_5bf25750(local_3b4,pBVar3);
            FUN_5bf1a120((int *)local_3fc,local_3b4);
            iVar7 = iVar7 + 1;
            bVar1 = true;
          }
          if ((uint)piVar9[3] < 300) {
            pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x93c);
            FUN_5bf25750(local_3b4,pBVar3);
            FUN_5bf1a120((int *)local_3fc,local_3b4);
            iVar7 = iVar7 + 1;
            bVar1 = true;
          }
          if (iVar8 == 1) {
            if ((0xe1 < uVar5) && (param_4 != 0)) {
              pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x93d);
              FUN_5bf25750(local_3b4,pBVar3);
              FUN_5bf1a120((int *)local_3fc,local_3b4);
              iVar7 = iVar7 + 1;
            }
          }
          else if ((uint)piVar9[2] < (uint)(local_3dc[3] + local_3dc[2])) {
            pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x93e);
            FUN_5bf25750(local_3b4,pBVar3);
            FUN_5bf1a120((int *)local_3fc,local_3b4);
            iVar7 = iVar7 + 1;
            bVar1 = true;
          }
          piVar10 = local_3dc;
          for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar10 = piVar10 + 1;
          }
          local_404 = local_404 + 1;
        }
        local_400 = local_400 + 1;
      } while (local_400 < local_3e4);
      goto LAB_5bf1a711;
    }
LAB_5bf1a717:
    pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x93f);
    FUN_5bf25750(local_3b4,pBVar3);
    FUN_5bf1a120((int *)local_3fc,local_3b4);
    iVar7 = iVar7 + 1;
    bVar2 = true;
  }
  uVar5 = FUN_5bf39760((int *)param_3);
  if (0x514c8 < uVar5) {
    pBVar3 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x940);
    FUN_5bf25750(local_3b4,pBVar3);
    FUN_5bf1a120((int *)local_3fc,local_3b4);
    iVar7 = iVar7 + 1;
  }
  if (iVar7 == 0) {
    return 1;
  }
  if ((bVar1) || (bVar2)) {
    uVar5 = 0x941;
  }
  else {
    uVar5 = 0x942;
  }
  FUN_5bf27f10(DAT_5bf65fc4,uVar5,local_200,0x200);
  iVar7 = FUN_5bf1a3f0(DAT_5bf65eb8,param_1,(LPARAM)local_3fc);
  if (iVar7 == 1) {
    if (bVar1) {
      if (!bVar2) {
        puVar6 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x943);
        iVar7 = FUN_5bf25c20((HWND)0x0,0x144,puVar6);
        iVar7 = (iVar7 != 6) + 1;
        goto LAB_5bf1a854;
      }
    }
    else if (!bVar2) goto LAB_5bf1a854;
    iVar7 = 2;
    puVar6 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x944);
    FUN_5bf25c20((HWND)0x0,0x40,puVar6);
  }
LAB_5bf1a854:
  FUN_5bf1a1f0(local_3fc);
  return iVar7;
}


