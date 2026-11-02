/* Module: vidcap30.exe
   Function: FUN_0044c4e0
   Address: 0044c4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0044c4e0(LPCSTR param_1,LPCSTR param_2)

{
  bool bVar1;
  uchar *lpString2;
  int iVar2;
  LPCSTR lpString1;
  int iVar3;
  bool bVar4;
  int local_110;
  uchar *local_10c;
  uchar local_104 [259];
  undefined1 local_1;
  
  lstrcpynA((LPSTR)local_104,param_2,0x104);
  local_1 = 0;
  lpString2 = _mbstok(local_104,"\\");
  bVar1 = false;
  local_10c = lpString2;
  do {
    bVar4 = bVar1;
    if (local_10c == (uchar *)0x0) {
LAB_0044c5a2:
      return -(uint)bVar4 & (uint)param_1;
    }
    bVar4 = false;
    local_10c = (uchar *)0x0;
    iVar2 = FUN_0044c620(param_1);
    local_110 = 0;
    if (iVar2 < 1) goto LAB_0044c5a2;
    do {
      bVar1 = true;
      if (bVar4) break;
      lpString1 = (LPCSTR)FUN_0044c5c0(param_1,local_110);
      iVar3 = lstrcmpA(lpString1,(LPCSTR)lpString2);
      bVar4 = iVar3 == 0;
      if (bVar4) {
        lpString2 = _mbstok((uchar *)0x0,"\\");
        local_10c = (uchar *)(uint)(lpString2 != (uchar *)0x0);
        param_1 = lpString1;
      }
      local_110 = local_110 + 1;
      bVar1 = bVar4;
    } while (local_110 < iVar2);
  } while( true );
}


