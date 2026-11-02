/* Module: stl2plg.dll
   Function: FUN_00450590
   Address: 00450590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00450590(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (((param_1 != 0) && (*(int **)(param_1 + 0x1c) != (int *)0x0)) &&
     (**(int **)(param_1 + 0x1c) == 6)) {
    uVar1 = FUN_004572d0(1,param_2,param_3);
    if (uVar1 != *(uint *)(param_1 + 0x30)) {
      return 0xfffffffd;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    uVar2 = 1 << ((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) & 0x1f);
    uVar1 = param_3;
    if (uVar2 <= param_3) {
      uVar1 = uVar2 - 1;
      param_2 = param_2 + (param_3 - uVar1);
    }
    FUN_00457280(*(int *)(*(int *)(param_1 + 0x1c) + 0x14),(undefined4 *)param_2,uVar1);
    **(undefined4 **)(param_1 + 0x1c) = 7;
    return 0;
  }
  return 0xfffffffe;
}


