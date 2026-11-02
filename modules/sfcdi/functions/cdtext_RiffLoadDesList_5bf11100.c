/* Module: sfcdi.dll
   Function: cdtext_RiffLoadDesList
   Address: 5bf11100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_RiffLoadDesList(void *,struct _sfcdtext *,long) */

long cdtext_RiffLoadDesList(void *param_1,_sfcdtext *param_2,long param_3)

{
  _cdtexttrkfield *p_Var1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint local_c;
  DWORD local_8;
  undefined1 local_4 [4];
  
                    /* 0x11100  227  ?cdtext_RiffLoadDesList@@YGJPAXPAU_sfcdtext@@J@Z */
  FUN_5bf33d00(param_1,&local_8);
  uVar2 = FUN_5bf345d0(param_1,(int *)&local_c,&param_3);
  if (uVar2 == 0) {
    if (local_c != 0) {
      FUN_5bf33d20(param_1,local_8);
      uVar2 = FUN_5bf34200(param_1,local_4,&param_3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      lVar3 = cdtext_RiffLoadDes(param_1,(_cdtexttrkfield *)(param_2 + 0x1c),&param_3);
      if (lVar3 < 0) {
        return lVar3;
      }
      local_c = local_c - 1;
      uVar2 = cdtext_GetTrackCount(param_2);
      if (uVar2 < local_c) {
        uVar4 = 0;
        if (local_c != uVar2) {
          do {
            lVar3 = FUN_5bf2ade0(*(int **)(param_2 + 0x498),(int *)0x0,0x47c,-1,(int *)0x0);
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_c - uVar2);
        }
        if (lVar3 < 0) {
          return lVar3;
        }
      }
      uVar2 = 0;
      if (local_c != 0) {
        do {
          p_Var1 = *(_cdtexttrkfield **)(*(int *)(*(int *)(param_2 + 0x498) + 8) + uVar2 * 4);
          uVar4 = FUN_5bf34200(param_1,local_4,&param_3);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
          lVar3 = cdtext_RiffLoadDes(param_1,p_Var1,&param_3);
          if (lVar3 < 0) {
            return lVar3;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_c);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


