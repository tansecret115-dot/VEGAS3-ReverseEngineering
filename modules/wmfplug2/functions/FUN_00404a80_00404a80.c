/* Module: wmfplug2.dll
   Function: FUN_00404a80
   Address: 00404a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00404af3) */
/* WARNING: Removing unreachable block (ram,0x00404afb) */

undefined4 FUN_00404a80(int param_1,int *param_2,int *param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x1b8) == 0) {
    return 0x8000ffff;
  }
  *param_2 = *(int *)(param_1 + 0x1b8);
  if (*(int *)(param_1 + 0x1bc) == 0) {
    hMem = GlobalAlloc(0x42,0x20);
    puVar1 = GlobalLock(hMem);
    *(undefined4 **)(param_1 + 0x1bc) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *puVar1 = 0x20;
      puVar1[1] = puVar1[1] & 0xfffffffe;
      return 0;
    }
    return 0x8007000e;
  }
  *param_3 = *(int *)(param_1 + 0x1bc);
  return 0;
}


