/* Module: vidcap30.exe
   Function: FUN_0055bf80
   Address: 0055bf80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0055bf80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x40);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),8);
  puVar1[9] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1);
    return (undefined4 *)0x0;
  }
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,unaff_EDI);
  puVar1[10] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1[9]);
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),puVar1);
    return (undefined4 *)0x0;
  }
  puVar1[0xb] = iVar2 + unaff_EDI;
  puVar1[0xe] = 0x5a0;
  *puVar1 = 0;
  FUN_0055bf00(puVar1,param_1,0);
  return puVar1;
}


