/* Module: atrc3260.dll
   Function: FUN_68001000
   Address: 68001000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_68001000(undefined4 *param_1)

{
  FUN_68001200(param_1);
  *param_1 = &PTR_FUN_68004088;
  *(undefined2 *)(param_1 + 0x76) = 0x4b1;
  *(undefined2 *)((int)param_1 + 0x1da) = 0x4b2;
  *(undefined2 *)(param_1 + 0x77) = 0x4b3;
  *(undefined2 *)((int)param_1 + 0x1de) = 0x4b4;
  *(undefined2 *)(param_1 + 0x78) = 0x4b5;
  *(undefined2 *)((int)param_1 + 0x1e2) = 0x4b6;
  *(undefined2 *)(param_1 + 0x79) = 0x4b7;
  *(undefined2 *)((int)param_1 + 0x1e6) = 0x4b8;
  *(undefined2 *)(param_1 + 0x7a) = 0x4c5;
  *(undefined2 *)((int)param_1 + 0x1ea) = 0x4c6;
  *(undefined2 *)(param_1 + 0x7b) = 0x4c7;
  *(undefined2 *)((int)param_1 + 0x1ee) = 0x4c8;
  *(undefined2 *)(param_1 + 0x7c) = 0x4c9;
  *(undefined2 *)((int)param_1 + 0x1f2) = 0x4ca;
  *(undefined2 *)(param_1 + 0x7d) = 0x4cb;
  *(undefined2 *)((int)param_1 + 0x1f6) = 0x4cc;
  *(undefined2 *)(param_1 + 0x7e) = 0x4d9;
  *(undefined2 *)((int)param_1 + 0x1fa) = 0x4da;
  *(undefined2 *)(param_1 + 0x7f) = 0x4db;
  *(undefined2 *)((int)param_1 + 0x1fe) = 0x4dc;
  *(undefined2 *)(param_1 + 0x80) = 0x4dd;
  *(undefined2 *)((int)param_1 + 0x202) = 0x4de;
  *(undefined2 *)(param_1 + 0x81) = 0x4df;
  *(undefined2 *)((int)param_1 + 0x206) = 0x4e0;
  return param_1;
}


