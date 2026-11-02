/* Module: vegas30.exe
   Function: FUN_00525ba0
   Address: 00525ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00525ba0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_11c [276];
  byte local_8;
  
  FUN_00508ba0(param_2,local_11c);
  iVar1 = FUN_0050a870(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_0050a7f0(*(undefined4 *)(param_1 + 0xfc),param_2);
    *(undefined4 *)(param_1 + 0x100) = 1;
    return uVar2;
  }
  if (((local_8 & 2) == 0) && ((local_8 & 0x80) != 0)) {
    uVar2 = FUN_005257a0(param_1,param_2);
    return uVar2;
  }
  return 0x80070057;
}


