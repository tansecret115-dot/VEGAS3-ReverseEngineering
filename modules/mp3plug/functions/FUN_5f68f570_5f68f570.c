/* Module: mp3plug.dll
   Function: FUN_5f68f570
   Address: 5f68f570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f68f570(int param_1,undefined4 *param_2,int param_3)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  hMem = GlobalAlloc(0x42,param_3 * 0x2c);
  puVar1 = GlobalLock(hMem);
  *(undefined4 **)(param_1 + 0x120) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  for (uVar2 = param_3 * 0xb & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(int *)(param_1 + 0x124) = param_3;
  return 0;
}


