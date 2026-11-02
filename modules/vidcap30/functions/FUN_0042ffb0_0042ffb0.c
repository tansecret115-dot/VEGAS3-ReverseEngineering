/* Module: vidcap30.exe
   Function: FUN_0042ffb0
   Address: 0042ffb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042ffb0(int param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  uVar1 = *(uint *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x90) + 10;
  iVar5 = *(int *)(param_1 + 0x94) + 8;
  iVar4 = *(int *)(param_1 + 0xac);
  if ((uVar1 & 2) == 0) {
    if (iVar4 != 0) {
      pbVar2 = (byte *)(param_1 + 0xca);
      do {
        if ((pbVar2[1] & 1) == 0) {
          if ((*pbVar2 & 8) == 0) {
            iVar7 = iVar7 + *(int *)(pbVar2 + 6) * iVar6;
            goto LAB_0043006b;
          }
        }
        else {
          iVar7 = iVar7 + 6;
LAB_0043006b:
          iVar7 = iVar7 + 2;
        }
        pbVar2 = pbVar2 + 0x20;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (iVar7 != 0) {
        if ((uVar1 & 1) == 0) {
          piVar3 = (int *)_SfGetUIFontSize_4(100);
          iVar7 = iVar7 + (*piVar3 / 2) * 2;
        }
        param_2[1] = iVar5;
        *param_2 = iVar7 + -2;
      }
    }
  }
  else if (iVar4 != 0) {
    pbVar2 = (byte *)(param_1 + 0xca);
    do {
      if ((pbVar2[1] & 1) == 0) {
        if ((*pbVar2 & 8) == 0) {
          iVar8 = iVar8 + iVar5;
          goto LAB_00430008;
        }
      }
      else {
        iVar8 = iVar8 + 6;
LAB_00430008:
        iVar8 = iVar8 + 2;
      }
      pbVar2 = pbVar2 + 0x20;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar8 != 0) {
      if ((uVar1 & 1) == 0) {
        iVar7 = _SfGetUIFontSize_4(100);
        iVar8 = iVar8 + (*(int *)(iVar7 + 4) / 2) * 2;
      }
      *param_2 = iVar6;
      param_2[1] = iVar8 + -2;
      return 1;
    }
  }
  return 1;
}


