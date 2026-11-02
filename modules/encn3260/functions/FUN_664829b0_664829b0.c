/* Module: encn3260.dll
   Function: FUN_664829b0
   Address: 664829b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664829b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_c [8];
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x20))
                      (*(undefined4 **)(param_1 + 0x20),&DAT_664dc6c0,(undefined4 *)(param_1 + 0x34)
                      );
    if (iVar1 != 0) {
      return 0;
    }
  }
  piVar2 = *(int **)(param_1 + 0x34);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x18))(piVar2,local_c);
  return (uint)piVar2[1] / 1000 + *piVar2 * 1000;
}


