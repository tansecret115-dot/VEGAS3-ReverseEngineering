/* Module: aviplug.dll
   Function: FUN_5f942f90
   Address: 5f942f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f942f90(uchar *param_1,LPDWORD param_2)

{
  BOOL BVar1;
  DWORD local_110;
  DWORD local_10c;
  DWORD local_108;
  uchar local_104 [260];
  
  FUN_5f98d0f0(param_1,local_104,0x104);
  BVar1 = GetDiskFreeSpaceA((LPCSTR)local_104,&local_10c,param_2,&local_110,&local_108);
  if (BVar1 == 0) {
    *param_2 = 0x800;
    return 1;
  }
  return 0;
}


