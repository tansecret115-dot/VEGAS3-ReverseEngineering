/* Module: vegas30k.dll
   Function: FUN_0118e8e0
   Address: 0118e8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118e8e0(int param_1,int *param_2)

{
  int *piVar1;
  int *unaff_EDI;
  undefined8 uVar2;
  int *local_4;
  
  local_4 = (int *)0x0;
  if ((*param_2 == 0) && ((char)param_2[1] != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x60) + 0xc))
              (*(int **)(param_1 + 0x60),&DAT_011d9b20,&local_4);
    if (local_4 != (int *)0x0) {
      (**(code **)(*local_4 + 0x40))(local_4,param_2 + 1,param_2);
      piVar1 = (int *)*param_2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x68) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(int *)(param_1 + 0x6c) = param_2[0x48];
  *(undefined4 *)(param_1 + 0x9c) = 1;
  if (param_2[0x48] == 5) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*param_2 != 0) {
    uVar2 = _SFSMPTE_SMPTEToNanos_4(param_2 + 0x42);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(int *)(param_1 + 0x78) = param_2[0x49];
    *(int *)(param_1 + 0x80) = param_2[0x4e];
    *(int *)(param_1 + 0x84) = param_2[0x4f];
    *(int *)(param_1 + 0x7c) = param_2[0x4a];
    *(int *)(param_1 + 0x88) = param_2[0x4d];
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 0;
}


