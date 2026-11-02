/* Module: mp3plug.dll
   Function: FUN_5f688150
   Address: 5f688150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f688150(void *this,LPCWSTR param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)((int)this + 0x87c) == 0) {
    piVar1 = (int *)((int)this + 0x16ec);
    puVar4 = (undefined4 *)((int)this + 0x892);
    for (iVar2 = 0x395; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined4 *)((int)this + 0x16e4) = 4;
    if ((int *)*piVar1 != (int *)0x0) {
      FUN_5f6b66f0((int *)*piVar1);
    }
    *piVar1 = 0;
    FUN_5f6b67c0(piVar1,4,-1,-1,0x80000002);
    iVar2 = FUN_5f68c9c0(param_1,(undefined4 *)((int)this + 0x892),(int *)*piVar1);
    if (iVar2 < 0) {
      return;
    }
  }
  *(undefined4 *)((int)this + 0x87c) = 1;
  if (*(int **)((int)this + 0x16ec) != (int *)0x0) {
    iVar2 = **(int **)((int)this + 0x16ec);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x16ec) + 8) + iVar3 * 4);
        if (piVar1 != (int *)0x0) {
          FUN_5f6b6490(param_2,piVar1,piVar1[2] + 0xc,-1,(int *)0x0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  return;
}


