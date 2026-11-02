/* Module: mcplug.dll
   Function: FUN_00406110
   Address: 00406110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00406110(int param_1,int *param_2)

{
  int iVar1;
  int *piStack_8;
  
  piStack_8 = *(int **)(param_1 + 0x18);
  if (piStack_8 != (int *)0x0) {
    (**(code **)(*piStack_8 + 8))();
  }
  *(int **)(param_1 + 0x18) = param_2;
  if (param_2 != (int *)0x0) {
    piStack_8 = param_2;
    (**(code **)(*param_2 + 4))();
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x18))
                      (*(undefined4 **)(param_1 + 0x18),&DAT_00475d70);
    if (-1 < iVar1) {
      iVar1 = (*pcRam0000001c)(&stack0x00000000,0x2711);
      if (iVar1 != 0) {
        FUN_00419600(DAT_00487a6c,4);
      }
      (*(code *)piStack_8[2])(&piStack_8);
    }
  }
  return 0;
}


