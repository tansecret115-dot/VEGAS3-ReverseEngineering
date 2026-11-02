/* Module: vidcap30.exe
   Function: FUN_00474910
   Address: 00474910
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00474910(int param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  WCHAR unaff_DI;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_004713e0(&local_8);
  if (-1 < iVar1) {
    FUN_00579db0();
    if (0 < param_3) {
      unaff_DI = L'\0';
    }
    iVar1 = (**(code **)(*local_8 + 0x14))
                      (local_8,&stack0xffffffec,param_3,*(undefined4 *)(param_1 + 0x10),2);
    if (-1 < iVar1) {
      if ((&stack0x00000000 == (undefined1 *)0x14) || (unaff_DI != L'\0')) {
        WideCharToMultiByte(0,0,(LPCWSTR)&stack0xffffffec,-1,param_2,param_3,(LPCSTR)0x0,(LPBOOL)0x0
                           );
      }
      else if (param_2 != (LPSTR)0x0) {
        *param_2 = '\0';
      }
      param_2[param_3 + -1] = '\0';
    }
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


