/* Module: vegas30.exe
   Function: FUN_004a75c0
   Address: 004a75c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a75c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  tagPOINT local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [40];
  
  iVar2 = param_2;
  piVar7 = param_1;
  iVar1 = param_1[0x2f2];
  if (param_2 != 0) {
    local_40.x = param_1[0x2a];
    local_40.y = param_1[0x2b];
    ClientToScreen((HWND)param_1[1],&local_40);
    local_34 = local_40.y;
    local_2c = local_40.y;
    local_38 = local_40.x;
    local_30 = local_40.x;
    iVar3 = _SfList_CreateExZ_32(&param_1,4,0x10,0x10,4,0,0,0);
    if (iVar3 < 0) {
      _SfErrorHandler_MsgBox_24(0,0x30,0,iVar3,0,0);
      return;
    }
    param_2 = FUN_005c6950(iVar2);
    param_2 = param_2 + 1;
    _SfList_InsertList_16(param_1,0xffffffff,&param_2,1);
    _SfLoadString_16(DAT_00647204,0x5001,local_28,0x28);
    iVar3 = piVar7[1];
    piVar7 = &local_38;
    puVar5 = &LAB_004a7710;
    piVar6 = param_1;
    uVar4 = _SfGetString_8(DAT_00647204,0x5002);
    iVar3 = FUN_00506e60(iVar2,0x31,local_28,uVar4,puVar5,piVar6,iVar3,piVar7);
    if ((iVar3 != 0) && (0 < *param_1)) {
      FUN_004e9f70(iVar1,0x2f,0);
      FUN_004ea750(iVar1,iVar2,2,0);
      if (*(int *)param_1[2] == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)param_1[2] + -1;
      }
      FUN_005c86c0(iVar1,iVar2,iVar3);
      FUN_004eb2b0(iVar1);
      FUN_004ea040(iVar1,0);
    }
    _SfList_Destroy_4(param_1);
  }
  return;
}


