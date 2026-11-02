/* Module: rmto3260.dll
   Function: FUN_662c83e0
   Address: 662c83e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c83e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(undefined4 **)(param_1 + 0x56) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x56))(1);
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  piVar1 = operator_new(0x2a);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_662e0cc0(piVar1);
  }
  *(int **)(param_1 + 0x56) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if ((-1 < iVar2) && (*(ushort *)(param_2 + 10) != 0)) {
    iVar2 = FUN_662e1090(piVar1,*(char **)(param_2 + 0xc),(uint)*(ushort *)(param_2 + 10));
  }
  if (-1 < iVar2) {
    if (*(ushort *)(param_2 + 0x10) != 0) {
      iVar2 = FUN_662e1130(*(void **)(param_1 + 0x56),*(char **)(param_2 + 0x12),
                           (uint)*(ushort *)(param_2 + 0x10));
    }
    if (-1 < iVar2) {
      if (*(ushort *)(param_2 + 0x16) != 0) {
        iVar2 = FUN_662e11d0(*(void **)(param_1 + 0x56),*(char **)(param_2 + 0x18),
                             (uint)*(ushort *)(param_2 + 0x16));
      }
      if ((-1 < iVar2) && (*(ushort *)(param_2 + 0x1c) != 0)) {
        iVar2 = FUN_662e1270(*(void **)(param_1 + 0x56),*(char **)(param_2 + 0x1e),
                             (uint)*(ushort *)(param_2 + 0x1c));
      }
    }
  }
  *(uint *)(param_1 + 0x60) = (uint)(iVar2 == 0);
  return iVar2;
}


