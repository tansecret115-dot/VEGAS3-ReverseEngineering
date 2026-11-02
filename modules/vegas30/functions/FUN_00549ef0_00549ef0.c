/* Module: vegas30.exe
   Function: FUN_00549ef0
   Address: 00549ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00549ef0(int param_1,int param_2)

{
  uint uVar1;
  LRESULT LVar2;
  LPARAM lParam;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar4 = 0;
  puVar5 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_28[0] = 5;
  local_28[1] = 0;
  local_28[2] = 0;
  local_14 = 0xffffffff;
  local_10 = 0;
  local_8 = param_2;
  local_4 = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    local_c = *(undefined4 *)(param_2 + 0x790);
    local_28[0] = 7;
  }
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1007,0,(LPARAM)local_28);
  if (LVar2 == -1) {
    uVar4 = 0x80004005;
  }
  else {
    SendMessageA(*(HWND *)(param_1 + 0x9c),0x101d,0,0);
    lParam = FUN_0054b2c0(0);
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1011,0,lParam);
    iVar3 = GetSystemMetrics(0x31);
    uVar1 = LVar2 + 10 + iVar3;
    if (*(int *)(param_1 + 0x588) < (int)uVar1) {
      *(uint *)(param_1 + 0x588) = uVar1;
      SendMessageA(*(HWND *)(param_1 + 0x9c),0x101e,0,uVar1 & 0xffff);
      FUN_0054a000(param_1);
      return 0;
    }
  }
  FUN_0054a000(param_1);
  return uVar4;
}


