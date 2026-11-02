/* Module: vegas30.exe
   Function: FUN_004ec9c0
   Address: 004ec9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ec9c0(HWND param_1,uchar *param_2,uint *param_3)

{
  int iVar1;
  HMENU pHVar2;
  int iVar3;
  uint uVar4;
  UINT uPosition;
  int nPos;
  uchar local_214 [260];
  CHAR local_110 [272];
  
  if (DAT_00647afc != 0) {
    _mbscpy(local_214,param_2);
    uVar4 = 0;
    if (*param_3 != 0) {
      iVar3 = 0;
      do {
        iVar1 = lstrcmpiA((LPCSTR)(param_3[1] + 4 + iVar3),(LPCSTR)local_214);
        if (iVar1 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x108;
      } while (uVar4 < *param_3);
    }
    iVar3 = FUN_004ec9b0();
    if (*param_3 == 0) {
      iVar1 = iVar3;
      pHVar2 = GetMenu(param_1);
      pHVar2 = GetSubMenu(pHVar2,iVar1);
      AppendMenuA(pHVar2,0x800,0,(LPCSTR)0x0);
    }
    if (*param_3 < DAT_00647b04) {
      iVar1 = iVar3;
      pHVar2 = GetMenu(param_1);
      pHVar2 = GetSubMenu(pHVar2,iVar1);
      AppendMenuA(pHVar2,0,*param_3 + 0x9cb6,"");
      *param_3 = *param_3 + 1;
    }
    memmove((void *)((int)param_3[1] + 0x108),(void *)param_3[1],*param_3 * 0x108 - 0x108);
    _mbscpy((uchar *)(param_3[1] + 4),local_214);
    *(undefined4 *)param_3[1] = 400;
    if (*param_3 != 0) {
      iVar1 = 0;
      uPosition = 0x9cb6;
      do {
        FUN_004ec910(uPosition - 0x9cb5,param_3[1] + 4 + iVar1,local_110,0x10e);
        nPos = iVar3;
        pHVar2 = GetMenu(param_1);
        pHVar2 = GetSubMenu(pHVar2,nPos);
        ModifyMenuA(pHVar2,uPosition,0,uPosition,local_110);
        iVar1 = iVar1 + 0x108;
        uVar4 = uPosition - 0x9cb5;
        uPosition = uPosition + 1;
      } while (uVar4 < *param_3);
    }
  }
  return 0;
}


