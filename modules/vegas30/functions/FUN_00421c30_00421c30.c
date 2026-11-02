/* Module: vegas30.exe
   Function: FUN_00421c30
   Address: 00421c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00421c30(void)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  ulong in_stack_00000018;
  LPCSTR in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *in_stack_00000028;
  undefined4 in_stack_0000002c;
  tagRECT local_190;
  undefined4 local_180 [7];
  undefined1 local_164 [16];
  ulong local_154 [4];
  ISFGraphBuilder *local_144 [4];
  undefined4 local_134;
  undefined4 local_130;
  CHAR local_12c [259];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar3 = local_154;
  for (iVar2 = 0x55; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_154[1] = in_stack_00000018;
  local_134 = in_stack_00000010;
  local_154[3] = DAT_0064b138;
  local_130 = in_stack_00000014;
  local_18 = *in_stack_00000028;
  local_1c = in_stack_00000024;
  local_14 = in_stack_00000028[1];
  local_154[2] = 3;
  local_10 = in_stack_00000028[2];
  local_c = in_stack_00000028[3];
  local_8 = in_stack_0000002c;
  lstrcpynA(local_12c,in_stack_0000001c,0x104);
  local_29 = 0;
  local_28 = *in_stack_00000020;
  local_24 = in_stack_00000020[1];
  lVar1 = Mixer_GetDeviceGraph(local_144,4,local_154[1]);
  if (lVar1 < 0) {
    return 0;
  }
  iVar2 = FUN_0040c050(200);
  if (iVar2 == 0) {
    puVar4 = local_180;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_180[0] = 0x2c;
    local_180[2] = 1;
    GetWindowRect(DAT_00647624,&local_190);
    FUN_00468fb0(local_164,&local_190,0x1a4,0x168);
    iVar2 = FUN_00411360(1,0,&PTR_LAB_0063d3b0,local_12c,local_180,200,0,0x2d8,local_154);
    if (((iVar2 != 0) && (in_stack_00000028 != (undefined4 *)0x0)) && (DAT_0064aef4 == 0)) {
      FUN_00468f50(*(undefined4 *)(iVar2 + 8),local_12c,in_stack_00000028);
      return 0;
    }
  }
  else {
    if ((in_stack_00000028 != (undefined4 *)0x0) && (DAT_0064aef4 == 0)) {
      FUN_00468f50(*(undefined4 *)(iVar2 + 8),local_12c,in_stack_00000028);
    }
    FUN_0040d4a0(iVar2);
    FUN_00420a20(iVar2,local_154);
  }
  return 0;
}


