/* Module: vegas30.exe
   Function: FUN_004ec630
   Address: 004ec630
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ec630(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  
  uVar6 = DAT_0064b138;
  iVar11 = 0;
  iVar12 = 1;
  bVar5 = false;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  bVar4 = false;
  if (0 < iVar1) {
    do {
      pcVar2 = *(char **)(param_1[2] + iVar11 * 4);
      if (1 < iVar1) {
        uVar3 = *(uint *)(pcVar2 + 0x218);
        uVar7 = uVar3 | 1;
        *(uint *)(pcVar2 + 0x218) = uVar7;
        if (iVar11 == 0) {
          *(uint *)(pcVar2 + 0x218) = CONCAT31((int3)(uVar3 >> 8),(char)uVar7) | 2;
        }
        if (iVar11 == iVar1 + -1) {
          *(uint *)(pcVar2 + 0x218) = *(uint *)(pcVar2 + 0x218) | 4;
        }
      }
      iVar9 = *(int *)(pcVar2 + 0x208);
      if (((((iVar9 == 6) || (iVar9 == 0xf)) || (iVar9 == 10)) || ((iVar9 == 0xb || (iVar9 == 0xc)))
          ) || ((iVar9 == 0xd || (iVar9 == 0xe)))) {
        param_2 = 1;
      }
      else {
        if ((!bVar4) && (-1 < *(int *)(pcVar2 + 0x214))) {
          bVar4 = true;
          *(uint *)(pcVar2 + 0x218) = *(uint *)(pcVar2 + 0x218) | 0x40;
        }
        if ((iVar11 == iVar1 + -1) && (bVar4)) {
          *(uint *)(pcVar2 + 0x218) = *(uint *)(pcVar2 + 0x218) | 0x80;
        }
      }
      if (*(int *)(pcVar2 + 0x214) < 0) {
        if ((param_2 == 0) && ((pcVar2[0x218] & 0x80U) != 0)) {
          FUN_004eb2b0(uVar6);
          FUN_004ea040(uVar6,0);
        }
        if ((*(int *)(pcVar2 + 0x214) != -0x7ffb1fb9) || (bVar5)) {
          if ((*(int *)(pcVar2 + 0x214) == -0x7ffb1f7a) &&
             (iVar9 = FUN_005ee7d0(pcVar2,0x8004e086), iVar9 != 0)) goto LAB_004ec7ab;
        }
        else {
          lVar8 = SfShowFioInstallWizard(DAT_00647624,DAT_0064b510,pcVar2,3,1);
          if (lVar8 == 0) {
            bVar5 = true;
LAB_004ec7ab:
            iVar12 = FUN_004ebc10(pcVar2,pcVar2 + 0x208,pcVar2);
            if (-1 < iVar12) goto LAB_004ec7b9;
            goto LAB_004ec7d0;
          }
        }
        pcVar13 = pcVar2;
        uVar10 = _SfGetString_8(DAT_00647204,22000);
        SfErrorHandler_DetailsAddString(*(undefined4 *)(pcVar2 + 0x214),uVar10,pcVar13);
      }
      else {
        if (*(int *)(pcVar2 + 0x214) == 0x4e016) {
          FUN_005ee7d0(pcVar2,0x4e016);
        }
LAB_004ec7b9:
        iVar12 = FUN_004eb9b0(pcVar2,param_2,param_3,param_4);
      }
LAB_004ec7d0:
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar1);
  }
  return iVar12;
}


