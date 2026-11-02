/* Module: oggplug.dll
   Function: FUN_00401ba0
   Address: 00401ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00401bfb) */
/* WARNING: Removing unreachable block (ram,0x00401c03) */

undefined4 * __thiscall FUN_00401ba0(void *this,undefined4 param_1)

{
  HGLOBAL pvVar1;
  undefined4 *pMem;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined ***)this = &PTR_LAB_00447520;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x424) = param_1;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  pvVar1 = GlobalAlloc(0x42,0x20);
  pMem = GlobalLock(pvVar1);
  puVar3 = pMem;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *pMem = 0x20;
  pMem[1] = pMem[1] & 0xfffffffe;
  puVar3 = pMem;
  puVar4 = (undefined4 *)((int)this + 0x404);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  return this;
}


