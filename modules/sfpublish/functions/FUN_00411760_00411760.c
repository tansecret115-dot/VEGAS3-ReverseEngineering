/* Module: sfpublish.dll
   Function: FUN_00411760
   Address: 00411760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * __thiscall FUN_00411760(void *this,LPCSTR param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    piVar1 = *(int **)((int)this + 0x2c);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (iVar4 <= iVar5) break;
    puVar2 = *(undefined4 **)(piVar1[2] + iVar5 * 4);
    iVar4 = lstrcmpiA(param_1,(LPCSTR)*puVar2);
    if (iVar4 == 0) {
      iVar5 = FUN_00410c20((int)puVar2);
      if (iVar5 == 0) {
        return &DAT_004358dc;
      }
      puVar3 = (undefined *)FUN_00410c20((int)puVar2);
      return puVar3;
    }
    iVar5 = iVar5 + 1;
  }
  return (undefined *)0x0;
}


