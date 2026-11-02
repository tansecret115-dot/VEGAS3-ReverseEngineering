/* Module: vidcap30.exe
   Function: FUN_00411530
   Address: 00411530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00411530(undefined4 param_1,int *param_2)

{
  LPSTR pCVar1;
  int iVar2;
  LPCWSTR unaff_EDI;
  int local_8;
  LPSTR local_4;
  
  local_8 = 0;
  local_4 = (LPSTR)0x0;
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  pCVar1 = local_4;
  if (-1 < iVar2) {
    if ((unaff_EDI == (LPCWSTR)0x0) || (*unaff_EDI != L'\0')) {
      WideCharToMultiByte(0,0,unaff_EDI,-1,local_4,0x80,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (local_4 != (LPSTR)0x0) {
      *local_4 = '\0';
    }
    pCVar1[0x7f] = '\0';
    CoTaskMemFree(unaff_EDI);
    *(int **)(pCVar1 + 0x84) = param_2;
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,&stack0xfffffff4);
    if (iVar2 < 0) {
      pCVar1[0x80] = '\0';
      pCVar1[0x81] = '\0';
      pCVar1[0x82] = '\0';
      pCVar1[0x83] = '\0';
      iVar2 = 0;
    }
    else {
      *(int **)(pCVar1 + 0x80) = &local_8;
      if (&local_8 != (int *)0x0) {
        (**(code **)(local_8 + 8))(&local_8);
        return iVar2;
      }
    }
  }
  return iVar2;
}


