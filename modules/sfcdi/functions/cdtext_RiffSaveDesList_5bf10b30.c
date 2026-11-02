/* Module: sfcdi.dll
   Function: cdtext_RiffSaveDesList
   Address: 5bf10b30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_RiffSaveDesList(void *,struct _sfcdtext *,unsigned long *) */

long cdtext_RiffSaveDesList(void *param_1,_sfcdtext *param_2,ulong *param_3)

{
  void *hFile;
  _sfcdtext *p_Var1;
  long lVar2;
  uint uVar3;
  BOOL BVar4;
  uint uVar5;
  int local_10;
  DWORD local_c;
  DWORD local_8;
  DWORD local_4;
  
                    /* 0x10b30  230  ?cdtext_RiffSaveDesList@@YGJPAXPAU_sfcdtext@@PAK@Z */
  hFile = param_1;
  local_10 = 4;
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
  }
  lVar2 = FUN_5bf34110(param_1,0x5345444c,0);
  if (lVar2 == 0) {
    FUN_5bf33d00(hFile,&local_c);
    p_Var1 = param_2;
    local_c = local_c - 8;
    lVar2 = cdtext_RiffSaveDes(hFile,(_cdtexttrkfield *)(param_2 + 0x1c),(ulong *)&param_1);
    if (-1 < lVar2) {
      local_10 = local_10 + (int)param_1;
      uVar3 = cdtext_GetTrackCount(p_Var1);
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          lVar2 = cdtext_RiffSaveDes(hFile,*(_cdtexttrkfield **)
                                            (*(int *)(*(int *)(p_Var1 + 0x498) + 8) + uVar5 * 4),
                                     (ulong *)&param_1);
          if (lVar2 < 0) {
            return lVar2;
          }
          local_10 = local_10 + (int)param_1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      FUN_5bf33d00(hFile,&local_8);
      FUN_5bf33d20(hFile,local_c);
      BVar4 = WriteFile(hFile,&local_10,4,&local_4,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        return -0x7ffb1ff7;
      }
      FUN_5bf33d20(hFile,local_8);
      if (param_3 != (ulong *)0x0) {
        *param_3 = local_10 + 8;
      }
      lVar2 = 0;
    }
  }
  return lVar2;
}


