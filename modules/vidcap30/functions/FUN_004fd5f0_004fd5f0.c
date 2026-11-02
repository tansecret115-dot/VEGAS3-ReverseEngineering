/* Module: vidcap30.exe
   Function: FUN_004fd5f0
   Address: 004fd5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fd5f0(int param_1,undefined4 param_2,HWND param_3,LONG param_4,LONG param_5)

{
  uint uVar1;
  uint uVar2;
  SHORT SVar3;
  LRESULT LVar4;
  HCURSOR hCursor;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  tagPOINT local_30;
  int local_24;
  int local_20 [8];
  
  local_30.x = param_4;
  local_30.y = param_5;
  ScreenToClient(param_3,&local_30);
  SendMessageA(param_3,0x1111,0,(LPARAM)&local_30);
  LVar4 = SendMessageA(param_3,0x110a,8,0);
  uVar1 = *(uint *)(param_1 + 0x4a4);
  SVar3 = GetKeyState(0x10);
  *(uint *)(param_1 + 0x4a4) = (uint)(SVar3 < 0) << 6 | *(uint *)(param_1 + 0x4a4) & 0xffffffbf;
  SVar3 = GetKeyState(0x11);
  uVar2 = *(uint *)(param_1 + 0x4a4);
  uVar5 = (uint)(SVar3 < 0) << 7;
  *(undefined4 *)(param_1 + 0x4b4) = 0xfffffffe;
  *(uint *)(param_1 + 0x4a4) = uVar5 | uVar2 & 0xfffffb7f;
  if ((LVar4 == local_24) && (uVar1 == (uVar5 | uVar2 & 0xffffff7f))) {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00498870(param_1,param_4,param_5);
    }
    if (local_24 == 0) {
      iVar6 = (-(uint)((*(uint *)(param_1 + 0x4a4) & 4) != 0) & 0xffff8088) + 0x7f88;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x4a0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00498850(param_1);
    }
    if (LVar4 != 0) {
      SendMessageA(param_3,0x110b,8,0);
      *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffff7;
    }
    if (local_24 == 0) {
      uVar8 = 0;
    }
    else {
      piVar7 = local_20;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      local_20[3] = FUN_004f79a0(param_3,local_24,local_20 + 2);
      uVar8 = *(undefined4 *)(*(int *)(local_20[2] + 8) + local_20[3] * 4);
      SendMessageA(param_3,0x110b,8,local_24);
      *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) | 8;
    }
    FUN_004fd460(param_1,uVar8);
    uVar1 = *(uint *)(param_1 + 0x4a4);
    if ((uVar1 & 0x100) == 0) {
      iVar6 = (-(uint)((uVar1 & 4) != 0) & 0xffff8088) + 0x7f88;
    }
    else {
      iVar6 = ((uVar1 & 4) != 0) + 0xf;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00498820(param_1,param_4,param_5);
    }
  }
  if (iVar6 != *(int *)(param_1 + 0x4a0)) {
    *(int *)(param_1 + 0x4a0) = iVar6;
    hCursor = (HCURSOR)_SfGetUICursor_4(iVar6);
    SetCursor(hCursor);
  }
  return;
}


