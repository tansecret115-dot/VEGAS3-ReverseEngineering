/* Module: rmbe3260.dll
   Function: FUN_66016a10
   Address: 66016a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_66016a10(LPCSTR param_1,undefined4 param_2,undefined4 param_3,CPNWindow *param_4)

{
  CPNWindow *pCVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  char local_2d8;
  undefined4 local_2d7 [63];
  char local_1d8;
  undefined4 local_1d7 [63];
  undefined **local_d8 [52];
  undefined4 local_8;
  
  if (*(int *)(param_1 + -8) != 0) {
    bVar2 = FUN_6604e620(param_1);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      ShellExecuteA((HWND)0x0,&DAT_6606ce0c,param_1,&DAT_66075004,(LPCSTR)0x0,0);
      goto LAB_66016b01;
    }
  }
  CPNDialog::CPNDialog((CPNDialog *)local_d8);
  pCVar1 = param_4;
  local_2d8 = DAT_66075004;
  puVar4 = local_2d7;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_1d8 = DAT_66075004;
  puVar4 = local_1d7;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)param_4;
  *(undefined2 *)puVar4 = 0;
  local_8 = 0;
  local_d8[0] = &PTR_FUN_66062968;
  (**(code **)(iVar3 + 0x24))(&local_1d8,0xff);
  FUN_6602e290(0x5dd0039,&local_2d8,0xff);
  CPNMessageBox::DoModal((CPNMessageBox *)local_d8,pCVar1,&local_2d8,&local_1d8,0x10);
  local_d8[0] = &PTR_FUN_66062818;
  CPNDialog::~CPNDialog((CPNDialog *)local_d8);
LAB_66016b01:
  FUN_6605b770((int *)&param_1);
  return 1;
}


