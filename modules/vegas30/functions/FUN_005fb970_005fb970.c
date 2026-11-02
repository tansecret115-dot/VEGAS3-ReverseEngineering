/* Module: vegas30.exe
   Function: FUN_005fb970
   Address: 005fb970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fb970(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  __int64 _Var4;
  undefined8 uVar5;
  
  if (((param_1 & 0x10000000) == 0) || (bVar1 = true, (param_1 & 0x800000) != 0)) {
    bVar1 = false;
  }
  uVar3 = param_1 >> 0xf & 1;
  iVar2 = Transport_IsPlaying();
  if (iVar2 == 0) {
    _Var4 = Transport_GetPosEx(0);
    FUN_005fba80(&DAT_0065e528,_Var4,param_1 & 0xcf7fffff,param_2);
    if (param_2 < 0) {
      if (*(int *)(DAT_0065a068 + 0x748) == 0) {
        uVar5 = CONCAT44(param_2,0xb);
      }
      else {
        uVar5 = 0x8004e0090000000c;
      }
      _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,uVar5,0,0);
    }
    DAT_0064767c = DAT_0064767c | 4;
  }
  if ((DAT_0065e528 != 0) && (bVar1)) {
    FUN_0058c8e0(DAT_0065e528,1,uVar3,0xffffffff,0xffffffff);
  }
  FUN_00589e30();
  if ((param_1 >> 0x1c & 1) != 0) {
    FUN_005fb6a0(0xffffffff);
  }
  if (param_2 != 0x4e00d) {
    if (uVar3 != 0) {
      Transport_ResumeListenForSync();
    }
    DAT_0065e550 = 0;
    return;
  }
  FUN_005fb140(1);
  FUN_00405540(0x6e10);
  DAT_0065e550 = 0;
  return;
}


