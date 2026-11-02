/* Module: rmbe3260.dll
   Function: FUN_6600a7a0
   Address: 6600a7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6600a7a0(CPNDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_66064510;
  if (*(undefined4 **)(param_1 + 0xd0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xd0))(1);
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xd4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xd4))(1);
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  CPNDialog::~CPNDialog(param_1);
  return;
}


