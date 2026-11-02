/* Module: mpgaout.dll
   Function: mpegOutAudioInit
   Address: 10001330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegOutAudioInit(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x1330  4  mpegOutAudioInit */
  DAT_1001f000 = 0;
  FUN_1000b08c((undefined4 *)param_1[0x11380],param_2);
  iVar1 = FUN_10002168(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_10003088((int)param_1,1);
    uVar2 = 2;
  }
  return uVar2;
}


