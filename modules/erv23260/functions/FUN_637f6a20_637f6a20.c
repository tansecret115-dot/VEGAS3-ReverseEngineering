/* Module: erv23260.dll
   Function: FUN_637f6a20
   Address: 637f6a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __fastcall FUN_637f6a20(void *param_1)

{
  FUN_637f6e10((int)param_1);
  *(undefined4 *)((int)param_1 + 0x1aec) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x1af4) = 0;
  *(undefined4 *)((int)param_1 + 0x1afc) = 0x10;
  *(undefined4 *)((int)param_1 + 0x1b04) = 0;
  *(undefined4 *)((int)param_1 + 0x1b00) = 1;
  FUN_637f6ab0(param_1,0);
  FUN_637f6b40(param_1,*(undefined4 *)((int)param_1 + 0x1b00));
  FUN_637f7aa0((int)param_1);
  return param_1;
}


