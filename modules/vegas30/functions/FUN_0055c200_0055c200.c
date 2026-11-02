/* Module: vegas30.exe
   Function: FUN_0055c200
   Address: 0055c200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055c200(HWND param_1,undefined4 param_2)

{
  int iVar1;
  HWND pHVar2;
  int *unaff_EBX;
  int *unaff_EBP;
  uint bEnable;
  int *unaff_ESI;
  uint bEnable_00;
  int *local_4;
  
  local_4 = (int *)0x0;
  bEnable_00 = 0;
  bEnable = 0;
  iVar1 = FUN_0055c190(param_1,param_2,&local_4);
  if ((iVar1 == 0) && (local_4 != (int *)0x0)) {
    param_2 = 0;
    iVar1 = (**(code **)*local_4)(local_4,&DAT_0060f158,&param_2);
    if ((-1 < iVar1) && (local_4 != (int *)0x0)) {
      iVar1 = (**(code **)(*local_4 + 0x14))(local_4);
      bEnable_00 = (uint)(iVar1 == 0);
      iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX);
      bEnable = (uint)(iVar1 == 0);
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      local_4 = (int *)0x0;
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  pHVar2 = GetDlgItem(param_1,0x62d);
  EnableWindow(pHVar2,bEnable_00);
  pHVar2 = GetDlgItem(param_1,0x62e);
  EnableWindow(pHVar2,bEnable);
  return;
}


