/* Module: g2plug.dll
   Function: MakeTextFromG2Template
   Address: 5f80e890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall MakeTextFromG2Template(struct SFCOMBO_TEMPLATE_INFO *,char *,int) */

int MakeTextFromG2Template(SFCOMBO_TEMPLATE_INFO *param_1,char *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  SFG2_PARAMS local_674 [1652];
  
                    /* 0xe890  14  ?MakeTextFromG2Template@@YGHPAUSFCOMBO_TEMPLATE_INFO@@PADH@Z */
  iVar2 = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  *param_2 = '\0';
  lVar1 = G2LoadRegistryTemplate((_GUID *)param_1,local_674,(SFG2TEMPLATE_DESCRIPTION *)0x0);
  if (-1 < lVar1) {
    FUN_5f8172d0(DAT_5f87746c,0xefab,param_2,param_3);
    _mbsnbcat((uchar *)param_2," ",param_3);
    _mbsnbcat((uchar *)param_2,*(uchar **)(param_1 + 0x1c),param_3);
    _mbsnbcat((uchar *)param_2,"\r\n",param_3);
    _mbsnbcat((uchar *)param_2,"\r\n",param_3);
    iVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x20));
    if (iVar2 != 0) {
      _mbsnbcat((uchar *)param_2,*(uchar **)(param_1 + 0x20),param_3);
      _mbsnbcat((uchar *)param_2,"\r\n",param_3);
      _mbsnbcat((uchar *)param_2,"\r\n",param_3);
    }
    iVar2 = lstrlenA(param_2);
    MakeTextFromG2Parms(local_674,param_2 + iVar2,param_3 - iVar2);
    iVar2 = 1;
  }
  return iVar2;
}


