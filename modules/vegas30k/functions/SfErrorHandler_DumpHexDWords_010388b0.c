/* Module: vegas30k.dll
   Function: SfErrorHandler_DumpHexDWords
   Address: 010388b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall SfErrorHandler_DumpHexDWords(char *,unsigned int,unsigned long *,long) */

uint SfErrorHandler_DumpHexDWords(char *param_1,uint param_2,ulong *param_3,long param_4)

{
  LPSTR pCVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  LPSTR pCVar5;
  ulong *lp;
  
                    /* 0x388b0  380  ?SfErrorHandler_DumpHexDWords@@YGIPADIPAKJ@Z */
  pCVar1 = param_1 + param_2;
  *param_1 = '\0';
  pCVar5 = param_1;
  if (param_4 < 1) {
    return 0;
  }
  do {
    uVar4 = 4;
    if (param_4 < 5) {
      uVar4 = param_4;
    }
    if (pCVar1 < pCVar5 + 0x32) break;
    iVar2 = wsprintfA(pCVar5," %08X: ",param_3);
    pCVar5 = pCVar5 + iVar2;
    lp = param_3;
    param_2 = uVar4;
    if (0 < (int)uVar4) {
      do {
        BVar3 = IsBadReadPtr(lp,4);
        if (BVar3 == 0) {
          wsprintfA(pCVar5,"%08X ",*lp);
        }
        else {
          lstrcpyA(pCVar5,"........ ");
        }
        pCVar5 = pCVar5 + 9;
        param_2 = param_2 - 1;
        lp = lp + 1;
      } while (param_2 != 0);
    }
    *pCVar5 = '\r';
    param_4 = param_4 - uVar4;
    param_3 = param_3 + uVar4;
    pCVar5[1] = '\n';
    pCVar5 = pCVar5 + 2;
    *pCVar5 = '\0';
  } while (0 < param_4);
  return (int)pCVar5 - (int)param_1;
}


