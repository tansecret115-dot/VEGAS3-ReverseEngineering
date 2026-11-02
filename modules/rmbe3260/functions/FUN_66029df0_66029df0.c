/* Module: rmbe3260.dll
   Function: FUN_66029df0
   Address: 66029df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66029df0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_2 < 0xc) {
    iVar1 = *(int *)(param_1 + 0x30 + param_2 * 4);
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar1 + 0x10);
      *param_3 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
  }
  else {
    if (param_2 != 0xc) {
      return 0x80004001;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      piVar2 = (int *)(*(int *)(param_1 + 0x2c) + 0x10);
      *param_3 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
  }
  *param_3 = 0;
  (**(code **)(iRam00000000 + 4))(0);
  return 0;
}


