/* Module: vidcap30.exe
   Function: FUN_00445170
   Address: 00445170
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00445170(int param_1,int *param_2)

{
  int iVar1;
  int unaff_EDI;
  int iVar2;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0x10;
  if (*(LPCSTR *)(param_1 + 0xc) == (LPCSTR)0x0) {
    local_c = 0;
  }
  else {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0xc));
    local_c = iVar1 * 2 + 2;
  }
  iVar1 = 0;
  if (*(LPCSTR *)(param_1 + 0x14) != (LPCSTR)0x0) {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x14));
    iVar1 = iVar1 * 2 + 2;
  }
  local_4 = *(undefined4 *)(param_1 + 8);
  if ((local_c != 0) && (**(char **)(param_1 + 0xc) == '\0')) {
    local_c = local_c + -2;
  }
  local_8 = iVar1;
  if ((iVar1 != 0) && (**(char **)(param_1 + 0x14) == '\0')) {
    local_8 = iVar1 + -2;
  }
  iVar2 = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_10,0x10);
  if (-1 < iVar1) {
    if ((iVar2 != 0) &&
       (iVar1 = FUN_00451fa0(param_2,*(undefined4 *)(param_1 + 0xc),iVar2), iVar1 < 0)) {
      return iVar1;
    }
    if ((unaff_EDI != 0) &&
       (iVar1 = FUN_00451fa0(param_2,*(undefined4 *)(param_1 + 0x14),unaff_EDI), iVar1 < 0)) {
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


