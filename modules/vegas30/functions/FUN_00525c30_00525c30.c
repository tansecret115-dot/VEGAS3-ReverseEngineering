/* Module: vegas30.exe
   Function: FUN_00525c30
   Address: 00525c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00525c30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  undefined4 *puVar3;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  uchar auStack_234 [272];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  uchar auStack_118 [280];
  
  FUN_00508ba0(param_2,&local_11c);
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 300))
                    (*(undefined4 **)(param_1 + 300),&DAT_006335c8,&local_240);
  if (iVar1 < 0) {
    return iVar1;
  }
  puVar3 = (undefined4 *)&stack0xfffffdbc;
  for (iVar1 = 0x47; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _mbscpy(auStack_234,auStack_118);
  local_240 = uStack_124;
  uStack_23c = uStack_120;
  uStack_238 = local_11c;
  if ((*(byte *)(param_1 + 0x18c) & 4) != 0) {
    Transport_Suspend();
  }
  iVar1 = _FXPackage_LoadPackage_16(unaff_EDI,&stack0xfffffdbc,1,1);
  if ((*(byte *)(param_1 + 0x18c) & 4) != 0) {
    Transport_Resume((uint)(iVar1 != 0));
  }
  if (iVar1 < 0) {
    iVar1 = _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 8),0x13b,3,0x8004e031,auStack_118,0)
    ;
    if (iVar1 != 6) {
      if (iVar1 == 0x65) {
        FUN_005257a0(param_1,param_2);
        FUN_00525480(param_1,1);
      }
      iVar1 = -0x7fffbffc;
      FUN_00526cc0(param_1);
      goto LAB_00525dd7;
    }
    if ((*(byte *)(param_1 + 0x18c) & 4) != 0) {
      Transport_Suspend();
    }
    iVar1 = _FXPackage_LoadPackage_16(unaff_EDI,&stack0xfffffdbc,0,0);
    if ((*(byte *)(param_1 + 0x18c) & 4) != 0) {
      Transport_Resume((uint)(iVar1 != 0));
    }
    (**(code **)(**(int **)(param_1 + 300) + 0x70))(*(int **)(param_1 + 300),2,&stack0xfffffdb8);
    uVar2 = _SfGetString_8(DAT_00647204,0x4f5b);
    SfMsgBox(DAT_00647624,0x30,uVar2);
  }
  *(undefined4 *)(param_1 + 0x124) = 1;
LAB_00525dd7:
  (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = FUN_00526b90(param_1);
  return iVar1;
}


