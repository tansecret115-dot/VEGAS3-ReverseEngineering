/* Module: rmme3260.dll
   Function: FUN_66215980
   Address: 66215980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66215980(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x2e8) != 2) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x2d8) = 0;
      *(int *)(param_1 + -0xb4) = param_2;
      FUN_662140d0((void *)(param_1 + -0xd8),param_2);
      return 0;
    }
    FUN_66213fb0((void *)(param_1 + -0xd8));
    return 0;
  }
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(int *)(param_1 + -0xb4) = param_2;
    FUN_66213e60((void *)(param_1 + -0xd8),param_2,(int *)0x0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x2e8) = 3;
  FUN_66213ca0((void *)(param_1 + -0xd8));
  return 0;
}


