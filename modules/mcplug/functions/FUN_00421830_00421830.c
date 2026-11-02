/* Module: mcplug.dll
   Function: FUN_00421830
   Address: 00421830
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00421830(HWND param_1,int param_2,uchar *param_3)

{
  uchar uVar1;
  uchar *lpsz;
  int iVar2;
  BOOL BVar3;
  uchar local_800 [2048];
  
  if (param_3 == (uchar *)0x0) {
    return 0;
  }
  uVar1 = *param_3;
  lpsz = param_3;
  do {
    if (uVar1 == '\0') {
      iVar2 = lstrlenA((LPCSTR)param_3);
LAB_0042187c:
      BVar3 = SetDlgItemTextA(param_1,param_2,(LPCSTR)param_3);
      if (BVar3 == 0) {
        iVar2 = 0;
      }
      return iVar2;
    }
    if ((uVar1 == '%') || (uVar1 == '$')) {
      iVar2 = FUN_0041f3c0(local_800,param_3,(uint *)&stack0x00000010);
      param_3 = local_800;
      goto LAB_0042187c;
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  } while( true );
}


