/* Module: vidcap30.exe
   Function: FUN_00447b00
   Address: 00447b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00447b00(int param_1,int param_2,undefined4 *param_3)

{
  HWND hWnd;
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  int iVar4;
  undefined4 uVar5;
  int local_468;
  int local_464;
  undefined4 local_460;
  undefined4 local_45c;
  LONG local_458;
  LONG local_454;
  undefined4 local_450;
  undefined4 local_44c;
  tagPOINT local_448;
  undefined4 local_440;
  undefined4 local_43c;
  CHAR local_438 [1068];
  undefined4 local_c;
  uint local_4;
  
  hWnd = *(HWND *)(param_1 + 0x194);
  local_464 = 0;
  local_460 = 0;
  if (param_2 != 0x1fd) {
    if (param_2 != 0x1fe) goto LAB_00447f4e;
    goto switchD_00447b59_caseD_10;
  }
  switch(param_3[2]) {
  case 0xc:
    local_464 = _SfList_CreateExZ_32(&local_468,4,0x40,0x10,0x40000002,0,0,0);
    if (-1 < local_464) {
      SendMessageA(*(HWND *)(param_1 + 0x88),0x605,1,local_468);
      local_464 = FUN_0044ac40(param_1,local_468,param_3[3],param_3[4]);
      FUN_00417990(local_468);
    }
    break;
  case 0xd:
    FUN_00431e30(param_3[5],param_3[1]);
    break;
  case 0xe:
    local_464 = FUN_0044baa0(param_1,param_3[3],param_3[4],param_3[5]);
    break;
  case 0xf:
    local_464 = _SfList_CreateExZ_32(&local_468,4,0x40,0x10,0x40000002,0,0,0);
    if (-1 < local_464) {
      SendMessageA(*(HWND *)(param_1 + 0x88),0x60e,0,local_468);
      local_464 = FUN_0044b510(param_1,local_468,param_3[3],param_3[4]);
      FUN_00417990(local_468);
    }
    break;
  case 0x11:
    uVar5 = param_3[5];
    uVar2 = 0;
    goto LAB_00447ec4;
  case 0x12:
    uVar5 = param_3[5];
    uVar2 = 1;
LAB_00447ec4:
    local_464 = FUN_00448260(param_1,uVar5,uVar2);
    local_460 = 0;
    break;
  case 0x1e:
    iVar4 = FUN_0044c6e0(*(undefined4 *)(**(int **)(param_3[5] + 8) + 0x20c));
    if (iVar4 != 0) {
      if ((*(byte *)(iVar4 + 0x38) & 2) == 0) {
        SendMessageA(*(HWND *)(param_1 + 8),0x111,0x9d91,0);
      }
      else {
        SendMessageA(*(HWND *)(param_1 + 8),0x111,0x9d42,0);
      }
    }
    break;
  case 0x1f:
    SendMessageA(hWnd,0x401,0x9c62,(uint)(param_3[7] + param_3[5] != 0));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    break;
  case 0x20:
    param_3[10] = DAT_005bb9a4;
    param_3[0xb] = DAT_005bb9a8;
    param_3[0xc] = DAT_005bb9ac;
    param_3[8] = &DAT_005b5d90;
    param_3[9] = 8;
    break;
  case 0x21:
    FUN_00447580(param_1,param_3[7],param_3[1],*param_3);
    break;
  case 0x28:
    uVar5 = param_3[5];
    uVar2 = uVar5;
    uVar1 = FUN_0044c610(*(undefined4 *)(param_1 + 0x80));
    uVar2 = FUN_0044c4e0(uVar1,uVar2);
    FUN_00448840(uVar5,uVar2);
    break;
  case 0x29:
    FUN_00448970(param_3[5]);
    break;
  case 0x33:
    FUN_004041c0(*param_3);
    FUN_004041e0(0);
    break;
  case 0x34:
    FUN_004041c0(0);
    FUN_004041e0(0);
    break;
  case 0x3c:
    uVar5 = param_3[5];
    if (*(int *)(param_1 + 0x300) != 0) {
      pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x88),4);
      FUN_00420150(pHVar3);
    }
    FUN_0044cb00(uVar5,local_438);
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x1b8),0);
    lstrcpynA((LPSTR)(param_1 + 0x1dc),local_438,0x104);
    *(undefined1 *)(param_1 + 0x2df) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = local_c;
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x401,0x9c62,~local_4 >> 1 & 1);
      SendMessageA(hWnd,0x401,0x9c61,local_4 >> 2 & 1);
      PostMessageA(*(HWND *)(param_1 + 8),0x414,0,0);
    }
    iVar4 = FUN_004487f0(*(undefined4 *)(param_1 + 0x88),&local_468);
    if (iVar4 != 0) {
      lstrcpynA((LPSTR)(param_1 + 0x90),(LPCSTR)**(undefined4 **)(local_468 + 8),0x104);
      *(undefined1 *)(param_1 + 0x193) = 0;
    }
    if (local_468 != 0) {
      FUN_00417990(local_468);
    }
    *(undefined4 *)(param_1 + 0x8c) = 1;
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x198),0);
    break;
  case 0x3d:
    if (*(int *)(param_1 + 0x2f8) == 0) {
      local_460 = FUN_0044bec0(param_1,param_3[5]);
    }
  }
switchD_00447b59_caseD_10:
  if (param_3[2] == -0x2c6) {
    SendMessageA(hWnd,0x433,param_3[3],(LPARAM)&local_448);
    MapWindowPoints(hWnd,(HWND)0x0,&local_448,2);
    local_45c = 0x14;
    local_458 = local_448.x;
    local_454 = local_448.y;
    local_450 = local_440;
    local_44c = local_43c;
    local_464 = FUN_0044baa0(param_1,local_448.x,local_43c,&local_45c);
  }
LAB_00447f4e:
  if (param_3[2] == -0x208) {
    FUN_00431e30(param_3,param_3[1]);
  }
  FUN_00404910(local_464,0);
  return local_460;
}


