/* Module: rmbe3260.dll
   Function: FUN_660523e0
   Address: 660523e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_660523e0(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  LPCSTR local_20 [3];
  DWORD local_14 [4];
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    iVar1 = FUN_6605bfa0(param_1 + 1,&DAT_6606f2c4);
    if (iVar1 != -1) {
      FUN_6605bf20(param_1 + 1,local_20,iVar1 + 2);
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[3] = 0;
      local_14[2] = 0;
      BVar2 = GetDiskFreeSpaceA(local_20[0],local_14,local_14 + 1,local_14 + 3,local_14 + 2);
      if ((BVar2 != 0) && (local_14[3] != 0)) {
        FUN_6605b770((int *)local_20);
        return 1;
      }
      FUN_6605b770((int *)local_20);
    }
  }
  return 0;
}


