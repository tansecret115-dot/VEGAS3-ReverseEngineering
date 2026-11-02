/* Module: vegas30.exe
   Function: FUN_004292f0
   Address: 004292f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004292f0(void)

{
  int iVar1;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_0064762c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_0064762c + 0x80);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_005fc2b0();
    if (iVar1 == 0) {
      iVar1 = Transport_IsAnyPlaying();
      if (((iVar1 == 0) && (DAT_0064acc4 != 0)) && (DAT_0064aa40 != 0)) {
        local_8 = 0;
        local_4 = 0;
        local_10 = 0;
        local_c = 0;
        FUN_004a45b0(DAT_00647630,&local_8,&local_10);
        if ((-1 < local_c) && ((0 < local_c || (local_10 != 0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}


