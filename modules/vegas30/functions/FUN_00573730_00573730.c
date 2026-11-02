/* Module: vegas30.exe
   Function: FUN_00573730
   Address: 00573730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00573730(int param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *unaff_EBP;
  int *unaff_ESI;
  byte *pbVar7;
  code *pcVar8;
  int *unaff_EDI;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  char *pcVar12;
  uchar *_Source;
  undefined4 uStack_270;
  int *piStack_26c;
  int iStack_268;
  int *piVar13;
  char *pcStack_248;
  int *piStack_244;
  undefined4 uStack_234;
  ISFGraphBuilder *pIStack_230;
  char *local_22c;
  undefined4 local_228;
  undefined1 auStack_140 [4];
  undefined1 auStack_13c [316];
  
  piStack_244 = (int *)0x80;
  local_228 = 0x80;
  pcVar12 = (char *)(param_1 + 0xa0);
  pcStack_248 = pcVar12;
  local_22c = pcVar12;
  (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  if (((*pcVar12 == '\0') &&
      (lVar1 = Mixer_GetDeviceGraph(&pIStack_230,4,*(ulong *)(param_1 + 0x224)), -1 < lVar1)) &&
     (pIStack_230 != (ISFGraphBuilder *)0x0)) {
    piVar13 = (int *)&stack0xfffffdc4;
    (**(code **)(*(int *)pIStack_230 + 0x70))();
    if ((int)pcStack_248 < 1) {
      iStack_268 = 0x5739b1;
      (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    }
    else {
      if (1 < (int)pcStack_248) {
        piVar2 = (int *)_SfGetUIFontSize_4();
        uStack_234 = piVar2[1];
        piVar2 = (int *)((*(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x2e8)) / *piVar2);
        if (piVar2 < (int *)0x81) {
          unaff_ESI = piVar2;
        }
      }
      iVar3 = (**(code **)(*unaff_EBP + 0xb8))();
      if ((-1 < iVar3) && (unaff_ESI != (int *)0x0)) {
        piStack_26c = (int *)&stack0xfffffdac;
        iStack_268 = 0;
        uStack_270 = 1;
        (**(code **)(*unaff_ESI + 0xc))(unaff_ESI);
        if (unaff_EDI == (int *)0x0) {
LAB_00573995:
          (**(code **)(*piVar13 + 8))(piVar13);
        }
        else {
          do {
            unaff_EBP = (int *)((int)unaff_EBP + -1);
            (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&pcStack_248);
            iVar3 = _SfPlugIn_FindNode_8(DAT_0064b468,&stack0xfffffdb0);
            pcVar8 = lstrlenA_exref;
            if (iVar3 != 0) {
              iVar4 = lstrlenA(pcVar12);
              _Source = &stack0xfffffdc0;
              _mbscpy(&stack0xfffffdc0,(uchar *)(iVar3 + 0x20));
              uVar5 = lstrlenA(&stack0xfffffdc0);
              if (0xe < uVar5) {
                iVar6 = 0xe;
                bVar10 = false;
                iVar3 = 0;
                bVar11 = true;
                pbVar7 = &stack0xfffffdc0;
                pbVar9 = (byte *)"Sonic Foundry ";
                do {
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  bVar10 = *pbVar7 < *pbVar9;
                  bVar11 = *pbVar7 == *pbVar9;
                  pbVar7 = pbVar7 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (bVar11);
                if (!bVar11) {
                  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                }
                pcVar8 = lstrlenA_exref;
                if (iVar3 == 0) {
                  _Source = (uchar *)((int)&uStack_234 + 2);
                }
              }
              if (iStack_268 < 1) {
                iVar3 = (*pcVar8)(_Source);
                if ((int *)(iVar3 + iVar4) < unaff_EBP) {
                  _mbscpy((uchar *)(iVar4 + (int)unaff_EDI),_Source);
                  goto LAB_0057392e;
                }
                _Source = (uchar *)0x1;
                pcVar12 = "(%d)";
              }
              else {
                SfPrintF(auStack_13c," + (%d)",iStack_268);
                iVar3 = (*pcVar8)(_Source);
                iVar6 = (*pcVar8)(auStack_140);
                if (unaff_EBP <= (int *)(iVar6 + iVar4 + iVar3)) {
                  SfPrintF(iVar4 + (int)unaff_EDI,&DAT_0061b8ac,iStack_268 + 1);
                  (**(code **)(*piStack_26c + 8))(piStack_26c);
                  goto LAB_00573995;
                }
                pcVar12 = "%s + ";
              }
              SfPrintF(iVar4 + (int)unaff_EDI,pcVar12,_Source);
            }
LAB_0057392e:
            (**(code **)(*piStack_26c + 8))(piStack_26c);
            uStack_270 = 0;
            (*pcRam0000000c)(&stack0xfffffdc8,1,&uStack_270,0);
            pcVar12 = &stack0xfffffdc8;
          } while (unaff_EDI != (int *)0x0);
          (**(code **)(*piVar13 + 8))(piVar13);
        }
      }
    }
    iStack_268 = 0x5739bb;
    (**(code **)(*piStack_244 + 8))();
  }
  return;
}


