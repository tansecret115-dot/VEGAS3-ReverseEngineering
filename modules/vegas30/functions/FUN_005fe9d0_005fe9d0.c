/* Module: vegas30.exe
   Function: FUN_005fe9d0
   Address: 005fe9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_005fe9d0(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_1 = 0;
  local_c = 0;
  puVar3 = param_1;
  for (iVar2 = 8; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
  }
  local_8 = 0;
  local_4 = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  param_1[0xe] = 1;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  FUN_00605d10(&local_c,param_1 + 0x10);
  FUN_00605d10(&local_c,param_1 + 0x13);
  FUN_00605d10(&local_c,param_1 + 0x16);
  FUN_00605d10(&local_c,param_1 + 0x19);
  param_1[0x19e] = 0;
  DVar1 = GetTickCount();
  param_1[10] = DVar1;
  param_1[0x1a1] = 1;
  *(undefined2 *)(param_1 + 0x1fa) = 0xffff;
  *(undefined2 *)(param_1 + 0x1fe) = 0xffff;
  param_1[0x1a0] = 0;
  *(undefined1 *)(param_1 + 0x1e3) = 0;
  *(undefined1 *)((int)param_1 + 0x797) = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[499] = 0xffff;
  param_1[0x1fb] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1ff] = 0;
  return param_1;
}


