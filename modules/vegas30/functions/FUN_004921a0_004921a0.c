/* Module: vegas30.exe
   Function: FUN_004921a0
   Address: 004921a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004921a0(uint param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  tagPOINT local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x130);
  if (param_1 < 0xa79c) {
    if (0xa797 < param_1) {
      switch(param_1) {
      case 0xa798:
        SendMessageA(*(HWND *)(param_2 + 0xdc),0x300,0,0);
        return 1;
      case 0xa799:
        SendMessageA(*(HWND *)(param_2 + 0xdc),0x301,0,0);
        return 1;
      case 0xa79a:
        SendMessageA(*(HWND *)(param_2 + 0xdc),0x302,0,0);
        return 1;
      case 0xa79b:
        SendMessageA(*(HWND *)(param_2 + 0xdc),0x303,0,0);
        return 1;
      default:
        SendMessageA(*(HWND *)(param_2 + 0xdc),(UINT)param_3,0,0);
        return 1;
      }
    }
    if (param_1 == 0xa0a2) {
      piVar2 = *(int **)(param_2 + 0x134);
      iVar6 = param_3[3];
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
      if ((iVar6 < 0) || (iVar5 + -1 < iVar6)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar2[2] + iVar6 * 4);
      }
      if (iVar6 != 0) {
        local_18.x = param_3[5];
        local_18.y = param_3[6];
        ClientToScreen(*(HWND *)(param_2 + 0xdc),&local_18);
        local_10 = local_18.x;
        local_8 = local_18.x;
        local_c = local_18.y;
        local_4 = local_18.y;
        _SfList_CreateExZ_32(&param_3,4,0x10,0x10,4,0,0,0);
        param_2 = FUN_005c6950(iVar6);
        param_2 = param_2 + 1;
        _SfList_InsertList_16(param_3,0xffffffff,&param_2,1);
        uVar3 = _SfGetString_8(DAT_00647204,0x528e);
        iVar4 = FUN_00506e60(iVar6,0x31,uVar3,uVar3,&LAB_00492410,param_3,
                             *(undefined4 *)(iVar4 + 0xdc),&local_10);
        if ((iVar4 != 0) && (0 < *param_3)) {
          FUN_004e9f70(uVar1,0x2f,0);
          FUN_004ea750(uVar1,iVar6,2,0);
          if (*(int *)param_3[2] == 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = *(int *)param_3[2] + -1;
          }
          FUN_005c86c0(uVar1,iVar6,iVar4);
          FUN_004eb2b0(uVar1);
          FUN_004ea040(uVar1,0);
        }
        _SfList_Destroy_4(param_3);
        return 1;
      }
    }
  }
  else if (param_1 == 0xa7a3) {
    SendMessageA((HWND)*param_3,0x42f,0,0);
  }
  return 1;
}


