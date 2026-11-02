/* Module: vegas30.exe
   Function: FUN_005fc170
   Address: 005fc170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005fc170(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  GetCurrentThreadId();
  if (*param_1 == 0) {
    return -0x7ffb1fff;
  }
  iVar2 = 0;
  if (((*param_4 & 0x10000000) != 0) && ((*param_4 & 0x800000) == 0)) {
    iVar2 = FUN_0058c5f0(*param_1,param_1[4],param_1[5],param_1[6],param_1[7],param_1[8]);
    if (iVar2 < 0) {
      uVar5 = 0;
      uVar1 = _SfGetString_8(DAT_00647204,0x55fc);
      _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0xc,iVar2,uVar1,uVar5);
      return iVar2;
    }
    iVar3 = param_1[6];
    iVar4 = param_1[7];
    if ((iVar4 < 1) && (iVar4 < 0)) {
      iVar4 = 0xfffffff;
      iVar3 = -1;
    }
    Transport_SetLength(CONCAT44(iVar4,iVar3));
  }
  DAT_0064767c = DAT_0064767c | 4;
  return iVar2;
}


