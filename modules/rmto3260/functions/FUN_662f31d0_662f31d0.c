/* Module: rmto3260.dll
   Function: FUN_662f31d0
   Address: 662f31d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662f31d0(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  LPCSTR local_20 [3];
  DWORD local_14 [4];
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    iVar1 = FUN_662ef820(param_1 + 1,&DAT_6630b520);
    if (iVar1 != -1) {
      FUN_662ef7a0(param_1 + 1,local_20,iVar1 + 2);
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[3] = 0;
      local_14[2] = 0;
      BVar2 = GetDiskFreeSpaceA(local_20[0],local_14,local_14 + 1,local_14 + 3,local_14 + 2);
      if ((BVar2 != 0) && (local_14[3] != 0)) {
        FUN_662ef0f0((int *)local_20);
        return 1;
      }
      FUN_662ef0f0((int *)local_20);
    }
  }
  return 0;
}


