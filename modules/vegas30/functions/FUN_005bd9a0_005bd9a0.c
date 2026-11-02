/* Module: vegas30.exe
   Function: FUN_005bd9a0
   Address: 005bd9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bd9a0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_38 [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  puVar2 = local_38;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_38[2] = *(undefined4 *)(param_1 + 0x1c);
  local_28 = *(int *)(param_1 + 8);
  local_24 = *(undefined4 *)(param_1 + 0xc);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_1c = *(undefined4 *)(param_1 + 0x14);
  local_38[0] = 0x38;
  local_38[1] = 2;
  if (*(LPCSTR *)(param_1 + 0x20) != (LPCSTR)0x0) {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x20));
    local_18 = iVar1 * 2 + 2;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x164);
  }
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_38,0x38,0);
  if ((-1 < iVar1) && (local_28 != 0)) {
    FUN_005bbe70(param_2,*(undefined4 *)(param_1 + 0x20),local_28);
  }
  return;
}


