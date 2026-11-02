/* Module: pncrt.dll
   Function: FUN_78010780
   Address: 78010780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78010780(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_78042438 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(__lc_codepage,0x220,&param_2,1,lpMultiByteStr,__mb_cur_max,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  piVar2 = _errno();
  *piVar2 = 0x2a;
  return -1;
}


