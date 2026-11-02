/* Module: vegas30.exe
   Function: FUN_005a9240
   Address: 005a9240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a9240(HRGN param_1,HRGN param_2)

{
  int *piVar1;
  HRGN pHVar2;
  HRGN hrgnDst;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pHVar2 = param_1;
  if ((int *)param_1[8].unused == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)param_1[8].unused;
  }
  piVar1 = (int *)((int)param_2 + 0x58);
  hrgnDst = CreateRectRgn(0,0,*piVar1,*(int *)((int)param_2 + 0x5c));
  if (hrgnDst != (HRGN)0x0) {
    iVar7 = iVar7 + -1;
    param_2 = hrgnDst;
    if (-1 < iVar7) {
      do {
        iVar3 = *(int *)(pHVar2[8].unused + 8);
        iVar5 = *(int *)(pHVar2[8].unused + 4) * iVar7;
        iVar6 = iVar5 + iVar3;
        if ((*(byte *)(iVar5 + iVar3) & 2) == 0) {
          iVar3 = FUN_005a9170(iVar6);
          if (iVar3 == 0) {
            iVar3 = FUN_005a8c10(iVar6,piVar1,&param_1);
            if (iVar3 != 0) {
              iVar3 = CombineRgn(hrgnDst,hrgnDst,param_1,4);
              DeleteObject(param_1);
              if (iVar3 == 0) break;
              if (iVar3 == 1) {
                if ((-1 < iVar7 + -1) && (0 < iVar7)) {
                  do {
                    FUN_005a8780(*(undefined4 *)(pHVar2[8].unused + 8));
                    _SfList_DeleteList_16(pHVar2[8].unused,0,1,0);
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                break;
              }
            }
          }
          else {
            FUN_005a8780(*(int *)(pHVar2[8].unused + 4) * iVar7 + *(int *)(pHVar2[8].unused + 8));
            _SfList_DeleteList_16(pHVar2[8].unused,iVar7,1,0);
          }
        }
        else {
          iVar3 = FUN_005a9170(iVar6);
          do {
            iVar7 = iVar7 + -1;
            if (iVar7 < 0) break;
            iVar5 = *(int *)(pHVar2[8].unused + 8);
            iVar4 = *(int *)(pHVar2[8].unused + 4) * iVar7;
            iVar6 = *(int *)(iVar4 + iVar5);
            if (iVar3 != 0) {
              FUN_005a8780(iVar4 + iVar5);
              _SfList_DeleteList_16(pHVar2[8].unused,iVar7,1,0);
            }
          } while (-1 < iVar6 << 0x1c);
          hrgnDst = param_2;
          if (iVar3 != 0) {
            FUN_005a8780(*(int *)(pHVar2[8].unused + 4) * iVar7 + *(int *)(pHVar2[8].unused + 8));
            _SfList_DeleteList_16(pHVar2[8].unused,iVar7,1,0);
            hrgnDst = param_2;
          }
        }
        iVar7 = iVar7 + -1;
        if (iVar7 < 0) {
          DeleteObject(hrgnDst);
          return;
        }
      } while( true );
    }
    DeleteObject(hrgnDst);
  }
  return;
}


