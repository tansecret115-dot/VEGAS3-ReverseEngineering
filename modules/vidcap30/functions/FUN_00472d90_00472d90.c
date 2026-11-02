/* Module: vidcap30.exe
   Function: FUN_00472d90
   Address: 00472d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00472d90(int *param_1,undefined4 param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  WCHAR unaff_DI;
  int *local_8;
  
  local_8 = param_1;
  if (param_1[0x4d] == 0) {
    iVar1 = FUN_004713e0(&local_8);
    if (iVar1 < 0) {
      return iVar1;
    }
    (**(code **)(*local_8 + 8))(local_8);
  }
  FUN_00579db0();
  if (0 < param_4) {
    unaff_DI = L'\0';
  }
  iVar1 = (**(code **)(*(int *)param_1[0x4d] + 0x14))
                    ((int *)param_1[0x4d],&stack0xffffffec,param_4,param_2,1);
  if (-1 < iVar1) {
    if ((&stack0x00000000 == (undefined1 *)0x14) || (unaff_DI != L'\0')) {
      WideCharToMultiByte(0,0,(LPCWSTR)&stack0xffffffec,-1,param_3,param_4,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (param_3 != (LPSTR)0x0) {
      *param_3 = '\0';
      param_3[param_4 + -1] = '\0';
      return iVar1;
    }
    param_3[param_4 + -1] = '\0';
  }
  return iVar1;
}


