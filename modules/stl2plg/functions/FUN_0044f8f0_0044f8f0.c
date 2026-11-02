/* Module: stl2plg.dll
   Function: FUN_0044f8f0
   Address: 0044f8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f8f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x51) == 0) {
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x25);
    *(int *)(param_1 + 0x51) = iVar2;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1000);
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x51);
  puVar1[2] = &LAB_0044f960;
  puVar1[3] = FUN_0044f970;
  puVar1[4] = FUN_0044f9e0;
  puVar1[5] = FUN_0044ce10;
  puVar1[6] = &DAT_0044fa20;
  puVar1[7] = param_2;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}


