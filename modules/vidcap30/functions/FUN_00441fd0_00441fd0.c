/* Module: vidcap30.exe
   Function: FUN_00441fd0
   Address: 00441fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00441fd0(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined8 uVar6;
  int local_33c;
  int local_338;
  undefined4 local_334;
  int local_330;
  undefined8 local_32c;
  undefined4 local_324;
  CHAR local_320 [20];
  CHAR local_30c [260];
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  uVar1 = DAT_005bb838;
  local_338 = 1;
  fVar5 = (float10)FUN_0042ed90(DAT_005bb838);
  local_32c = (double)fVar5;
  local_33c = 0;
  local_334 = 0;
  local_330 = 0;
  local_324 = 0;
  if (DAT_005bb7a8 != 0) {
    local_330 = FUN_00446520(*(undefined4 *)(DAT_005ba4c0 + 0x70));
  }
  iVar3 = GetWindowTextA(*(HWND *)(param_1 + 0x14dc),local_30c,0x104);
  if (iVar3 == 0) {
    SfMsgBox(*(undefined4 *)(param_1 + 8),0x30,"Please enter a clip name.");
  }
  else {
    iVar3 = GetWindowTextA(*(HWND *)(param_1 + 0x14e0),local_104,0x104);
    if (iVar3 == 0) {
      SfMsgBox(*(undefined4 *)(param_1 + 8),0x30,"Please enter a tape name.");
    }
    else {
      iVar3 = FUN_0044e530(uVar1,local_104,&local_334);
      local_338 = iVar3;
      if (-1 < iVar3) {
        local_33c = FUN_004444d0(uVar1,local_334,local_30c,0);
        if (local_33c == 0) {
          iVar3 = FUN_00443840(&local_33c,uVar1,local_334,0,0,local_30c,&DAT_00586c70,0);
          local_338 = iVar3;
        }
        else {
          iVar4 = SfMsgBox(*(undefined4 *)(param_1 + 8),0x34,
                           "The clip \'%s\' already exists on the tape \'%s\'.\n\nWould you like to update it with the current settings?"
                           ,local_30c,local_104);
          if (iVar4 == 7) {
            local_33c = 0;
            local_338 = 1;
            goto LAB_0044227a;
          }
        }
        if ((iVar3 == 0) && (local_33c != 0)) {
          GetWindowTextA(*(HWND *)(param_1 + 0x14ec),local_320,0x14);
          uVar2 = local_32c._4_4_;
          uVar6 = FUN_0045ae30(local_320,(undefined4)local_32c,local_32c._4_4_);
          FUN_00443d10(uVar1,local_33c,uVar6,0);
          GetWindowTextA(*(HWND *)(param_1 + 0x14f0),local_320,0x14);
          uVar6 = FUN_0045ae30(local_320,(undefined4)local_32c,uVar2);
          FUN_00443e30(uVar1,local_33c,uVar6);
          GetWindowTextA(*(HWND *)(param_1 + 0x14e8),local_208,0x104);
          FUN_00443f90(uVar1,local_33c,local_208);
          GetWindowTextA(*(HWND *)(param_1 + 0x14e4),local_208,0x104);
          FUN_00444070(uVar1,local_33c,local_208);
          FUN_00444150(uVar1,local_33c,(undefined4)local_32c,uVar2);
          FUN_00443b20(local_33c,8,8);
          FUN_00443b20(local_33c,0x20,0x20);
          FUN_00441da0(param_1);
          FUN_00441b30(param_1);
          FUN_00443b20(local_33c,0x40,0x40);
          FUN_00443b20(local_33c,-(DAT_005bb208 != 0) & 0x80,0x80);
          FUN_00443b20(local_33c,0x100,0x100);
          FUN_00443b20(local_33c,-(param_3 != 0) & 4,4);
          FUN_00443f60(uVar1,local_33c,0);
          if (local_330 != 0) {
            local_338 = FUN_0045f640(uVar1,&local_324,local_330,0xffffffff,local_33c);
          }
        }
      }
    }
  }
LAB_0044227a:
  if (param_2 != (int *)0x0) {
    *param_2 = local_33c;
  }
  return local_338;
}


