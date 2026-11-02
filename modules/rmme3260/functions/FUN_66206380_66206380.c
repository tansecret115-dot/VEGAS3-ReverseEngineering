/* Module: rmme3260.dll
   Function: FUN_66206380
   Address: 66206380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66206380(undefined4 *param_1)

{
  FUN_66217eb0(param_1);
  *param_1 = &PTR_FUN_6626b408;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 6;
  return param_1;
}


