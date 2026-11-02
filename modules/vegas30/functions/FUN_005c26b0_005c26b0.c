/* Module: vegas30.exe
   Function: FUN_005c26b0
   Address: 005c26b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c26b0(int *param_1)

{
  int iVar1;
  undefined4 unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int iVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 local_18;
  undefined4 *puStack_14;
  int aiStack_10 [4];
  
  puStack_34 = &local_18;
  uStack_38 = 1;
  uStack_3c = 0;
  iVar2 = 0;
  uStack_40 = 0;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&puStack_34,4,aiStack_10), -1 < iVar1)) {
    if (aiStack_10[0] != 4) {
      puStack_34 = (undefined4 *)0x0;
    }
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1,unaff_ESI,unaff_EBP,0,0);
    if (iVar1 < 0) {
      return -0x7ffb1f7d;
    }
  }
  if (puStack_34 != (undefined4 *)0x10) {
    return -0x7ffb1f7d;
  }
  local_18 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffffdc,0x10,&stack0xffffffd0);
  if (-1 < iVar1) {
    puStack_14[1] = unaff_EDI;
    iVar1 = _SfList_CreateExZ_32(puStack_14,8,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (((-1 < iVar1) && (unaff_ESI != 0)) && (0 < unaff_ESI)) {
      do {
        iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&uStack_3c,8,&uStack_40);
        if (iVar1 < 0) {
          return iVar1;
        }
        _SfList_InsertList_16(*puStack_14,0xffffffff,&uStack_3c,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < unaff_ESI);
    }
  }
  return iVar1;
}


