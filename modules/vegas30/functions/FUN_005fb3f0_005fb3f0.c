/* Module: vegas30.exe
   Function: FUN_005fb3f0
   Address: 005fb3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_005fb3f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9,undefined4 param_10)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  _tag_looppoint *unaff_EDI;
  longlong lVar4;
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = Transport_IsRecording();
  if (iVar1 != 0) {
    return 1;
  }
  local_c = DAT_00647794;
  _DAT_00646e3c = param_1;
  local_38 = param_6;
  local_34 = param_7;
  local_28 = param_8;
  local_24 = param_9;
  local_18 = 0xffffffff;
  local_14 = param_10;
  local_10 = param_10;
  local_8 = 0;
  if ((param_4 != -1) || (param_5 != -1)) {
    DAT_00646e48 = param_4;
    DAT_00646e4c = param_5;
  }
  if ((param_6 != -1) || (param_7 != -1)) {
    DAT_00646e50 = param_6;
    DAT_00646e54 = param_7;
  }
  if ((param_8 != -1) || (param_9 != -1)) {
    DAT_00646e58 = param_8;
    DAT_00646e5c = param_9;
  }
  DAT_00646e60 = param_10;
  uVar3 = 0xb0000000;
  lVar4 = FUN_004581e0(DAT_00647630);
  if ((-1 < param_3) && (lVar4 != CONCAT44(param_3,param_2))) {
    uVar3 = 0x30000000;
  }
  FUN_00429130(param_10,param_2,param_3,param_6,param_7,param_8,param_9);
  lVar2 = Transport_Seek(uVar3,CONCAT44(param_4,param_3),CONCAT44(&local_38,param_5),unaff_EDI);
  return lVar2;
}


