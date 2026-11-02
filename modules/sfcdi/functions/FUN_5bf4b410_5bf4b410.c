/* Module: sfcdi.dll
   Function: FUN_5bf4b410
   Address: 5bf4b410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf4b410(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  void *_Src;
  int iVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  short *_Dst;
  uint uVar8;
  UINT uFlags;
  uint local_8;
  
  pMem = (LPCVOID)*param_2;
  uVar8 = *param_3;
  if (*(uint **)(param_1 + 0x24) == (uint *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = **(uint **)(param_1 + 0x24);
  }
  uVar5 = local_8 & 0xffff;
  uVar7 = uVar8 + 8 + uVar5 * 0xc;
  *(uint *)((int)pMem + 0xc4) = (uint)((uVar8 & 0x7ff) != 0) + (uVar8 >> 0xb);
  uVar7 = ((uint)((uVar7 & 0x7ff) != 0) + (uVar7 >> 0xb)) * 0x800;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  uVar8 = uVar7;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,uVar8,uFlags);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  psVar6 = (short *)(*(int *)((int)pvVar3 + 0xc4) * 0x800 + (int)pvVar3);
  *(uint *)(psVar6 + 2) = uVar5 * 0xc + 7;
  *psVar6 = (short)local_8;
  _Dst = psVar6 + 4;
  if ((short)local_8 != 0) {
    local_8 = 0;
    do {
      piVar1 = *(int **)(param_1 + 0x24);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (((int)local_8 < 0) || (iVar4 + -1 < (int)local_8)) {
        _Src = (void *)0x0;
      }
      else {
        _Src = *(void **)(piVar1[2] + local_8 * 4);
      }
      memmove(_Dst,_Src,0xc);
      FUN_5bf4a520((int)_Dst);
      _Dst = _Dst + 6;
      local_8 = local_8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_5bf4a500((undefined1 *)psVar6);
  *param_2 = pvVar3;
  *param_3 = uVar7;
  return 0;
}


