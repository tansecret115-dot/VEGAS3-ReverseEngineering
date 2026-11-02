/* Module: vegas30.exe
   Function: FUN_005c3400
   Address: 005c3400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005c3400(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int *piVar2;
  undefined1 local_11c [4];
  int local_118 [68];
  int *piStack_8;
  
  iVar1 = FUN_005f06b0(param_3,local_118);
  if (local_118[0] == 1) {
    piVar2 = &DAT_00610da0;
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x14c))
                      (*(undefined4 **)(param_1 + 0x14c),&DAT_00610da0,local_11c);
    if ((-1 < iVar1) && (piVar2 != (int *)0x0)) {
      iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,piStack_8,unaff_retaddr);
      (**(code **)(*piStack_8 + 8))(piStack_8);
    }
  }
  else if (local_118[0] == 2) {
    piVar2 = &DAT_0062d020;
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x14c))
                      (*(undefined4 **)(param_1 + 0x14c),&DAT_0062d020,local_11c);
    if ((-1 < iVar1) && (piVar2 != (int *)0x0)) {
      iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2);
      (**(code **)(*piStack_8 + 8))(piStack_8);
      return iVar1;
    }
  }
  return iVar1;
}


