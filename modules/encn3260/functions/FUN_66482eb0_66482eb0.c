/* Module: encn3260.dll
   Function: FUN_66482eb0
   Address: 66482eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66482eb0(int param_1,int param_2)

{
  void *this;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    FUN_66483190((void *)(param_1 + -0x14),param_2,s_Unable_to_start_recording_664e2244);
    return 0;
  }
  iVar3 = 0;
  if (*(short *)(param_1 + 0x34) != 0) {
    do {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(*(int **)(param_1 + 0x18),iVar3);
      iVar3 = iVar3 + 1;
    } while ((ushort)iVar3 < *(ushort *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x96) == 0) {
    this = operator_new(0xc);
    if (this == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = FUN_66483440(this,(int *)(param_1 + -0x14));
    }
    *(int **)(param_1 + 0x6e) = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))
                      (*(int **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x6e),0);
    *(undefined4 *)(param_1 + 0x6a) = uVar2;
  }
  return 0;
}


