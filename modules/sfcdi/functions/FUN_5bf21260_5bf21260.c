/* Module: sfcdi.dll
   Function: FUN_5bf21260
   Address: 5bf21260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf21260(uint param_1,int *param_2)

{
  uint uVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  int extraout_EAX;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1;
  uVar3 = 0;
  iVar4 = 0;
  hMem = GlobalAlloc(0x40,0x3d1c);
  puVar2 = GlobalLock(hMem);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_5bf1f360(puVar2);
  }
  *(undefined4 **)(param_1 + 0x1d9c) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    if (*(uint **)(param_1 + 0x1db0) == (uint *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = **(uint **)(param_1 + 0x1db0);
    }
    if (param_1 != 0) {
      do {
        if (iVar4 < 0) {
          return iVar4;
        }
        FUN_5bf1f400(*(int *)(uVar1 + 0x1d9c),(uint *)(uVar1 + 0x1da0),0,(void *)0x0,
                     *(int **)(*(int *)(*(int *)(uVar1 + 0x1db0) + 8) + uVar3 * 4),3);
        iVar4 = extraout_EAX;
        if (((-1 < extraout_EAX) && (iVar4 = FUN_5bf1f570(*(int *)(uVar1 + 0x1d9c)), -1 < iVar4)) &&
           (param_2 != (int *)0x0)) {
          iVar4 = FUN_5bf1f8a0(*(void **)(uVar1 + 0x1d9c),param_2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_1);
    }
    return iVar4;
  }
  return -0x7ff8fff2;
}


