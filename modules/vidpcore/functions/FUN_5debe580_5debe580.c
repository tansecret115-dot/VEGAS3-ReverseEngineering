/* Module: vidpcore.dll
   Function: FUN_5debe580
   Address: 5debe580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5debe580(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                undefined4 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  float10 extraout_ST0;
  
  iVar3 = param_5;
  iVar2 = FUN_5debbf10(&param_4,&param_1,&param_2,param_1,param_2,param_3,param_4,param_5);
  if (-1 < iVar2) {
    iVar3 = FUN_5debe420(param_6,iVar3);
    cVar1 = ftol();
    iVar2 = 0;
    if (0 < param_1) {
      do {
        if (param_5 == 4) {
          if ((cVar1 == -1) && (param_6 == 3)) {
            iVar4 = (int)(param_4 + ((int)param_4 >> 0x1f & 3U)) >> 2;
            uVar8 = param_4 & 0x80000003;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
            }
            iVar7 = param_2;
            if (0 < iVar4) {
              do {
                *(undefined1 *)(iVar7 + 3) = 0xff;
                *(undefined1 *)(iVar7 + 7) = 0xff;
                *(undefined1 *)(iVar7 + 0xb) = 0xff;
                *(undefined1 *)(iVar7 + 0xf) = 0xff;
                iVar7 = iVar7 + 0x10;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (0 < (int)uVar8) {
              puVar5 = (undefined1 *)(iVar7 + 3);
              do {
                *puVar5 = 0xff;
                puVar5 = puVar5 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
          else {
            iVar4 = (int)(param_4 + ((int)param_4 >> 0x1f & 3U)) >> 2;
            uVar8 = param_4 & 0x80000003;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
            }
            iVar7 = param_2;
            if (0 < iVar4) {
              do {
                *(char *)(iVar3 + iVar7) = cVar1;
                *(char *)(iVar3 + 4 + iVar7) = cVar1;
                *(char *)(iVar3 + 8 + iVar7) = cVar1;
                *(char *)(iVar3 + 0xc + iVar7) = cVar1;
                iVar7 = iVar7 + 0x10;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (0 < (int)uVar8) {
              pcVar6 = (char *)(iVar7 + iVar3);
              do {
                *pcVar6 = cVar1;
                pcVar6 = pcVar6 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
        }
        else {
          iVar7 = 0;
          iVar4 = iVar3;
          if (0 < (int)param_4) {
            do {
              iVar7 = iVar7 + 1;
              *(float *)(iVar4 + param_2) = (float)extraout_ST0;
              iVar4 = iVar4 + 0x10;
            } while (iVar7 < (int)param_4);
          }
        }
        param_2 = param_2 + param_3;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


