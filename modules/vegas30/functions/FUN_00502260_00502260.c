/* Module: vegas30.exe
   Function: FUN_00502260
   Address: 00502260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005022d4) */

int FUN_00502260(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  undefined4 extraout_var;
  LPCWSTR *ppWVar3;
  LPCWSTR local_4;
  
  ppWVar3 = &local_4;
  local_4 = (LPCWSTR)0x0;
  FUN_00503050(&param_2);
  iVar2 = FUN_00502100(param_1,extraout_var,ppWVar3);
  if (-1 < iVar2) {
    Ordinal_6(0);
    iVar2 = FUN_005021d0(unaff_EBX,&stack0x00000000);
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    iVar1 = param_2;
    if (-1 < iVar2) {
      if ((local_4 == (LPCWSTR)0x0) || (*local_4 != L'\0')) {
        WideCharToMultiByte(0,0,local_4,-1,(LPSTR)0x0,param_2,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      *(undefined1 *)(iVar1 + -1) = 0;
    }
    Ordinal_6(local_4);
  }
  Ordinal_6(param_2);
  return iVar2;
}


