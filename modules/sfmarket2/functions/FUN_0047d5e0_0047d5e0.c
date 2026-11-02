/* Module: sfmarket2.dll
   Function: FUN_0047d5e0
   Address: 0047d5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d5e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x51) == 0) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
    *(undefined4 *)(param_1 + 0x51) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x51);
  *(undefined1 **)(iVar1 + 8) = &LAB_0047d620;
  *(undefined1 **)(iVar1 + 0xc) = &LAB_0047d650;
  *(code **)(iVar1 + 0x10) = FUN_0047d6a0;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return;
}


