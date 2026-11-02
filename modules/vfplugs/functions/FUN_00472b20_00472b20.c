/* Module: vfplugs.dll
   Function: FUN_00472b20
   Address: 00472b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00472b20(int param_1)

{
  int iVar1;
  
  FUN_0044c300(*(int **)(param_1 + 0x308));
  *(int *)(param_1 + 0x308) = 0;
  iVar1 = FUN_0044c3d0((int *)(param_1 + 0x308),0x158,-1,-1,0x40000004);
  if (-1 < iVar1) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    if (0 < *(int *)(param_1 + 0x300)) {
      do {
        FUN_004714c0(param_1,(double *)0x0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x300));
    }
    FUN_00472990(param_1);
  }
  return 0;
}


