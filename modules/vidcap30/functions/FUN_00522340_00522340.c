/* Module: vidcap30.exe
   Function: FUN_00522340
   Address: 00522340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00522340(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    local_4 = param_1;
    FUN_005222f0();
    piVar2 = (int *)&DAT_005a5be8;
    (**(code **)**(undefined4 **)(param_1 + 8))
              (*(undefined4 **)(param_1 + 8),&DAT_005a5be8,&local_4);
    if (piVar2 != (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x14);
      (**(code **)(*piVar2 + 0x1c))(piVar2,piVar1,0,0);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


