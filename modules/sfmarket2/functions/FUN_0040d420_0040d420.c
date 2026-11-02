/* Module: sfmarket2.dll
   Function: FUN_0040d420
   Address: 0040d420
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040d420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_50 = 0;
  local_20 = 0;
  local_4c = 0;
  local_1c = 0;
  local_48 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_40 = 0;
  local_8 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_3c = 0;
  local_24 = 8;
  local_22 = 0;
  local_54 = 0;
  local_52 = 0;
  local_14 = 0;
  local_12 = 0;
  local_44 = 0;
  local_42 = 0;
  local_38 = 0;
  local_34 = 0;
  local_32 = 0;
  if ((LPCSTR)(param_1 + 0x54) == (LPCSTR)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = lstrlenA((LPCSTR)(param_1 + 0x54));
    FUN_00492f90();
    MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x54),-1,(LPWSTR)&stack0xffffffa0,iVar1 + 1);
    uVar2 = Ordinal_2(&stack0xffffffa0);
    local_1c = uVar2;
    if ((*(int *)(param_1 + 0x10b4) == 0) || (iVar1 = FUN_0040dd60(param_1), -1 < iVar1)) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0xd0))
                        (*(int **)(param_1 + 0x50),&local_24,&local_54,&local_44,&local_14,&local_34
                        );
    }
    Ordinal_6(uVar2);
    return iVar1;
  }
  return 0;
}


