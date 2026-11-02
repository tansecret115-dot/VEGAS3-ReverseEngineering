/* Module: sfcdi.dll
   Function: FUN_5bf202f0
   Address: 5bf202f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf202f0(int param_1,int *param_2)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  int extraout_EAX;
  
  iVar1 = FUN_5bf20070(param_1);
  if (-1 < iVar1) {
    hMem = GlobalAlloc(0x40,0x3d1c);
    puVar2 = GlobalLock(hMem);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_5bf1f360(puVar2);
    }
    *(undefined4 **)(param_1 + 0xc) = puVar2;
    if ((puVar2 != (undefined4 *)0x0) &&
       (FUN_5bf1f400((int)puVar2,(uint *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),(void *)0x0,
                     (int *)0x0,1), -1 < extraout_EAX)) {
      FUN_5bf1f6c0(*(void **)(param_1 + 0xc),param_2);
      return;
    }
  }
  return;
}


