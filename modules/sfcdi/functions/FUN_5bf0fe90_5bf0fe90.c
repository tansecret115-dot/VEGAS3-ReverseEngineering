/* Module: sfcdi.dll
   Function: FUN_5bf0fe90
   Address: 5bf0fe90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0fe90(_sfcdtext *param_1,uint param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_a4;
  CHAR local_a0 [159];
  undefined1 local_1;
  
  uVar2 = 0;
  local_a4 = param_4;
  while( true ) {
    iVar1 = lstrlenA(param_3);
    iVar1 = iVar1 + 1;
    if (iVar1 < 0xa1) {
      lstrcpynA(local_a0,param_3,0xa0);
      local_1 = 0;
      cdtext_SetItemText(param_1,uVar2,param_2,local_a0);
    }
    local_a4 = local_a4 - iVar1;
    if (local_a4 < 1) break;
    param_3 = param_3 + iVar1;
    uVar2 = uVar2 + 1;
  }
  return 0;
}


