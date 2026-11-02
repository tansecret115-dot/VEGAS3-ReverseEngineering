/* Module: vidcap30.exe
   Function: FUN_004147d0
   Address: 004147d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004147d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  HGLOBAL hMem;
  int *piVar3;
  undefined1 *puVar4;
  
  if (param_1 == (int *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    iVar1 = param_1[8];
    if ((iVar1 == 0) && (*(ushort *)((int)param_1 + 0xe) < 9)) {
      iVar1 = 1 << ((byte)*(ushort *)((int)param_1 + 0xe) & 0x1f);
    }
    puVar4 = (undefined1 *)(*param_1 + iVar1 * 4 + (int)param_1);
  }
  uVar2 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
  puVar4 = puVar4 + (((int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3) * param_1[2] -
                    (int)param_1);
  hMem = GlobalAlloc(0x42,(SIZE_T)puVar4);
  piVar3 = GlobalLock(hMem);
  if (piVar3 != (int *)0x0) {
    for (uVar2 = (uint)puVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *piVar3 = *param_1;
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 1;
    }
    for (uVar2 = (uint)puVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)piVar3 = (char)*param_1;
      param_1 = (int *)((int)param_1 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
    }
  }
  return;
}


