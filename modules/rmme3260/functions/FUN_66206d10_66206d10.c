/* Module: rmme3260.dll
   Function: FUN_66206d10
   Address: 66206d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66206d10(int param_1,int param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_2 != 0) {
    return 0x80004005;
  }
  (**(code **)(*param_3 + 4))(param_3);
  FUN_6624ff10((void *)(param_1 + 0x10),*(int *)(param_1 + 0x14),param_3);
  return 0;
}


