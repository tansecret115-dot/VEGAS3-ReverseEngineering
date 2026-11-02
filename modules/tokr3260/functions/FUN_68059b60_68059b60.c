/* Module: tokr3260.dll
   Function: FUN_68059b60
   Address: 68059b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68059b60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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
  uStack_18 = *param_3;
  uVar1 = *(undefined4 *)(param_3[3] + 4);
  puStack_24 = local_804;
  uStack_1c = 0x400;
  puStack_28 = (undefined1 *)param_1;
  uStack_2c = 0x68059b9a;
  uStack_14 = uVar1;
  (*DAT_6806121c)();
  uStack_18 = param_3[1];
  puStack_20 = (undefined1 *)param_2[1];
  puStack_24 = (undefined1 *)*param_2;
  uStack_1c = 0x200;
  puStack_28 = local_804;
  uStack_2c = 0x68059bbe;
  uStack_14 = uVar1;
  (*DAT_6806121c)();
  uStack_18 = param_3[2];
  puStack_20 = (undefined1 *)param_2[2];
  puStack_24 = (undefined1 *)param_2[3];
  uStack_1c = 0x200;
  puStack_28 = local_1004;
  uStack_2c = 0x68059be0;
  uStack_14 = uVar1;
  (*DAT_6806121c)();
  return;
}


