/* Module: rmbe3260.dll
   Function: FUN_66009800
   Address: 66009800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66009800(CPNDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_66063e68;
  CPNCheckButton::~CPNCheckButton((CPNCheckButton *)(param_1 + 0x2ce));
  CPNButton::~CPNButton((CPNButton *)(param_1 + 0x1d3));
  CPNButton::~CPNButton((CPNButton *)(param_1 + 0xd8));
  CPNDialog::~CPNDialog(param_1);
  return;
}


