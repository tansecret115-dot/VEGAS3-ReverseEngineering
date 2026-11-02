/* Module: vidpcore.dll
   Function: FUN_5dea1270
   Address: 5dea1270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5dea1270(int param_1,int *param_2)

{
  undefined4 unaff_ESI;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 **)(param_1 + 8) = &local_18;
  *(undefined4 *)(param_1 + 0xc) = uStack_14;
  *(undefined4 *)(param_1 + 0x10) = unaff_ESI;
  *(undefined4 *)(param_1 + 0x14) = uStack_10;
  *(undefined4 *)(param_1 + 0x18) = local_18;
  *(undefined4 *)(param_1 + 0x1c) = uStack_c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  return;
}


