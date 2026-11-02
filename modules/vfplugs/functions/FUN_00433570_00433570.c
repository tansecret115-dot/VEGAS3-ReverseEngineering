/* Module: vfplugs.dll
   Function: FUN_00433570
   Address: 00433570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00433570(int param_1,RECT *param_2,int param_3,undefined4 *param_4,int param_5,uint param_6,
                undefined4 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  RECT *pRVar8;
  uint uVar9;
  float10 extraout_ST0;
  
  iVar3 = param_5;
  iVar2 = FUN_00430f00((int *)&param_4,&param_1,(int *)&param_2,param_1,param_2,param_3,param_4,
                       param_5);
  if (-1 < iVar2) {
    iVar3 = FUN_00433410(param_6,iVar3);
    cVar1 = ftol();
    iVar2 = 0;
    if (0 < param_1) {
      do {
        if (param_5 == 4) {
          if ((cVar1 == -1) && (param_6 == 3)) {
            iVar4 = (int)((int)param_4 + ((int)param_4 >> 0x1f & 3U)) >> 2;
            uVar9 = (uint)param_4 & 0x80000003;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
            }
            pRVar8 = param_2;
            if (0 < iVar4) {
              do {
                *(undefined1 *)((int)&pRVar8->left + 3) = 0xff;
                *(undefined1 *)((int)&pRVar8->top + 3) = 0xff;
                *(undefined1 *)((int)&pRVar8->right + 3) = 0xff;
                *(undefined1 *)((int)&pRVar8->bottom + 3) = 0xff;
                pRVar8 = pRVar8 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (0 < (int)uVar9) {
              puVar5 = (undefined1 *)((int)&pRVar8->left + 3);
              do {
                *puVar5 = 0xff;
                puVar5 = puVar5 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
          }
          else {
            iVar4 = (int)((int)param_4 + ((int)param_4 >> 0x1f & 3U)) >> 2;
            uVar9 = (uint)param_4 & 0x80000003;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
            }
            pRVar8 = param_2;
            if (0 < iVar4) {
              do {
                *(char *)((int)&pRVar8->left + iVar3) = cVar1;
                *(char *)((int)&pRVar8->top + iVar3) = cVar1;
                *(char *)((int)&pRVar8->right + iVar3) = cVar1;
                *(char *)((int)&pRVar8->bottom + iVar3) = cVar1;
                pRVar8 = pRVar8 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (0 < (int)uVar9) {
              pcVar6 = (char *)((int)&pRVar8->left + iVar3);
              do {
                *pcVar6 = cVar1;
                pcVar6 = pcVar6 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
          }
        }
        else {
          iVar7 = 0;
          iVar4 = iVar3;
          if (0 < (int)param_4) {
            do {
              iVar7 = iVar7 + 1;
              *(float *)((int)&param_2->left + iVar4) = (float)extraout_ST0;
              iVar4 = iVar4 + 0x10;
            } while (iVar7 < (int)param_4);
          }
        }
        param_2 = (RECT *)((int)&param_2->left + param_3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


