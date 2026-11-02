/* Module: vegas30.exe
   Function: FUN_0053ed10
   Address: 0053ed10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053ed10(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = param_1;
  *(undefined4 *)(param_1 + 0xce0) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0xce4) = 0;
  *(undefined4 *)(param_1 + 0xce8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcec) = 0;
  uVar5 = 0;
  local_14 = 0;
  if ((param_3 < *(int *)(param_2 + 0x10) + -7) || (*(int *)(param_2 + 0x10) + 1 <= param_3)) {
    if (param_4 < *(int *)(param_1 + 0x390)) {
      uVar5 = 0x10;
    }
    else if (param_4 < *(int *)(param_1 + 0x398)) {
      iVar3 = param_1 + 0xe80;
      iVar2 = FUN_0053b4c0(param_1,param_4,&local_14);
      if ((iVar2 != 0) &&
         (((*(int *)(iVar1 + 0xe8c) == 400 || (*(int *)(iVar1 + 0xe8c) == 0x191)) &&
          (iVar3 = FUN_0053aea0(iVar3,local_14,&DAT_006573c0,0x104,&param_1), iVar3 != 0)))) {
        iVar3 = lstrlenA(&DAT_006573c0);
        puVar7 = &param_3;
        puVar6 = &DAT_006573c0;
        uVar4 = _SfGetUIFont_4(100);
        _SfGetTextExtent_16(uVar4,puVar6,iVar3,puVar7);
        if (*(int *)(iVar1 + 0x394) - *(int *)(iVar1 + 0x38c) < param_3) {
          local_4 = FUN_005382e0(1);
          local_c = (local_14 - *(int *)(iVar1 + 0xba8)) * local_4 + -1 + *(int *)(iVar1 + 0xac4);
          local_10 = *(undefined4 *)(iVar1 + 0x38c);
          local_8 = *(undefined4 *)(iVar1 + 0x394);
          local_4 = local_4 + local_c;
          FUN_00452ba0(iVar1,0xffffffff,local_c,&DAT_006573c0,&local_10);
          *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x1000;
          DAT_006575c8 = 1;
          return 0;
        }
      }
    }
    else {
      uVar5 = 0x20;
    }
  }
  else {
    uVar5 = 1;
  }
  if (DAT_006575c8 != 0) {
    FUN_00452d70(iVar1);
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xffffefff;
    DAT_006575c8 = 0;
  }
  return uVar5;
}


