/* Module: erv23260.dll
   Function: FUN_63812190
   Address: 63812190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63812190(int param_1)

{
  undefined4 *puVar1;
  
  if (*(void **)(param_1 + 0x564) != (void *)0x0) {
    FUN_637f1080(*(void **)(param_1 + 0x564));
    *(undefined4 *)(param_1 + 0x564) = 0;
  }
  if (*(void **)(param_1 + 0x110) != (void *)0x0) {
    FUN_637f1080(*(void **)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(void **)(param_1 + 0x114) != (void *)0x0) {
    FUN_637f1080(*(void **)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 300);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_63809470(puVar1);
    FUN_637f2010(puVar1);
    *(undefined4 *)(param_1 + 300) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x11c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_63809470(puVar1);
    FUN_637f2010(puVar1);
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_638117f0();
  return 0;
}


