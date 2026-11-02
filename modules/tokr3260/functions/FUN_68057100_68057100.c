/* Module: tokr3260.dll
   Function: FUN_68057100
   Address: 68057100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68057100(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_1004 [2048];
  undefined1 local_804 [2008];
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_6805a6a0();
  puStack_20 = local_1004;
  uStack_18 = param_3[1];
  uVar1 = *(undefined4 *)(param_3[3] + 4);
  puStack_24 = (undefined1 *)param_1[1];
  puStack_28 = (undefined1 *)*param_1;
  uStack_1c = 0x200;
  uStack_2c = 0x6805713a;
  uStack_14 = uVar1;
  (*DAT_68061218)();
  uStack_18 = param_3[2];
  puStack_24 = (undefined1 *)param_1[2];
  puStack_20 = local_804;
  puStack_28 = (undefined1 *)param_1[3];
  uStack_1c = 0x200;
  uStack_2c = 0x6805715c;
  uStack_14 = uVar1;
  (*DAT_68061218)();
  uStack_18 = *param_3;
  puStack_24 = local_804;
  uStack_1c = 0x400;
  puStack_20 = (undefined1 *)param_2;
  puStack_28 = local_1004;
  uStack_2c = 0x68057180;
  uStack_14 = uVar1;
  (*DAT_68061218)();
  return;
}


