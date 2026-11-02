/* Module: rmbe3260.dll
   Function: FUN_660115f0
   Address: 660115f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660115f0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return -0x7ffbfda8;
  }
  local_14 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = 0;
  local_8 = 0;
  if ((short)local_14 != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x54) + (local_8 & 0xffff) * 4);
      local_44 = 0x30;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_18 = 0;
      local_c = (int *)puVar1[0x10];
      iVar3 = iVar4;
      while (iVar4 = iVar3, -1 < iVar4) {
        if (iVar4 == 0x4025c) goto LAB_66011718;
        if (iVar4 == 0x4025d) break;
        local_10 = 0;
        iVar4 = (**(code **)(*local_c + 0x34))
                          (local_c,puVar1[1],&local_38,puVar1[2],puVar1[3],puVar1[0xf],&local_10,
                           &local_3c);
        if (iVar4 < 0) break;
        iVar3 = iVar4;
        if (iVar4 != 0x4025c) {
          local_34 = puVar1[0xf];
          iVar3 = FUN_6603c030(*(undefined4 *)(param_1 + 0x4c),(int *)*puVar1,&local_44);
          iVar3 = FUN_660157a0(iVar3);
          if (-1 < iVar3) {
            uVar2 = puVar1[2];
            puVar1[2] = uVar2 + local_34;
            puVar1[3] = puVar1[3] + (uint)CARRY4(uVar2,local_34);
            puVar1[0xf] = local_18;
            iVar3 = iVar4;
          }
        }
      }
      if (((iVar4 == 0x4025c) || (iVar4 == -0x7ffbfda0)) || (iVar4 == 0x4025d)) {
LAB_66011718:
        iVar4 = 0;
      }
      if (iVar4 < 0) {
        return iVar4;
      }
      local_8 = local_8 + 1;
    } while ((ushort)local_8 < (ushort)local_14);
  }
  return iVar4;
}


