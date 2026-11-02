/* Module: vegas30.exe
   Function: FUN_005c22f0
   Address: 005c22f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c22f0(int *param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  int iVar2;
  undefined4 unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  int iStack_14;
  undefined4 auStack_10 [4];
  
  puStack_70 = &local_50;
  puVar3 = local_48;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uStack_74 = 1;
  uStack_78 = 0;
  uStack_7c = 0;
  iVar2 = 0;
  local_58 = 0;
  local_5c = 0;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&puStack_70,4,&stack0xffffff98), -1 < iVar1)) {
    if (unaff_ESI != 4) {
      puStack_70 = (undefined4 *)0x0;
    }
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1,unaff_EBP,unaff_EBX,0,0);
    if (iVar1 < 0) {
      return 0;
    }
  }
  puVar3 = puStack_70;
  if ((puStack_70 == (undefined4 *)0x48) || (puStack_70 == (undefined4 *)0x40)) {
    puVar4 = &local_5c;
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,puVar4,puStack_70,auStack_10);
    if (-1 < iVar2) {
      if (puVar3 != puStack_20) {
        return -0x7ffb1ff8;
      }
      *(undefined4 *)(iStack_14 + 8) = unaff_EBP;
      *(undefined4 *)(iStack_14 + 0xc) = unaff_EBX;
      *(undefined4 *)(iStack_14 + 0x10) = local_5c;
      *(undefined4 *)(iStack_14 + 0x14) = local_58;
      *(undefined4 *)(iStack_14 + 0x20) = uStack_54;
      *(undefined4 *)(iStack_14 + 0x24) = local_50;
      *(undefined4 *)(iStack_14 + 0x28) = uStack_4c;
      *(undefined4 *)(iStack_14 + 0x2c) = local_48[0];
      *(undefined4 *)(iStack_14 + 0x30) = local_48[1];
      *(undefined4 *)(iStack_14 + 0x38) = local_48[3];
      *(undefined4 *)(iStack_14 + 0x34) = local_48[2];
      *(int *)(iStack_14 + 0x4c) = iStack_30;
      *(undefined4 *)(iStack_14 + 0x3c) = uStack_38;
      *(undefined4 *)(iStack_14 + 0x40) = uStack_34;
      *(undefined4 *)(iStack_14 + 0x50) = auStack_10[0];
      *(undefined4 *)(iStack_14 + 0x1c) = uStack_2c;
      if ((iStack_1c != 0) &&
         (iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&uStack_7c,4,&puStack_20), -1 < iVar2)) {
        if (iStack_30 != 4) {
          return -0x7ffb1ff8;
        }
        iStack_24 = 0;
        if (0 < (int)puVar4) {
          do {
            iVar2 = FUN_005c24a0(param_1,uStack_2c,uStack_28,iStack_14);
            if (iVar2 < 0) {
              return iVar2;
            }
            iStack_24 = iStack_24 + 1;
          } while (iStack_24 < (int)puVar4);
        }
      }
    }
  }
  return iVar2;
}


