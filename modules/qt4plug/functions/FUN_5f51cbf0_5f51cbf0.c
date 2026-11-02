/* Module: qt4plug.dll
   Function: FUN_5f51cbf0
   Address: 5f51cbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f51cc63) */
/* WARNING: Removing unreachable block (ram,0x5f51cc6b) */

undefined4 FUN_5f51cbf0(int param_1,int *param_2,int *param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x1c0) == 0) {
    return 0x8000ffff;
  }
  *param_2 = *(int *)(param_1 + 0x1c0);
  if (*(int *)(param_1 + 0x1c4) == 0) {
    hMem = GlobalAlloc(0x42,0x20);
    puVar1 = GlobalLock(hMem);
    *(undefined4 **)(param_1 + 0x1c4) = puVar1;
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
  *param_3 = *(int *)(param_1 + 0x1c4);
  return 0;
}


