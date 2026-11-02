/* Module: sfpublish.dll
   Function: FUN_004114e0
   Address: 004114e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004114e0(void *this,uchar *param_1)

{
  int *piVar1;
  uchar *lpString1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  uchar *this_00;
  int iVar3;
  int iVar4;
  
  lpString1 = param_1;
  iVar4 = 0;
  while( true ) {
    piVar1 = *(int **)((int)this + 0x2c);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (iVar3 <= iVar4) break;
    iVar3 = lstrcmpiA((LPCSTR)lpString1,(LPCSTR)**(undefined4 **)(piVar1[2] + iVar4 * 4));
    if (iVar3 == 0) {
      return -0x7ffb1f57;
    }
    iVar4 = iVar4 + 1;
  }
  hMem = GlobalAlloc(0x40,0x18);
  puVar2 = GlobalLock(hMem);
  if ((puVar2 != (undefined4 *)0x0) &&
     (this_00 = (uchar *)FUN_00410a60(puVar2), this_00 != (uchar *)0x0)) {
    iVar4 = FUN_00410b40(this_00,lpString1);
    if (iVar4 < 0) {
      return iVar4;
    }
    param_1 = this_00;
    iVar4 = FUN_0041da20(*(int **)((int)this + 0x2c),-1,(int *)&param_1,1);
    if (iVar4 < 0) {
      return iVar4;
    }
    if (*(int *)((int)this + 0x30) != -1) {
      return iVar4;
    }
    *(undefined4 *)((int)this + 0x30) = 0;
    return iVar4;
  }
  return -0x7ff8fff2;
}


