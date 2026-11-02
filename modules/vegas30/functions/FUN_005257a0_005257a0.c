/* Module: vegas30.exe
   Function: FUN_005257a0
   Address: 005257a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005257a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  byte local_124;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  
  FUN_00508ba0(param_2,&local_238);
  if ((local_124 & 0x80) == 0) {
    return -0x7ff8ffa9;
  }
  local_118 = local_234;
  local_11c = local_238;
  local_114 = local_230;
  local_110 = local_22c;
  iVar1 = _FXPackage_DeletePackage_4(&local_11c);
  if (-1 < iVar1) {
    iVar2 = FUN_00509fb0(*(undefined4 *)(param_1 + 0xfc),&local_238);
    while (iVar2 != 0) {
      iVar1 = FUN_0050a7f0(*(undefined4 *)(param_1 + 0xfc),iVar2);
      iVar2 = FUN_00509fb0(*(undefined4 *)(param_1 + 0xfc),&local_238);
    }
    PostMessageA(*(HWND *)(param_1 + 8),0x111,600,(LPARAM)*(HWND *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x100) = 1;
  }
  return iVar1;
}


