/* Module: vidcap30.exe
   Function: FUN_005543c0
   Address: 005543c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005543c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x51) == 0) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
    *(undefined4 *)(param_1 + 0x51) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x51);
  *(undefined1 **)(iVar1 + 8) = &LAB_00554400;
  *(undefined1 **)(iVar1 + 0xc) = &LAB_00554430;
  *(code **)(iVar1 + 0x10) = FUN_00554480;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return;
}


