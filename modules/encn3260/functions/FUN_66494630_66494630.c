/* Module: encn3260.dll
   Function: FUN_66494630
   Address: 66494630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66494630(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = piVar2[3];
  while (iVar1 != 0) {
    piVar2 = (int *)FUN_664c0540(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(short *)(param_1 + 5) = (short)param_1[5] + 1;
    if ((uint)*(ushort *)(param_1 + 5) == param_1[4]) {
      *(undefined2 *)(param_1 + 5) = 0;
    }
    piVar2 = (int *)*param_1;
    iVar1 = piVar2[3];
  }
  return;
}


