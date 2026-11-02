/* Module: vegas30.exe
   Function: FUN_005fb550
   Address: 005fb550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_005fb550(undefined4 param_1,undefined4 param_2,undefined4 param_3,ulong param_4,int param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int unaff_EDI;
  int iStack0000002c;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = param_4;
  iVar1 = DAT_00649420;
  iStack0000002c = DAT_00649420;
  Transport_SetRate(1.0,0);
  iVar4 = param_5;
  if ((param_5 < 1) && (param_5 < 0)) {
    param_4 = 0xffffffff;
    iVar4 = 0xfffffff;
  }
  Transport_SetLength(CONCAT44(iVar4,param_4));
  _DAT_0064b15c = DAT_0065e528;
  Mixer_SetContext(&DAT_0064b15c);
  param_4 = 0x10000000;
  if (iVar1 != 0) {
    param_4 = 0xb0000000;
  }
  _DAT_0065e540 = uVar3;
  _DAT_0065e544 = param_5;
  _DAT_0065e538 = param_2;
  _DAT_0065e53c = param_3;
  _DAT_0065e548 = param_10;
  FUN_00429130(param_10,param_2,param_3,param_6,param_7,param_8,param_9);
  lVar2 = Transport_StartRec(param_4,CONCAT44(0xffffffff,param_3),CONCAT44(param_6,0xffffffff),
                             CONCAT44(param_8,param_7),CONCAT44(param_10,param_9),iStack0000002c,
                             unaff_EDI);
  if (lVar2 < 0) {
    uVar5 = 0;
    uVar3 = _SfGetString_8(DAT_00647204,0x55fe);
    _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0xc,lVar2,uVar3,uVar5);
  }
  return lVar2;
}


