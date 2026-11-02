/* Module: rmbe3260.dll
   Function: FUN_660169b0
   Address: 660169b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_660169b0(ulong param_1,CPNWindow *param_2,CPNxSize *param_3,CPNxPoint *param_4)

{
  CPNText local_c4 [192];
  
  CPNText::CPNText(local_c4);
  CPNWindow::AttachWindowItem((CPNWindow *)local_c4,param_1,param_2);
  CPNWindow::GetSize((CPNWindow *)local_c4,param_3);
  CPNWindow::GetPosition((CPNWindow *)local_c4,param_4);
  CPNWindow::DetachWindowItem((CPNWindow *)local_c4);
  CPNText::~CPNText(local_c4);
  return;
}


