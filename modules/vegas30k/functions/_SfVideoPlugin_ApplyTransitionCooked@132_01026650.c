/* Module: vegas30k.dll
   Function: _SfVideoPlugin_ApplyTransitionCooked@132
   Address: 01026650
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfVideoPlugin_ApplyTransitionCooked_132
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined4 param_17,undefined4 param_18,undefined4 param_19,int *param_20,int param_21
              ,undefined4 *param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
              undefined4 param_26,undefined4 param_27,double param_28,undefined4 param_29)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  bool bVar5;
  undefined4 *unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  int *local_84;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_5c [2];
  undefined4 auStack_54 [17];
  int iStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x26650  1266  _SfVideoPlugin_ApplyTransitionCooked@132 */
  local_84 = (int *)0x0;
  local_7c = 0;
  local_78 = 0;
  local_80 = (int *)0x0;
  local_74 = 0;
  iVar1 = _SfGetPixelType_4(param_1);
  bVar5 = iVar1 == 0x20;
  iVar1 = (**(code **)*param_22)(param_22,&DAT_011e64d8,&local_80);
  if ((((-1 < iVar1) &&
       (iVar1 = (**(code **)*param_20)(param_20,&DAT_011e65a8,&local_80), -1 < iVar1)) &&
      (iVar2 = FUN_01135a40(unaff_EBP,uStack_8,uStack_4,0,param_1,bVar5,&stack0xffffff70),
      -1 < iVar2)) &&
     ((iVar2 = FUN_01135a40(unaff_EBP,param_5,param_6,param_7,param_8,bVar5,&stack0xffffff78),
      -1 < iVar2 &&
      (iVar2 = FUN_01135a40(unaff_EBP,param_12,param_13,param_14,param_15,bVar5,&local_84),
      -1 < iVar2)))) {
    local_7c = 0;
    if (unaff_retaddr == (undefined4 *)0x0) {
      local_74 = 0;
      uStack_70 = 0;
    }
    else {
      local_74 = *unaff_retaddr;
      uStack_70 = unaff_retaddr[1];
    }
    uStack_6c = 0;
    uStack_68 = 0;
    FUN_01025e90(unaff_ESI,param_2,param_3,param_4);
    FUN_01025e90(unaff_EBX,param_9,param_10,param_11);
    FUN_01025e90(local_84,param_16,param_17,param_18);
    FUN_01025a30(param_20,param_29);
    iVar1 = (**(code **)(*param_20 + 0x18))(param_20,&stack0xffffff78,2,&stack0xffffff70,1,0);
    FUN_010251b0(param_20);
    if (-1 < iVar1) {
      if (param_21 != 0) {
        FUN_010255a0(param_21,param_23,param_22,param_25,param_24,param_26,param_27);
      }
      (**(code **)(*local_80 + 0x24))(local_80,(float)param_28);
      auStack_5c[0] = 0;
      puVar3 = auStack_54 + 1;
      iVar1 = 4;
      do {
        puVar3[-1] = 0;
        *puVar3 = 1;
        puVar3 = puVar3 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if (unaff_retaddr == (undefined4 *)0x0) {
        auStack_54[0] = 0;
        auStack_54[2] = 0;
        auStack_54[1] = *(undefined4 *)(iStack_10 + 4);
        auStack_54[3] = *(undefined4 *)(iStack_10 + 8);
      }
      else {
        auStack_54[2] = unaff_retaddr[1];
        auStack_54[0] = *unaff_retaddr;
        auStack_54[1] = unaff_retaddr[2];
        auStack_54[3] = unaff_retaddr[3];
      }
      iVar1 = (**(code **)(*param_20 + 0x1c))(param_20,0,auStack_5c,&local_84);
      if ((-1 < iVar1) && (iVar2 = FUN_01135590(), iVar2 == 1)) {
        uVar7 = 3;
        uVar6 = 0;
        uVar4 = FUN_01134d60(0,param_7,param_8,3);
        iVar1 = _SfDibCopy_36(iStack_10,uStack_4,unaff_retaddr,param_1,uVar4,uVar6,param_7,param_8,
                              uVar7);
      }
    }
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  if (local_84 != (int *)0x0) {
    (**(code **)(*local_84 + 8))(local_84);
  }
  if (local_80 != (int *)0x0) {
    (**(code **)(*local_80 + 8))(local_80);
  }
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return iVar1;
}


