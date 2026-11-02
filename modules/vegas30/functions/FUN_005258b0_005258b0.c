/* Module: vegas30.exe
   Function: FUN_005258b0
   Address: 005258b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005258b0(int param_1,int param_2,int param_3,LPCSTR param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  byte local_124;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  CHAR local_10c [259];
  undefined1 local_9;
  
  iVar5 = 0;
  FUN_00508ba0(param_2,&local_238);
  iVar2 = lstrlenA(param_4);
  cVar1 = *(char *)(iVar2 + -1 + param_3);
  for (; (cVar1 != '\\' && (0 < iVar2)); iVar2 = iVar2 + -1) {
    cVar1 = *(char *)(iVar2 + -2 + param_3);
  }
  iVar3 = FUN_0050a790(*(undefined4 *)(param_1 + 0xfc),param_2);
  if (iVar3 == 0) {
    return 0;
  }
  param_4 = param_4 + iVar2;
  iVar2 = FUN_00525570(param_1,iVar3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((local_124 & 1) != 0) {
    if ((local_124 & 0x80) == 0) {
      if ((local_124 & 2) == 0) {
        uVar4 = FUN_0050a170(*(undefined4 *)(param_1 + 0xfc));
        iVar2 = FUN_00509fd0(uVar4,&local_238);
        if (iVar2 == 0) {
          return 0;
        }
        iVar5 = FUN_0050a8f0(iVar2,param_4);
      }
      else {
        iVar5 = FUN_0050a8f0(param_2,param_4);
      }
    }
    else {
      local_118 = local_234;
      local_11c = local_238;
      local_114 = local_230;
      local_110 = local_22c;
      lstrcpynA(local_10c,param_4,0x104);
      local_9 = 0;
      iVar2 = _FXPackage_RenamePackage_4(&local_11c);
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar4 = FUN_0050a170(*(undefined4 *)(param_1 + 0xfc));
      iVar5 = FUN_00509fd0(uVar4,&local_238);
      if (iVar5 == 0) {
        return iVar2;
      }
      iVar5 = FUN_0050a8f0(iVar5,param_4);
    }
    if (iVar5 < 0) {
      return iVar5;
    }
    goto LAB_00525b69;
  }
  if ((local_124 & 0x80) == 0) {
    bVar6 = false;
    if ((local_124 & 2) == 0) {
      uVar4 = FUN_0050a0f0(*(undefined4 *)(param_1 + 0xfc));
      iVar2 = FUN_00509fd0(uVar4,&local_238);
      if ((iVar2 != 0) && (iVar5 = FUN_0050a8f0(iVar2,param_4), -1 < iVar5)) {
        bVar6 = true;
      }
      uVar4 = FUN_0050a130(*(undefined4 *)(param_1 + 0xfc));
      param_2 = FUN_00509fd0(uVar4,&local_238);
      if ((param_2 == 0) || (iVar5 < 0)) goto joined_r0x00525b67;
    }
    iVar5 = FUN_0050a8f0(param_2,param_4);
    bVar6 = -1 < iVar5;
  }
  else {
    local_118 = local_234;
    local_11c = local_238;
    local_114 = local_230;
    local_110 = local_22c;
    lstrcpynA(local_10c,param_4,0x104);
    local_9 = 0;
    bVar6 = false;
    iVar5 = _FXPackage_RenamePackage_4(&local_11c);
    if (iVar5 < 0) {
      return iVar5;
    }
    uVar4 = FUN_0050a110(*(undefined4 *)(param_1 + 0xfc));
    iVar2 = FUN_00509fd0(uVar4,&local_238);
    if ((iVar2 != 0) && (iVar5 = FUN_0050a8f0(iVar2,param_4), -1 < iVar5)) {
      bVar6 = true;
    }
    uVar4 = FUN_0050a150(*(undefined4 *)(param_1 + 0xfc));
    iVar2 = FUN_00509fd0(uVar4,&local_238);
    if ((iVar2 != 0) && (iVar5 = FUN_0050a8f0(iVar2,param_4), -1 < iVar5)) goto LAB_00525b69;
  }
joined_r0x00525b67:
  if (!bVar6) {
    return iVar5;
  }
LAB_00525b69:
  *(undefined4 *)(param_1 + 0x100) = 1;
  PostMessageA(*(HWND *)(param_1 + 8),0x111,600,(LPARAM)*(HWND *)(param_1 + 8));
  return iVar5;
}


