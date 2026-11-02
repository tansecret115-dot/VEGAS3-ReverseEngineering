/* Module: aviplug.dll
   Function: FUN_5f941550
   Address: 5f941550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f941550(undefined4 *param_1,undefined4 param_2)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  *param_1 = 0;
  uVar4 = 0x8007000e;
  hMem = GlobalAlloc(0x42,0x678);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = 0;
    return 0x8007000e;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  puVar1[0x19c] = pvVar2;
  if (pvVar2 != (HANDLE)0x0) {
    uVar4 = 0x8004e01b;
    iVar3 = FUN_5f98fd40((int)(puVar1 + 8));
    if (iVar3 != 0) {
      iVar3 = FUN_5f98fd40((int)(puVar1 + 0x11));
      if (iVar3 != 0) {
        iVar3 = FUN_5f98fd40((int)(puVar1 + 0x182));
        if (iVar3 != 0) {
          iVar3 = FUN_5f98fd40((int)(puVar1 + 0x18d));
          if (iVar3 != 0) {
            puVar5 = puVar1 + 0x1a;
            iVar3 = 10;
            do {
              FUN_5f98fe00(puVar1 + 0x11,puVar5);
              puVar5 = puVar5 + 0x24;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            puVar1[0x18c] = 10;
            puVar1[0x197] = 10;
            puVar1[0x19d] = 0;
            puVar1[0x18b] = 0;
            puVar1[0x196] = 0;
            *puVar1 = param_2;
            *param_1 = puVar1;
            return 0;
          }
        }
      }
    }
  }
  FUN_5f941660(puVar1);
  *param_1 = 0;
  return uVar4;
}


