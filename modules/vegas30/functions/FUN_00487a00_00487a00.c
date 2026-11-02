/* Module: vegas30.exe
   Function: FUN_00487a00
   Address: 00487a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00487a00(undefined4 param_1)

{
  int iVar1;
  undefined1 local_ca8 [4];
  undefined4 local_ca4 [66];
  uchar local_b9c [268];
  uchar local_a90 [280];
  undefined4 local_978;
  undefined4 local_974;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  uint local_40;
  int local_3c;
  int local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  FUN_0042cfe0(local_ca8);
  local_4c = 3;
  FUN_0043fc90(local_ca4);
  iVar1 = FUN_0042a4c0(param_1,local_ca8);
  if (iVar1 == 0) {
    if (local_30 == 0) {
      iVar1 = FUN_0042d240(param_1,local_60,local_a90);
      FUN_004e7610();
      if (-1 < iVar1) {
        iVar1 = FUN_004e7770();
        if (iVar1 == 0) {
          local_30 = 1;
          _mbscpy(local_b9c,local_a90);
          DAT_0064a514 = local_978;
          DAT_0064a56c = local_974;
        }
      }
    }
    if (local_4c == 3) {
      iVar1 = FUN_0043fe70(param_1,local_ca4[0],0,local_40 + local_18,
                           local_3c + local_14 + (uint)CARRY4(local_40,local_18));
      if (-1 < iVar1) {
        iVar1 = FUN_00487140(param_1,local_ca4[0],local_60,local_b9c,local_58,local_54,local_24,
                             &DAT_0064aa70,local_20,(local_10 != 0) + '\x01',local_8,local_28);
        if ((-1 < iVar1) && (local_c != 0)) {
          FUN_00487140(param_1,local_ca4[0],local_60,local_b9c,local_58,local_54,local_24,
                       &DAT_0064aa70,local_20,1,local_8,local_28);
        }
      }
    }
  }
  FUN_0043fd20(local_ca4[0]);
  return 0;
}


