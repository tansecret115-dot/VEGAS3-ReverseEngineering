/* Module: encn3260.dll
   Function: FUN_6648c5a0
   Address: 6648c5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648c5a0(int param_1)

{
  int *piVar1;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x20);
  while (local_8 != 0) {
    piVar1 = (int *)FUN_664bab40(&local_8);
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  return;
}


