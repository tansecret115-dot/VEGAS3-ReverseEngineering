/* Module: vfplugs.dll
   Function: FUN_0042ba00
   Address: 0042ba00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_0042ba00(HWND param_1,uchar *param_2)

{
  uchar uVar1;
  uchar *lpsz;
  int iVar2;
  BOOL BVar3;
  uchar local_800 [2048];
  
  uVar1 = *param_2;
  lpsz = param_2;
  do {
    if (uVar1 == '\0') {
      iVar2 = lstrlenA((LPCSTR)param_2);
LAB_0042ba3f:
      BVar3 = SetWindowTextA(param_1,(LPCSTR)param_2);
      if (BVar3 == 0) {
        return 0;
      }
      return iVar2;
    }
    if ((uVar1 == '%') || (uVar1 == '$')) {
      iVar2 = FUN_004296c0(local_800,param_2,(uint *)&stack0x0000000c);
      param_2 = local_800;
      goto LAB_0042ba3f;
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  } while( true );
}


