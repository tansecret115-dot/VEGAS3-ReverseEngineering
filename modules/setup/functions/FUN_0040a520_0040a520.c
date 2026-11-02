/* Module: Setup.exe
   Function: FUN_0040a520
   Address: 0040a520
   Source: Ghidra pseudocode (Stage 10 batch) */


long __thiscall FUN_0040a520(void *this,HANDLE param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((int)this + 0x30);
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_0040cfc0(this,param_1);
  if (-1 < iVar2) {
    *(HANDLE *)((int)this + 8) = param_1;
    lVar1 = CArchive2::GetSizeExtractAll(this);
    return lVar1;
  }
  CloseHandle(param_1);
  return iVar2;
}


