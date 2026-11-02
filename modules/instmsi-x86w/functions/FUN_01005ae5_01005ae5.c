/* Module: InstMsi-x86w.exe
   Function: FUN_01005ae5
   Address: 01005ae5
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01005ae5(LPCSTR param_1)

{
  BOOL BVar1;
  int iVar2;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  DWORD local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_14 = 0;
  if ((*param_1 != '\0') &&
     (BVar1 = GetDiskFreeSpaceA(param_1,&local_10,&local_c,&local_8,&local_14), BVar1 != 0)) {
    iVar2 = MulDiv(local_c * local_10,local_8,0x400);
    return iVar2;
  }
  return 0;
}


