/* Module: vegas30.exe
   Function: FUN_005fc420
   Address: 005fc420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005fc420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (DAT_00646e38 != 0) {
    DAT_00646e38 = DAT_00646e38 + -1;
    if (param_1 == 0) {
      if (DAT_00646e38 == 0) {
        if (((byte)DAT_00646ea0 & 0x20) == 0) {
          Mixer_SetContext(&DAT_0064b15c);
          if (((byte)DAT_00646ea0 & 0xc) != 0) {
            uVar2 = FUN_005fb6a0(0xffffffff);
          }
          if ((((byte)DAT_00646ea0 & 1) != 0) && (((byte)DAT_00646ea0 & 4) == 0)) {
            uVar2 = FUN_005fb210(DAT_0065e528,DAT_00646e40,DAT_00646e44,DAT_00646e48,DAT_00646e4c,
                                 DAT_00646e50,DAT_00646e54,DAT_00646e58,DAT_00646e5c,DAT_00646e60,
                                 DAT_00646e68,DAT_00646e6c);
          }
          if (((byte)DAT_00646ea0 & 2) != 0) {
            uVar2 = FUN_005fcfc0(PTR_DAT_00646e70,DAT_00646e78,DAT_00646e80,DAT_00646e84,
                                 DAT_00646e88,DAT_00646e8c,DAT_00646e90,DAT_00646e98,DAT_00646e9c,
                                 DAT_00646e74);
          }
          if ((((byte)DAT_00646ea0 & 0x10) != 0) && (((byte)DAT_00646ea0 & 1) == 0)) {
            FUN_005fc6f0();
            return uVar2;
          }
        }
        else {
          Mixer_SetContext(&DAT_0064b15c);
          if (((byte)DAT_00646ea0 & 0xc) != 0) {
            uVar2 = FUN_005fb6a0(0xffffffff);
          }
          if (((byte)DAT_00646ea0 & 0x10) != 0) {
            iVar1 = FUN_005fc660(1,0);
            if (iVar1 == 0) {
              FUN_005fc6f0();
            }
            uVar2 = 0;
          }
        }
      }
    }
    else if ((DAT_00646e38 == 0) && (((byte)DAT_00646ea0 & 0xc) != 0)) {
      FUN_004c8110(DAT_00647630);
      return 1;
    }
  }
  return uVar2;
}


