/* Module: vegas30k.dll
   Function: SfDvdiGetFileType
   Address: 010869e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiGetFileType(char *,int,enum tagDVD_FILE_TYPE *) */

long SfDvdiGetFileType(char *param_1,int param_2,tagDVD_FILE_TYPE *param_3)

{
  int iVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  
                    /* 0x869e0  369  ?SfDvdiGetFileType@@YGJPADHPAW4tagDVD_FILE_TYPE@@@Z */
  if (param_2 != 0) {
    *param_3 = 0;
    return 0;
  }
  iVar1 = lstrcmpiA(param_1,"AUDIO_TS");
  if (iVar1 == 0) {
    *param_3 = 8;
    return 0;
  }
  iVar1 = lstrcmpiA(param_1,"VIDEO_TS");
  if (iVar1 == 0) {
    *param_3 = 1;
    return 0;
  }
  iVar1 = lstrcmpiA(param_1,"VIDEO_TS.IFO");
  if (iVar1 == 0) {
    *param_3 = 2;
    return 0;
  }
  iVar1 = lstrcmpiA(param_1,"VIDEO_TS.VOB");
  if (iVar1 == 0) {
    *param_3 = 3;
    return 0;
  }
  iVar1 = lstrcmpiA(param_1,"VIDEO_TS.BUP");
  if (iVar1 == 0) {
    *param_3 = 4;
    return 0;
  }
  pCVar3 = ".IFO";
  pCVar2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_1);
  iVar1 = lstrcmpiA(pCVar2,pCVar3);
  if (iVar1 == 0) {
    *param_3 = 5;
    return 0;
  }
  pCVar3 = ".VOB";
  pCVar2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_1);
  iVar1 = lstrcmpiA(pCVar2,pCVar3);
  if (iVar1 == 0) {
    *param_3 = 6;
    return 0;
  }
  pCVar3 = ".BUP";
  pCVar2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_1);
  iVar1 = lstrcmpiA(pCVar2,pCVar3);
  *param_3 = (-(uint)(iVar1 != 0) & 2) + 7;
  return 0;
}


