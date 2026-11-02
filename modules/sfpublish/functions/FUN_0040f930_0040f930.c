/* Module: sfpublish.dll
   Function: FUN_0040f930
   Address: 0040f930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f930(int param_1)

{
  undefined4 *puStack_89c;
  int *piStack_898;
  undefined2 *puStack_894;
  undefined1 *puStack_890;
  undefined4 auStack_870 [2];
  undefined2 auStack_868 [8];
  undefined2 uStack_858;
  undefined1 auStack_854 [12];
  undefined2 uStack_848;
  undefined2 uStack_838;
  uchar auStack_828 [2088];
  
  (**(code **)(**(int **)(param_1 + 0x50) + 0x38))();
  FUN_004012e0();
  puStack_890 = (undefined1 *)0x40f958;
  FUN_00418d60(auStack_828,(BYTE *)"file:///%spageloaderror.htm");
  auStack_868[0] = 0;
  FUN_0040fe10(auStack_868,(LPCSTR)auStack_828);
  piStack_898 = *(int **)(param_1 + 0x50);
  puStack_890 = &stack0xfffff788;
  puStack_894 = auStack_868;
  auStack_870[0] = 0xe;
  uStack_848 = 0;
  uStack_838 = 0;
  uStack_858 = 0;
  puStack_89c = (undefined4 *)0x40f9b3;
  (**(code **)(*piStack_898 + 0xd0))();
  puStack_89c = auStack_870;
  Ordinal_9();
  Ordinal_9(auStack_854);
  Ordinal_9(auStack_868);
  Ordinal_9(&puStack_89c);
  Ordinal_9(&puStack_890);
  return 0;
}


