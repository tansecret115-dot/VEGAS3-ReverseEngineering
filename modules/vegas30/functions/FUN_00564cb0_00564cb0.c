/* Module: vegas30.exe
   Function: FUN_00564cb0
   Address: 00564cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00564cb0(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint in_stack_000000dc;
  int *in_stack_000000e0;
  int *in_stack_000000e4;
  int in_stack_000000e8;
  undefined1 *in_stack_000000ec;
  undefined1 *in_stack_000000f0;
  
  FUN_0060ac30();
  puVar3 = &param_5;
  for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)&stack0x00000104;
  for (iVar2 = 0x28c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)&stack0x00000b34;
  for (iVar2 = 0x24c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  bVar1 = false;
  FUN_005fb200();
  iVar2 = FUN_005b8900();
  if (iVar2 == 0) {
LAB_00565081:
    iVar2 = 0x4e001;
  }
  else {
    if (param_2 == 0) {
      iVar2 = FUN_00562480();
      if ((iVar2 != 0) && (iVar2 = SfMsgBox(), iVar2 == 6)) {
        SendMessageA(DAT_00647624,0x111,0x9e8f,6);
      }
      iVar2 = FUN_00562480();
      if (iVar2 != 0) goto LAB_00565081;
    }
    iVar2 = FUN_0052dfc0();
    if ((-1 < iVar2) && (iVar2 != 0x4e001)) {
      bVar1 = true;
      if (param_2 == 0) {
        FUN_004a45b0();
        param_7 = DAT_0064a8f0;
        param_5 = ((DAT_0064a8e8 ^ param_5) & 1 ^ param_5) & 0xfffffffd | (DAT_0064a910 & 1) << 1;
        param_10 = DAT_0064a8fc;
        param_8 = DAT_0064a8f4;
        param_13 = DAT_0064a908;
        param_11 = DAT_0064a900;
        param_9 = DAT_0064a8f8;
        param_12 = DAT_0064a904;
        if ((param_4 < 1) && ((param_4 < 0 || (param_3 == 0)))) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        in_stack_000000dc =
             iVar2 << 1 | (in_stack_000000dc ^ (in_stack_000000dc ^ DAT_0064a514) & 1) & 0xfffffffd;
        in_stack_000000e8 = DAT_0064a90c;
        in_stack_000000ec = &stack0x00000238;
        in_stack_000000f0 = &stack0x00000288;
        iVar2 = _SfCoCreateInstanceFromObjectMap_24();
        if (iVar2 < 0) {
          in_stack_000000e0 = (int *)0x0;
        }
        iVar2 = FUN_00567f20();
        if (in_stack_000000e0 != (int *)0x0) {
          (**(code **)(*in_stack_000000e0 + 8))();
          in_stack_000000e0 = (int *)0x0;
        }
        if (iVar2 != 0) goto LAB_00565098;
        DAT_0064a8f4 = param_8;
        DAT_0064a910 = param_5 >> 1 & 1;
        DAT_0064a8f0 = param_7;
        DAT_0064a8e8 = param_5 & 1;
        DAT_0064a8fc = param_10;
        DAT_0064a908 = param_13;
        DAT_0064a900 = param_11;
        DAT_0064a8f8 = param_9;
        DAT_0064a514 = in_stack_000000dc & 1;
        DAT_0064a904 = param_12;
        if (in_stack_000000e8 != 0) {
          DAT_0064a90c = in_stack_000000e8;
        }
        (**(code **)(*in_stack_000000e4 + 4))();
        (**(code **)(*in_stack_000000e0 + 8))();
        in_stack_000000e4 = (int *)0x0;
      }
      else {
        iVar2 = FUN_005380d0();
        if (iVar2 != 0) goto LAB_00565098;
      }
      iVar2 = FUN_00532af0();
      if (-1 < iVar2) {
        FUN_005351d0();
        FUN_004055e0();
        InterlockedIncrement(&DAT_0065e144);
        iVar2 = FUN_00564bb0();
        if (iVar2 < 0) {
          FUN_004055f0();
          InterlockedDecrement(&DAT_0065e144);
        }
      }
    }
  }
LAB_00565098:
  if (in_stack_000000e4 != (int *)0x0) {
    (**(code **)(*in_stack_000000e4 + 8))();
  }
  if (bVar1) {
    FUN_0052e040();
  }
  return iVar2;
}


