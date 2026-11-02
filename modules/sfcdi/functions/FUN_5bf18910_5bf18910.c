/* Module: sfcdi.dll
   Function: FUN_5bf18910
   Address: 5bf18910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf18910(undefined4 *param_1,SIZE_T param_2,uint param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  uint local_4;
  
  local_4 = 0;
  if (param_3 != 0) {
    do {
      puVar3 = param_1;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = param_2;
      param_1[2] = param_2;
      hMem = GlobalAlloc(0x40,param_2);
      pvVar1 = GlobalLock(hMem);
      *param_1 = pvVar1;
      if (pvVar1 == (LPVOID)0x0) {
        return 0x8007000e;
      }
      param_1 = param_1 + 10;
      local_4 = local_4 + 1;
    } while (local_4 < param_3);
  }
  return 0;
}


