/* Module: rmto3260.dll
   Function: FUN_662cf220
   Address: 662cf220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662cf220(void *this,byte *param_1,uint param_2)

{
  undefined4 uVar1;
  short local_8;
  
  if (param_2 != 0) {
    local_8 = CONCAT11(param_1[4],param_1[5]);
  }
  FUN_662f0810(*(int **)((int)this + 0x28),s_RealAudio_header_version___hu_6630a9d8);
  if (local_8 == 3) {
    uVar1 = FUN_662f09b0();
    return uVar1;
  }
  if (local_8 == 4) {
    uVar1 = FUN_662cf2e0(this,param_1,param_2);
    return uVar1;
  }
  if (local_8 != 5) {
    FUN_662f0810(*(int **)((int)this + 0x28),s_Version__hu_realaudio_headers_ar_6630a9a4);
    return 0;
  }
  uVar1 = FUN_662cf430(this,(int)param_1,param_2);
  return uVar1;
}


