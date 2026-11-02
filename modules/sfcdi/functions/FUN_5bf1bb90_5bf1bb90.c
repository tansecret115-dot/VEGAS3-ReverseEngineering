/* Module: sfcdi.dll
   Function: FUN_5bf1bb90
   Address: 5bf1bb90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1bb90(HWND param_1,int param_2,LONG param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar1 = FUN_5bf25b40(param_1,PTR_s_You_have_unsaved_changes_to_your_5bf64edc,
                         PTR_s_Performance_Wizard_5bf64ed8,0x31);
    if (iVar1 == 2) {
      SetWindowLongA(param_1,0,param_3);
    }
  }
  return;
}


