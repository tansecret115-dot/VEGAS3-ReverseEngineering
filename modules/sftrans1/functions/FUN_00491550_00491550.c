/* Module: sftrans1.dll
   Function: FUN_00491550
   Address: 00491550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00491550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  FUN_00485e80(param_2);
  return;
}


