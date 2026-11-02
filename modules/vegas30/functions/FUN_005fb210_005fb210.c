/* Module: vegas30.exe
   Function: FUN_005fb210
   Address: 005fb210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_005fb210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11,undefined4 param_12)

{
  int iVar1;
  long lVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  
  iVar1 = Transport_IsRecording();
  if (iVar1 != 0) {
    return 0x4e001;
  }
  if (DAT_0065e550 != 0) {
    return 1;
  }
  DAT_00646e50 = param_6;
  DAT_00646e54 = param_7;
  DAT_00646e58 = param_8;
  DAT_00646e5c = param_9;
  DAT_00646e60 = param_10;
  DAT_00646e68 = param_11;
  _DAT_00646e3c = param_1;
  DAT_00646e40 = param_2;
  DAT_00646e44 = param_3;
  DAT_00646e48 = param_4;
  DAT_00646e4c = param_5;
  DAT_00646e6c = param_12;
  DAT_0065e528 = param_1;
  _DAT_0065e52c = DAT_00647630;
  Transport_SetClientContext(FUN_005fbce0,0x65e528);
  _DAT_0064b15c = DAT_0065e528;
  Mixer_SetContext(&DAT_0064b15c);
  Transport_SetRate((double)CONCAT44(param_12,param_11),0);
  Transport_SetLength(CONCAT44(param_5,param_4));
  FUN_00429130(param_10,param_2,param_3,param_6,param_7,param_8,param_9);
  lVar2 = Transport_Start(0xa0000000,CONCAT44(param_4,param_3),CONCAT44(param_6,param_5),
                          CONCAT44(param_8,param_7),CONCAT44(param_10,param_9),param_11,
                          (double)CONCAT44(unaff_EBP,unaff_EDI));
  if (lVar2 != 0) {
    FUN_00401f40();
    _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0xb,lVar2,0,0);
    FUN_00589e30();
    return lVar2;
  }
  FUN_00428c90(0,0,0);
  return 0;
}


