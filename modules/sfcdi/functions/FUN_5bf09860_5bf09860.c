/* Module: sfcdi.dll
   Function: FUN_5bf09860
   Address: 5bf09860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf09860(char *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  char *lpString1;
  uchar *puVar3;
  int *piVar4;
  uchar *_Dest;
  int local_7b4;
  uchar local_7b0 [128];
  uchar local_730 [256];
  int local_630 [67];
  uchar local_524 [264];
  uchar local_41c [264];
  uchar local_314 [788];
  
  iVar2 = 0;
  puVar3 = param_2;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3 = puVar3 + 4;
  }
  piVar4 = local_630;
  do {
    local_730[0] = '\0';
    param_1 = FUN_5bf08d70((char *)local_730,param_1,0x100);
    _mbscpy((uchar *)(piVar4 + 1),local_730);
    *piVar4 = iVar2;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 0x42;
  } while (iVar2 < 6);
  local_7b4 = 0;
  do {
    if (local_7b4 == 1) {
      puVar3 = local_524;
      _Dest = param_2;
LAB_5bf0997e:
      _mbscpy(_Dest,puVar3);
    }
    else {
      if (local_7b4 == 2) {
        puVar3 = local_41c;
        _Dest = param_2 + 10;
        goto LAB_5bf0997e;
      }
      if (local_7b4 == 3) {
        _mbscpy(local_7b0,local_314);
        puVar3 = param_2 + 0x22;
        _mbscpy(puVar3,local_7b0);
        iVar2 = 0;
        iVar1 = lstrlenA(s_IMSCDD2000_5bf620f0);
        if (iVar1 != 0) {
          lpString1 = s_IMSCDD2000_5bf620f0;
          do {
            iVar1 = lstrcmpA(lpString1,(LPCSTR)puVar3);
            if (iVar1 == 0) {
              _mbscpy(puVar3,(uchar *)(s_Philips_CDD2000_5bf62118 + iVar2 * 0x50));
              break;
            }
            lpString1 = lpString1 + 0x50;
            iVar2 = iVar2 + 1;
            iVar1 = lstrlenA(lpString1);
          } while (iVar1 != 0);
        }
      }
    }
    local_7b4 = local_7b4 + 1;
    if (5 < local_7b4) {
      param_2[0x3c] = '\x06';
      param_2[0x3d] = '\0';
      param_2[0x3e] = '\0';
      param_2[0x3f] = '\0';
      param_2[0x78] = 0x89;
      param_2[0x79] = '\x13';
      param_2[0x7a] = '\0';
      param_2[0x7b] = '\0';
      return 0;
    }
  } while( true );
}


