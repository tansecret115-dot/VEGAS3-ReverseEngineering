/* Module: vegas30.exe
   Function: FUN_0043a120
   Address: 0043a120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a120(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  tagPOINT local_34;
  undefined4 local_2c [7];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar3 = local_2c;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_2c[0] = 0x2c;
  local_10 = *param_2;
  local_2c[2] = 1;
  local_c = param_2[1];
  local_8 = param_2[2];
  local_4 = param_2[3];
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffd | 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00411660(&local_10,0,1);
  puVar3 = local_2c;
  uVar1 = _SfGetString_8(DAT_00647204,0x4fa9);
  FUN_00411250(*(undefined4 *)(DAT_0064762c + 0xac),uVar1,puVar3);
  if (param_3 != 0) {
    GetCursorPos(&local_34);
    PostMessageA(*(HWND *)(param_1 + 8),0xa1,2,local_34.y << 0x10 | local_34.x & 0xffffU);
  }
  return;
}


