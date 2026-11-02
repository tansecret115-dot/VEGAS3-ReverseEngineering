/* Module: pngu3266.dll
   Function: CenterRect
   Address: 6060964a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNDrawHelper::CenterRect(class CPNxRect &,class CPNxRect const &) */

void __cdecl CPNDrawHelper::CenterRect(CPNxRect *param_1,CPNxRect *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x1964a  840  ?CenterRect@CPNDrawHelper@@SAXAAVCPNxRect@@ABV2@@Z */
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 4);
  iVar4 = ((*(int *)(param_2 + 8) - (*(int *)(param_1 + 8) - iVar1)) - *(int *)param_2) / 2 +
          *(int *)param_2;
  *(int *)param_1 = iVar4;
  iVar5 = ((iVar5 - (*(int *)(param_1 + 0xc) - iVar2)) - iVar3) / 2 + *(int *)(param_2 + 4);
  *(int *)(param_1 + 4) = iVar5;
  *(int *)(param_1 + 0xc) = (*(int *)(param_1 + 0xc) - iVar2) + iVar5;
  *(int *)(param_1 + 8) = iVar4 + (*(int *)(param_1 + 8) - iVar1);
  return;
}


