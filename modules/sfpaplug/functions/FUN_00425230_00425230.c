/* Module: sfpaplug.dll
   Function: FUN_00425230
   Address: 00425230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00425230(HANDLE param_1,undefined4 param_2,DWORD param_3)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = FUN_00425160(param_1);
  if (-1 < iVar1) {
    BVar2 = WriteFile(param_1,&param_2,4,&param_3,(LPOVERLAPPED)0x0);
    iVar1 = (-(uint)(BVar2 != 0) & 0x7ffb1ff7) + 0x8004e009;
  }
  return iVar1;
}


