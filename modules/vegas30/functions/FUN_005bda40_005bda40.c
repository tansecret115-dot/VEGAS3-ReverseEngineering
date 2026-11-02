/* Module: vegas30.exe
   Function: FUN_005bda40
   Address: 005bda40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bda40(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [4];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  puVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_30[2] = *(undefined4 *)(param_1 + 0x1c);
  local_20 = *(int *)(param_1 + 8);
  local_1c = *(int *)(param_1 + 0xc);
  local_18 = *(undefined4 *)(param_1 + 0x10);
  local_14 = *(undefined4 *)(param_1 + 0x14);
  local_30[0] = 0x30;
  if (*(LPCSTR *)(param_1 + 0x20) != (LPCSTR)0x0) {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x20));
    local_10 = iVar1 * 2 + 2;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = lstrlenA((LPCSTR)(*(int *)(param_1 + 0x18) + 0x170));
    local_c = iVar1 * 2 + 2;
  }
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_30,0x30,0);
  if (-1 < iVar1) {
    if (local_20 != 0) {
      iVar1 = FUN_005bbe70(param_2,*(undefined4 *)(param_1 + 0x20),local_20);
    }
    if ((-1 < iVar1) && (local_1c != 0)) {
      FUN_005bbe70(param_2,*(int *)(param_1 + 0x18) + 0x170,local_1c);
    }
  }
  return;
}


