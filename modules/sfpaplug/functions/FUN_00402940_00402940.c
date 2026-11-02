/* Module: sfpaplug.dll
   Function: FUN_00402940
   Address: 00402940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402940(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40c [18];
  undefined4 local_3c4 [10];
  CHAR local_39c [888];
  int local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0044e648;
  puStack_10 = &DAT_0044b840;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffbe8;
  local_8 = 0;
  ExceptionList = &local_14;
  local_24 = acmDriverOpen(&local_20,param_1,0);
  if (local_24 == 0) {
    local_3c4[0] = 0x398;
    local_24 = acmDriverDetailsA(param_1,local_3c4,0);
    if (local_24 == 0) {
      *(undefined4 *)(param_2 + 0x88) = param_1;
      lstrcpyA((LPSTR)(param_2 + 2),local_39c);
      puVar2 = local_40c;
      for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      local_40c[0] = 0x48;
      local_24 = acmFormatTagEnumA(local_20,local_40c,&LAB_00402810,param_2,0);
    }
    acmDriverClose(local_20,0);
  }
  ExceptionList = local_14;
  return 1;
}


