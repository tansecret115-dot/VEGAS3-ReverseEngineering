/* Module: vegas30.exe
   Function: FUN_005c27c0
   Address: 005c27c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005c27c0(int param_1,int *param_2)

{
  LPCSTR lpString;
  int iVar1;
  int *piVar2;
  int local_30 [4];
  int local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  piVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_30[2] = *(undefined4 *)(param_1 + 8);
  local_30[3] = *(undefined4 *)(param_1 + 0xc);
  local_18 = *(undefined4 *)(param_1 + 0x10);
  local_14 = *(undefined4 *)(param_1 + 0x14);
  local_10 = *(undefined4 *)(param_1 + 0x20);
  local_c = *(undefined4 *)(param_1 + 0x24);
  local_8 = *(int *)(param_1 + 0x2c);
  lpString = (LPCSTR)(param_1 + 0x3c);
  local_30[0] = 0x30;
  local_30[1] = 2;
  if (lpString == (LPCSTR)0x0) {
    local_20 = 0;
  }
  else {
    iVar1 = lstrlenA(lpString);
    local_20 = iVar1 * 2 + 2;
  }
  if (local_8 == 0) {
    return 1;
  }
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_30,0x30,0);
  if ((-1 < iVar1) && (local_30[0] != 0)) {
    iVar1 = FUN_005bbe70(param_2,lpString,local_30[0]);
  }
  return iVar1;
}


