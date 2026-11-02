/* Module: sfpublish.dll
   Function: FUN_00411660
   Address: 00411660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411660(void *this,LPCSTR param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    piVar1 = *(int **)((int)this + 0x2c);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 <= iVar3) break;
    iVar2 = lstrcmpiA(param_1,(LPCSTR)**(undefined4 **)(piVar1[2] + iVar3 * 4));
    if (iVar2 == 0) {
      *(int *)((int)this + 0x30) = iVar3;
      return 0;
    }
    iVar3 = iVar3 + 1;
  }
  return 0x8004e00a;
}


