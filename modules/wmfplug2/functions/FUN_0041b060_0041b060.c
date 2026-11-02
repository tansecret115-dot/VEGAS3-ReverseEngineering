/* Module: wmfplug2.dll
   Function: FUN_0041b060
   Address: 0041b060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041b060(HANDLE param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD local_84;
  CHAR local_80 [128];
  
  iVar1 = ftol();
  local_84 = iVar1 * 0xe10;
  iVar2 = ftol();
  local_84 = iVar2 * 0x3c;
  DVar3 = ftol();
  local_84 = DVar3;
  uVar4 = ftol();
  wsprintfA(local_80,"%02d:%02d:%02d.%d",iVar1,iVar2,DVar3,uVar4);
  FUN_00418a90(param_1,local_80,&local_84);
  FUN_00418a90(param_1," ",&local_84);
  return 0;
}


