/* Module: sftrkfx1.dll
   Function: FUN_5cba5760
   Address: 5cba5760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba5760(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  FUN_5cba2520(param_1,0x7fbf);
  puVar2 = (undefined4 *)((int)param_1 + 0x238);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 600) = 0;
  *(undefined4 *)((int)param_1 + 0x25c) = 0x3ff00000;
  if (*(undefined4 **)((int)param_1 + 0x264) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)((int)param_1 + 0x264);
    for (iVar1 = 0x300; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x270) = 0;
  *(undefined4 *)((int)param_1 + 0x268) = 0;
  *(undefined4 *)((int)param_1 + 0x26c) = 0;
  *(undefined4 *)((int)param_1 + 0x274) = 0;
  return 0;
}


