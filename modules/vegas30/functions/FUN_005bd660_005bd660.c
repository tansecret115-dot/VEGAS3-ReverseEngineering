/* Module: vegas30.exe
   Function: FUN_005bd660
   Address: 005bd660
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005bd660(int *param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_68;
  undefined4 *puStack_64;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_20;
  int iStack_18;
  int aiStack_10 [4];
  
  puStack_64 = &local_50;
  iStack_68 = 1;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,0,0);
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&iStack_68,4,aiStack_10), -1 < iVar1)) {
    if (aiStack_10[0] != 4) {
      iStack_68 = 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1,puStack_64,unaff_EDI,0,0);
    if (iVar1 < 0) {
      return -0x7ffb1ff8;
    }
  }
  if (iStack_68 != 0x48) {
    return -0x7ffb1ff8;
  }
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffffa4,0x48,aiStack_10);
  if (-1 < iVar1) {
    if (iStack_20 == 0x48) {
      *(int *)(iStack_18 + 0x58) = iStack_68;
      *(undefined4 **)(iStack_18 + 0x5c) = puStack_64;
      *(undefined4 *)(iStack_18 + 0x60) = unaff_EDI;
      *(undefined4 *)(iStack_18 + 100) = unaff_ESI;
      *(undefined4 *)(iStack_18 + 0x68) = unaff_EBX;
      *(undefined4 *)(iStack_18 + 0x6c) = 0;
      *(undefined4 *)(iStack_18 + 0x70) = local_50;
      *(undefined4 *)(iStack_18 + 0x74) = uStack_4c;
      *(undefined4 *)(iStack_18 + 0x78) = uStack_44;
      *(undefined4 *)(iStack_18 + 0x7c) = uStack_40;
      *(undefined4 *)(iStack_18 + 0x80) = uStack_3c;
      *(undefined4 *)(iStack_18 + 0x84) = uStack_38;
      *(undefined4 *)(iStack_18 + 0x88) = uStack_34;
      *(undefined4 *)(iStack_18 + 0x8c) = uStack_30;
      *(undefined4 *)(iStack_18 + 0x90) = uStack_2c;
      *(undefined4 *)(iStack_18 + 0x94) = uStack_28;
      return 0;
    }
    return -0x7ffb1ff8;
  }
  return iVar1;
}


