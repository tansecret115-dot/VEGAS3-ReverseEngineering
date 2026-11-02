/* Module: encn3260.dll
   Function: FUN_66482d30
   Address: 66482d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66482d30(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_66483190((void *)(param_1 + -0x14),param_2,s_Unable_to_setup_session_664e220c);
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(*(int **)(param_1 + 0x14),param_3);
  *(undefined4 *)(param_1 + 0x9a) = 1;
  return 0;
}


