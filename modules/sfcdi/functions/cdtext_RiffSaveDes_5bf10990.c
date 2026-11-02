/* Module: sfcdi.dll
   Function: cdtext_RiffSaveDes
   Address: 5bf10990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_RiffSaveDes(void *,struct _cdtexttrkfield *,unsigned long *) */

long cdtext_RiffSaveDes(void *param_1,_cdtexttrkfield *param_2,ulong *param_3)

{
  bool bVar1;
  void *hFile;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  ulong *puVar5;
  _cdtexttrkfield *p_Var6;
  DWORD local_c;
  DWORD local_8;
  DWORD local_4;
  
  puVar5 = param_3;
  p_Var6 = param_2;
                    /* 0x10990  229  ?cdtext_RiffSaveDes@@YGJPAXPAU_cdtexttrkfield@@PAK@Z */
  hFile = param_1;
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
  }
  bVar1 = false;
  iVar3 = 7;
  do {
    if (*(int *)param_2 != 0) {
      bVar1 = true;
    }
    param_2 = param_2 + 0xa4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (bVar1) {
    param_2 = (_cdtexttrkfield *)0x4;
    iVar3 = FUN_5bf34110(param_1,0x53454454,0);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_5bf33d00(hFile,&local_c);
    pcVar4 = s_TITLPERFWRITCOMPARNGMSSGISRChttp_5bf64610;
    local_c = local_c - 8;
    p_Var6 = p_Var6 + 4;
    do {
      if (*(int *)(p_Var6 + -4) != 0) {
        iVar3 = lstrlenA((LPCSTR)p_Var6);
        param_1 = (void *)(iVar3 + 1);
        iVar3 = FUN_5bf34040(hFile);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = FUN_5bf35600(hFile,(uchar *)p_Var6,(uint *)&param_1);
        if (iVar3 < 0) {
          return iVar3;
        }
        param_1 = (void *)((int)param_1 + 8);
        param_2 = param_2 + (int)param_1;
        puVar5 = param_3;
      }
      pcVar4 = pcVar4 + 4;
      p_Var6 = p_Var6 + 0xa4;
    } while (pcVar4 < s_TITLPERFWRITCOMPARNGMSSGISRChttp_5bf64610 + 0x1c);
    FUN_5bf33d00(hFile,&local_8);
    FUN_5bf33d20(hFile,local_c);
    BVar2 = WriteFile(hFile,&param_2,4,&local_4,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return -0x7ffb1ff7;
    }
    FUN_5bf33d20(hFile,local_8);
    if (puVar5 != (ulong *)0x0) {
      *puVar5 = (ulong)(param_2 + 8);
    }
  }
  return 0;
}


