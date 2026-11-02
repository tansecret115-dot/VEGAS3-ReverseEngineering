/* Module: rmbe3260.dll
   Function: FUN_66006b80
   Address: 66006b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66006b80(CPNWindow *param_1,uint param_2)

{
  char local_2e4 [256];
  char local_1e4 [256];
  undefined **local_e4 [52];
  undefined4 local_14;
  char *local_10 [3];
  
  CPNDialog::CPNDialog((CPNDialog *)local_e4);
  local_14 = 0;
  local_e4[0] = &PTR_FUN_66062968;
  FUN_6605b650(local_10);
  (**(code **)(**(int **)(param_1 + 0xe4) + 0x24))(local_2e4,0xff);
  FUN_6602e290(param_2 | 0x5dd0000,local_1e4,0xff);
  FUN_6605bfd0(local_10,local_1e4);
  CPNMessageBox::DoModal((CPNMessageBox *)local_e4,param_1,local_10[0],local_2e4,0x10);
  FUN_6605b770((int *)local_10);
  local_e4[0] = &PTR_FUN_66062818;
  CPNDialog::~CPNDialog((CPNDialog *)local_e4);
  return;
}


