/* Module: vegas30k.dll
   Function: _SfSummary_GetStringFromFile@20
   Address: 010ff6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfSummary_GetStringFromFile_20
              (undefined4 param_1,undefined4 param_2,LPSTR param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  LPSTR pCVar2;
  int iVar3;
  LPCSTR lpString2;
  int iVar4;
  int local_8;
  undefined1 local_4 [4];
  
                    /* 0xff6f0  1211  _SfSummary_GetStringFromFile@20 */
  uVar1 = param_1;
  riff_SaveLocation(param_1,&param_1);
  iVar3 = riff_FindListChunk(uVar1,0x4f464e49,&local_8,param_5);
  if (iVar3 != 0) {
    riff_RestoreLocation(uVar1,param_1);
    return iVar3;
  }
  iVar3 = riff_FindChunkHeader(uVar1,param_2,local_4,&local_8);
  if (iVar3 != 0) {
    riff_RestoreLocation(uVar1,param_1);
    return iVar3;
  }
  lpString2 = calloc(1,local_8 + 1);
  if (lpString2 == (LPCSTR)0x0) {
    return -0x7ff8fff2;
  }
  iVar4 = riff_ReadData(uVar1,lpString2,local_8);
  iVar3 = param_4;
  pCVar2 = param_3;
  if (iVar4 != 0) {
    free(lpString2);
    riff_RestoreLocation(uVar1,param_1);
    return iVar4;
  }
  lstrcpynA(param_3,lpString2,param_4);
  pCVar2[iVar3 + -1] = '\0';
  free(lpString2);
  riff_RestoreLocation(uVar1,param_1);
  return 0;
}


