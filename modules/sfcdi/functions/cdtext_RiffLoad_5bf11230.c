/* Module: sfcdi.dll
   Function: cdtext_RiffLoad
   Address: 5bf11230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_RiffLoad(void *,struct _sfcdtext *,int) */

long cdtext_RiffLoad(void *param_1,_sfcdtext *param_2,int param_3)

{
  void *hFile;
  _sfcdtext *p_Var1;
  uint uVar2;
  int iVar3;
  uint local_3c;
  int local_38;
  void *local_34;
  DWORD local_30;
  long local_2c [2];
  LONG local_24;
  undefined1 local_20 [32];
  
                    /* 0x11230  225  ?cdtext_RiffLoad@@YGJPAXPAU_sfcdtext@@H@Z */
  hFile = param_1;
  FUN_5bf33d00(param_1,&local_30);
  local_2c[1] = 0;
  local_24 = 0;
  SetFilePointer(hFile,0,&local_24,0);
  if (param_3 == 0) {
    iVar3 = FUN_5bf342d0(hFile,(int *)&param_1,&local_38);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_38 != 0x58544443) {
      return -0x7ffb1ff5;
    }
    local_34 = param_1;
    uVar2 = FUN_5bf34410(hFile,0x20524448,&local_3c,&local_34);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_5bf34570(hFile,0x58544443,(int *)&param_1);
    if (uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_5bf34380(hFile,0x20524448,&local_3c,(int *)&param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  uVar2 = FUN_5bf33dd0(hFile,local_20,0x20,local_3c);
  p_Var1 = param_2;
  if (-1 < (int)uVar2) {
    memmove(param_2,local_20,0x18);
    uVar2 = FUN_5bf344a0(hFile,0x5345444c,local_2c,(int *)&param_1);
    if (uVar2 != 0) {
      FUN_5bf33d20(hFile,local_30);
      return uVar2;
    }
    uVar2 = cdtext_RiffLoadDesList(hFile,p_Var1,local_2c[0]);
    uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
  }
  return uVar2;
}


