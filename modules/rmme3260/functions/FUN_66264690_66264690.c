/* Module: rmme3260.dll
   Function: FUN_66264690
   Address: 66264690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66264690(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  puVar1 = operator_new(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_662643f0(puVar1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,piVar2 + 4);
  (**(code **)(*param_1 + 0x18))(param_1,piVar2 + 5);
  (**(code **)*param_1)(param_1,&DAT_6626a9a8,&local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0x10))(local_8,piVar2 + 6);
    (**(code **)(*local_8 + 0x18))(local_8,piVar2 + 7);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  *param_2 = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  return;
}


