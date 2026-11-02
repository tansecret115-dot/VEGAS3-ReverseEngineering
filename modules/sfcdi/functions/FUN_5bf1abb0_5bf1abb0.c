/* Module: sfcdi.dll
   Function: FUN_5bf1abb0
   Address: 5bf1abb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf1abb0(int param_1,tPARAMETERS_DEVDES *param_2,uchar *param_3)

{
  int iVar1;
  uint local_a18;
  uchar local_a14 [532];
  uchar local_800 [1024];
  undefined4 local_400 [256];
  
  iVar1 = FUN_5bf310d0(local_a14);
  if (-1 < iVar1) {
    FUN_5bf1a8d0(local_800,param_1,param_2,param_3);
    local_a18 = 0x400;
    iVar1 = FUN_5bf1ab30((uint)local_a14,local_800,local_400,&local_a18);
    FUN_5bf31130((int)local_a14);
  }
  return iVar1;
}


