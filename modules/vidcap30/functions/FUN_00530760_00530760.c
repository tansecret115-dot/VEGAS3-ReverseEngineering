/* Module: vidcap30.exe
   Function: FUN_00530760
   Address: 00530760
   Source: Ghidra pseudocode (Stage 10 batch) */


long __thiscall FUN_00530760(__int64 *param_1,HANDLE param_2)

{
  long lVar1;
  int iVar2;
  __int64 *p_Var3;
  
  p_Var3 = param_1 + 6;
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = (__int64 *)((int)p_Var3 + 4);
  }
  iVar2 = FUN_00533200(param_2);
  if (-1 < iVar2) {
    *(HANDLE *)(param_1 + 1) = param_2;
    lVar1 = CArchive2::GetSizeExtractAll(param_1);
    return lVar1;
  }
  CloseHandle(param_2);
  return iVar2;
}


