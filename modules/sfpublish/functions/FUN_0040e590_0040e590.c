/* Module: sfpublish.dll
   Function: FUN_0040e590
   Address: 0040e590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0040e590(LPCSTR param_1,undefined4 param_2,LPCSTR param_3,undefined4 param_4,LPCSTR param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_48 [8];
  undefined2 local_38 [4];
  undefined4 local_30;
  undefined2 local_28 [4];
  int local_20;
  undefined2 local_18 [4];
  int local_10;
  int local_8;
  
  local_48[0] = 0;
  FUN_0040fe10(local_48,param_1);
  local_38[0] = 3;
  local_30 = param_2;
  local_18[0] = 0;
  local_28[0] = 0;
  FUN_0040fea0(local_28);
  local_28[0] = 8;
  if (param_5 != (LPCSTR)0x0) {
    iVar1 = lstrlenA(param_5);
    FUN_004328f0();
    FUN_00401720((LPWSTR)&stack0xffffffac,param_5,iVar1 + 1,0);
  }
  local_20 = Ordinal_2();
  if ((local_20 == 0) && (param_5 != (LPCSTR)0x0)) {
    local_28[0] = 10;
    local_20 = -0x7ff8fff2;
  }
  if (param_3 != (LPCSTR)0x0) {
    iVar1 = Ordinal_9();
    if (iVar1 < 0) {
      local_10 = iVar1;
    }
    local_18[0] = 8;
    iVar1 = lstrlenA(param_3);
    FUN_004328f0();
    MultiByteToWideChar(0,0,param_3,-1,(LPWSTR)&stack0xffffffa4,iVar1 + 1);
    local_10 = Ordinal_2(&stack0xffffffa4);
    if (local_10 == 0) {
      local_18[0] = 10;
      local_10 = -0x7ff8fff2;
    }
  }
  uVar2 = (**(code **)(**(int **)(local_8 + 0x50) + 0xd0))
                    (*(int **)(local_8 + 0x50),local_48,local_38,local_18,param_4);
  Ordinal_9(local_28);
  Ordinal_9(local_18);
  Ordinal_9(local_38);
  Ordinal_9(local_48);
  return uVar2;
}


