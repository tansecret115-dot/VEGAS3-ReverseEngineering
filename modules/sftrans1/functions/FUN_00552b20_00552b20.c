/* Module: sftrans1.dll
   Function: FUN_00552b20
   Address: 00552b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00552b20(int *param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  POINT pt;
  SHORT SVar2;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 auStack_20 [2];
  tagRECT local_18;
  
  GetClientRect(param_2,&local_18);
  uVar1 = param_1[10];
  param_1[0x24] = param_4;
  param_1[0x25] = param_5;
  if (((uVar1 & 1) == 0) || ((uVar1 & 2) == 0)) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        local_18.right = local_18.right + param_1[0xf];
        local_18.left = param_1[0xd] - local_18.left;
      }
    }
    else {
      local_18.bottom = local_18.bottom + param_1[0x10];
      local_18.top = param_1[0xe] - local_18.top;
    }
  }
  pt.y = param_5;
  pt.x = param_4;
  BVar3 = PtInRect(&local_18,pt);
  if (BVar3 == 0) {
    SVar2 = GetKeyState(0x11);
    if ((SVar2 < 0) && ((*(byte *)(param_1 + 10) & 8) == 0)) goto LAB_00552d6a;
    if ((((param_1[0xf] + local_18.right < param_4) || (param_4 < param_1[0xd] + local_18.left)) ||
        (param_1[0x10] + local_18.bottom < param_5)) || (param_5 < param_1[0xe] + local_18.top)) {
      iVar4 = (**(code **)(*DAT_00622478 + 8))();
      if (iVar4 != 0) {
        (**(code **)(*DAT_00622478 + 0x10))();
        (**(code **)(*param_1 + 0x54))(param_2,param_4,param_5,param_6);
      }
      goto LAB_00552dfb;
    }
    iVar4 = (**(code **)(*DAT_00622478 + 8))();
    if (iVar4 != 0) {
      if (param_3 != 0) {
        (**(code **)(*param_1 + 0x40))();
        param_1[0x12] = param_4;
        param_1[0x13] = param_5;
        return;
      }
      (**(code **)(*param_1 + 0x14))(param_2,param_4,param_5,param_6,param_1[2]);
      param_1[0x12] = param_4;
      param_1[0x13] = param_5;
      return;
    }
    if ((*(byte *)(param_1 + 3) & 3) != 0) {
      param_1[0x14] = param_4;
      param_1[0x12] = param_4;
      param_1[0x15] = param_5;
      param_1[0x13] = param_5;
      if ((*(byte *)(param_1 + 10) & 4) == 0) {
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        param_1[0x16] = 0;
        param_1[0x18] = 0;
        param_1[0x20] = 0;
        param_1[0x17] = 0;
        param_1[0x19] = 0;
        param_1[0x21] = 0;
        FUN_00552530(param_2,param_1 + 0x1e,param_1 + 0x16,0);
        param_1[0x1a] = param_1[0x16];
        param_1[0x1b] = param_1[0x17];
        param_1[0x1c] = param_1[0x18];
        param_1[0x1d] = param_1[0x19];
      }
      param_1[0x26] = param_6;
      DVar5 = timeGetTime();
      param_1[0x27] = DVar5 - param_1[0xb];
      iVar4 = (**(code **)(*param_1 + 0x50))(param_2,param_4,param_5,param_6);
      if (iVar4 != 0) {
        (**(code **)(*DAT_00622478 + 0xc))(param_1,param_2);
        return;
      }
    }
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x40))(param_2,param_4,param_5,param_6,param_1[2]);
      return;
    }
  }
  else {
LAB_00552d6a:
    (**(code **)(*DAT_00622478 + 0x10))();
    *(double *)(param_1 + 0x16) = (double)(param_4 - param_1[5]) + *(double *)(param_1 + 0x1e);
    *(double *)(param_1 + 0x18) = (double)(param_5 - param_1[6]) + *(double *)(param_1 + 0x20);
    param_1[0x1a] = param_1[0x16];
    param_1[0x1b] = param_1[0x17];
    param_1[0x1c] = param_1[0x18];
    param_1[0x1d] = param_1[0x19];
    if ((*(byte *)(param_1 + 10) & 4) != 0) {
      auStack_20[0] = ftol();
      uVar6 = ftol();
      (**(code **)(*param_1 + 0x4c))
                (auStack_20,param_2,auStack_20[0],uVar6,param_6,param_1[5],param_1[6]);
LAB_00552dfb:
      iVar7 = *param_1;
      iVar4 = param_1[2];
      if (param_3 != 0) {
        (**(code **)(iVar7 + 0x40))(param_2,param_4,param_5,param_6,iVar4);
        return;
      }
      goto LAB_00552e59;
    }
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x40))(param_2,param_4,param_5,param_6,param_1[2]);
      return;
    }
  }
  iVar4 = param_1[2];
  iVar7 = *param_1;
LAB_00552e59:
  (**(code **)(iVar7 + 0x14))(param_2,param_4,param_5,param_6,iVar4);
  return;
}


