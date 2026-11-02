/* Module: vidcap30.exe
   Function: SfErrorHandler_DumpHex
   Address: 0047e0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfErrorHandler_DumpHex(char *,unsigned int,void *,unsigned int) */

uint SfErrorHandler_DumpHex(char *param_1,uint param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  BOOL BVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_8 [8];
  
                    /* 0x7e0d0  72  ?SfErrorHandler_DumpHex@@YGIPADIPAXI@Z */
  pbVar1 = (byte *)(param_1 + param_2);
  *param_1 = '\0';
  pbVar5 = (byte *)param_1;
  do {
    param_2 = 8;
    if (param_4 < 9) {
      param_2 = param_4;
    }
    if (pbVar1 < pbVar5 + 0x32) break;
    iVar3 = wsprintfA((LPSTR)pbVar5," %08X: ",param_3);
    pbVar5 = pbVar5 + iVar3;
    uVar6 = 0;
    pbVar8 = local_8 + -(int)param_3;
    pbVar7 = param_3;
    do {
      if (uVar6 < param_2) {
        pbVar7[(int)pbVar8] = 0x2e;
        BVar4 = IsBadReadPtr(pbVar7,1);
        if (BVar4 == 0) {
          wsprintfA((LPSTR)pbVar5,"%02X ",(uint)*pbVar7);
          bVar2 = *pbVar7;
          if ((0x1f < bVar2) && (bVar2 < 0x7f)) {
            pbVar7[(int)pbVar8] = bVar2;
          }
        }
        else {
          lstrcpyA((LPSTR)pbVar5,".. ");
        }
      }
      else {
        lstrcpyA((LPSTR)pbVar5,"   ");
        pbVar7[(int)pbVar8] = 0x20;
      }
      pbVar5 = pbVar5 + 3;
      uVar6 = uVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 < 8);
    if (param_2 != 0) {
      pbVar7 = local_8;
      pbVar8 = pbVar5;
      for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar7;
        pbVar7 = pbVar7 + 4;
        pbVar8 = pbVar8 + 4;
      }
      pbVar5 = pbVar5 + param_2;
      for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar8 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      }
    }
    *pbVar5 = 0xd;
    param_3 = (void *)((int)param_3 + param_2);
    pbVar5[1] = 10;
    pbVar5 = pbVar5 + 2;
    param_4 = param_4 - param_2;
    *pbVar5 = 0;
  } while (param_4 != 0);
  return (int)pbVar5 - (int)param_1;
}


