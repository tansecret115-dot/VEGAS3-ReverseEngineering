/* Module: mcplugrw.dll
   Function: FUN_0043d3c0
   Address: 0043d3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0043d3c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  
  piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x40);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),8);
  piVar1[9] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
    return (int *)0x0;
  }
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,unaff_EDI);
  piVar1[10] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1[9]);
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
    return (int *)0x0;
  }
  piVar1[0xb] = iVar2 + unaff_EDI;
  piVar1[0xe] = 0x5a0;
  *piVar1 = 0;
  FUN_0043d340(piVar1,param_1,(int *)0x0);
  return piVar1;
}


