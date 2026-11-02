/* Module: vegas30k.dll
   Function: FUN_010c3810
   Address: 010c3810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c3810(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_d4;
  int local_d0;
  undefined1 local_c0 [4];
  uint local_bc [3];
  code *local_b0;
  undefined1 uStack_84;
  undefined1 uStack_83;
  byte bStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  local_d4 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar8 = *(int *)(param_1 + 0x4c);
  uVar5 = _SfGetPixelType_4(*(undefined4 *)(param_1 + 0x44));
  uVar6 = _SfGetPixelType_4(*(undefined4 *)(param_1 + 0x14));
  _SfGetPixelBitsPerChannel_8(uVar5,local_c0);
  _SfGetPixelBitsPerChannel_8(uVar6,local_c0);
  _SfXCHGGetFunctionPointers_20(uVar6,uVar5,*(undefined4 *)(param_1 + 0x88),local_bc,0);
  local_28 = *(undefined4 *)(param_1 + 0x74);
  local_2c = *(undefined4 *)(param_1 + 0x40);
  local_30 = *(undefined4 *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 100);
  local_d0 = *(int *)(param_1 + 0x68);
  if ((local_bc[0] & 0x10) == 0) {
    if (0 < local_d0) {
      do {
        local_5c = *(undefined4 *)(param_1 + 0x50);
        local_58 = local_d4;
        local_54 = *(undefined4 *)(param_1 + 0x20);
        iVar7 = iVar4;
        local_60 = iVar8;
        if (0 < iVar4) {
          do {
            (*local_b0)(local_bc);
            bStack_82 = *(byte *)((uint)bStack_82 + param_2);
            uStack_83 = *(undefined1 *)((CONCAT11(bStack_82,uStack_83) & 0xff) + param_2);
            uStack_84 = *(undefined1 *)
                         ((CONCAT12(bStack_82,CONCAT11(uStack_83,uStack_84)) & 0xff) + param_2);
            (*local_b0)(local_c0);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar8 = iVar8 + iVar2;
        local_d4 = local_d4 + iVar3;
        local_d0 = local_d0 + -1;
      } while (local_d0 != 0);
    }
  }
  else if (0 < local_d0) {
    do {
      local_5c = *(undefined4 *)(param_1 + 0x50);
      local_58 = local_d4;
      local_54 = *(undefined4 *)(param_1 + 0x20);
      iVar7 = iVar4;
      local_60 = iVar8;
      if (0 < iVar4) {
        do {
          (*local_b0)(local_bc);
          uVar1 = *(undefined2 *)(param_3 + (uint)CONCAT11(uStack_7f,uStack_80) * 2);
          uStack_80 = (undefined1)uVar1;
          uStack_7f = (undefined1)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)
                   (param_3 + (CONCAT12(uStack_80,CONCAT11(uStack_81,bStack_82)) & 0xffff) * 2);
          bStack_82 = (byte)uVar1;
          uStack_81 = (undefined1)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)
                   (param_3 + (CONCAT12(bStack_82,CONCAT11(uStack_83,uStack_84)) & 0xffff) * 2);
          uStack_84 = (undefined1)uVar1;
          uStack_83 = (undefined1)((ushort)uVar1 >> 8);
          (*local_b0)(local_c0);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_d4 = local_d4 + iVar3;
      iVar8 = iVar8 + iVar2;
      local_d0 = local_d0 + -1;
    } while (local_d0 != 0);
    return 0;
  }
  return 0;
}


