/* Module: sipr3260.dll
   Function: FUN_632a1000
   Address: 632a1000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_632a1000(undefined4 *param_1)

{
  FUN_632a18b0(param_1);
  *param_1 = &PTR_FUN_632a4088;
  *(undefined2 *)(param_1 + 0x2c) = 0x515;
  *(undefined2 *)((int)param_1 + 0xb2) = 0x516;
  *(undefined2 *)(param_1 + 0x2d) = 0x517;
  *(undefined2 *)((int)param_1 + 0xb6) = 0x518;
  *(undefined2 *)(param_1 + 0x2e) = 0x51f;
  *(undefined2 *)((int)param_1 + 0xba) = 0x520;
  *(undefined2 *)(param_1 + 0x2f) = 0x521;
  *(undefined2 *)((int)param_1 + 0xbe) = 0x522;
  *(undefined2 *)(param_1 + 0x30) = 0x529;
  *(undefined2 *)((int)param_1 + 0xc2) = 0x52a;
  *(undefined2 *)(param_1 + 0x31) = 0x52b;
  *(undefined2 *)((int)param_1 + 0xc6) = 0x52c;
  return param_1;
}


