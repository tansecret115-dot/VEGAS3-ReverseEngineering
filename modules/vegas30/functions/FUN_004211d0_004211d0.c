/* Module: vegas30.exe
   Function: FUN_004211d0
   Address: 004211d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004211d0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 uVar4;
  tagRECT local_294;
  undefined4 local_284 [7];
  undefined1 local_268 [16];
  undefined4 local_258 [5];
  undefined4 local_244;
  int local_240;
  undefined1 local_230 [260];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_104 [260];
  
  _SfLoadString_16(DAT_00647204,0x50cf,local_104,0x104);
  puVar3 = local_258;
  for (iVar2 = 0x55; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_258[1] = in_stack_00000018;
  local_240 = in_stack_00000014;
  local_258[3] = *(undefined4 *)(in_stack_00000014 + 8);
  local_244 = in_stack_00000010;
  local_120 = in_stack_00000020;
  uVar4 = *(undefined4 *)(in_stack_00000014 + 0x14);
  local_258[2] = 2;
  local_11c = *in_stack_00000024;
  local_118 = in_stack_00000024[1];
  local_114 = in_stack_00000024[2];
  local_110 = in_stack_00000024[3];
  local_10c = in_stack_00000028;
  local_12c = *in_stack_0000001c;
  local_128 = in_stack_0000001c[1];
  uVar1 = _SfGetString_8(DAT_00647204,0x50d1);
  SfPrintF(local_230,uVar1,uVar4);
  iVar2 = FUN_0040c050(200);
  if (iVar2 == 0) {
    puVar3 = local_284;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_284[0] = 0x2c;
    local_284[2] = 1;
    GetWindowRect(DAT_00647624,&local_294);
    FUN_00468fb0(local_268,&local_294,0x1a4,0x168);
    iVar2 = FUN_00411360(1,0,&PTR_LAB_0063d3b0,local_104,local_284,200,0,0x2d8,local_258);
    if (((iVar2 != 0) && (in_stack_00000024 != (undefined4 *)0x0)) && (DAT_0064aef4 == 0)) {
      FUN_00468f50(*(undefined4 *)(iVar2 + 8),local_104,in_stack_00000024);
      return 0;
    }
  }
  else {
    if ((in_stack_00000024 != (undefined4 *)0x0) && (DAT_0064aef4 == 0)) {
      FUN_00468f50(*(undefined4 *)(iVar2 + 8),local_104,in_stack_00000024);
    }
    FUN_0040d4a0(iVar2);
    FUN_00420a20(iVar2,local_258);
  }
  return 0;
}


