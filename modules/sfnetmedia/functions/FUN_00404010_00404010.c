/* Module: sfnetmedia.dll
   Function: FUN_00404010
   Address: 00404010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00404010(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0xfefefefe;
  *(undefined4 *)(param_1 + 4) = DAT_0043c790;
  *(undefined4 *)(param_1 + 8) = DAT_0043c794;
  *(undefined4 *)(param_1 + 0xc) = DAT_0043c798;
  *(undefined4 *)(param_1 + 0x10) = DAT_0043c79c;
  *(undefined4 *)(param_1 + 0x14) = DAT_0043c780;
  *(undefined4 *)(param_1 + 0x18) = DAT_0043c784;
  *(undefined4 *)(param_1 + 0x1c) = DAT_0043c788;
  uVar1 = DAT_0043c78c;
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


