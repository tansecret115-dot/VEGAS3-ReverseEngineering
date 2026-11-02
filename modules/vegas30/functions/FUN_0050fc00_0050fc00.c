/* Module: vegas30.exe
   Function: FUN_0050fc00
   Address: 0050fc00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0050fc00(HDC param_1,int *param_2,LPCSTR param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  SIZE_T dwBytes;
  LPPOINT apt;
  LPBYTE aj;
  LONG LVar3;
  LPPOINT ptVar4;
  tagSIZE *lpsz;
  int local_60;
  tagSIZE local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_30 = (double)(param_2[2] - *param_2);
  local_20 = (double)(param_2[3] - param_2[1]);
  local_38 = (double)(param_2[6] - *param_2);
  local_28 = (double)(param_2[7] - param_2[1]);
  iVar1 = SetBkMode(param_1,1);
  BeginPath(param_1);
  iVar2 = lstrlenA(param_3);
  TextOutA(param_1,0,0,param_3,iVar2);
  EndPath(param_1);
  SetBkMode(param_1,iVar1);
  dwBytes = GetPath(param_1,(LPPOINT)0x0,(LPBYTE)0x0,0);
  if ((0 < (int)dwBytes) && (apt = GlobalAlloc(0x40,dwBytes * 8), apt != (LPPOINT)0x0)) {
    aj = GlobalAlloc(0x40,dwBytes);
    if (aj != (LPBYTE)0x0) {
      iVar1 = GetPath(param_1,apt,aj,dwBytes);
      if (iVar1 == -1) {
        GetLastError();
      }
      else {
        lpsz = &local_50;
        iVar2 = lstrlenA(param_3);
        GetTextExtentPointA(param_1,param_3,iVar2,lpsz);
        FUN_0050ffa0(apt,iVar1,&local_18);
        local_48 = (double)(local_10 + local_18) * _DAT_00610560;
        local_40 = (double)(local_c + local_14) * _DAT_00610560;
        ptVar4 = apt;
        local_60 = iVar1;
        if (0 < iVar1) {
          do {
            LVar3 = ftol();
            ptVar4->x = LVar3;
            LVar3 = ftol();
            ptVar4->y = LVar3;
            local_60 = local_60 + -1;
            ptVar4 = ptVar4 + 1;
          } while (local_60 != 0);
        }
        FUN_0050fe70(param_1,apt,aj,iVar1,param_4);
      }
    }
    GlobalFree(apt);
    GlobalFree(aj);
  }
  return 1;
}


