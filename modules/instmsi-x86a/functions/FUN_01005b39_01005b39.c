/* Module: InstMsi-x86a.exe
   Function: FUN_01005b39
   Address: 01005b39
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01005b39(LPCSTR param_1,int *param_2)

{
  BOOL BVar1;
  int nNumber;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  DWORD local_8;
  
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  BVar1 = GetDiskFreeSpaceA(param_1,&local_c,&local_8,&local_10,&local_14);
  if (BVar1 != 0) {
    nNumber = local_8 * local_c;
    MulDiv(nNumber,local_10,0x400);
    if (param_2 != (int *)0x0) {
      *param_2 = nNumber;
    }
  }
  return;
}


