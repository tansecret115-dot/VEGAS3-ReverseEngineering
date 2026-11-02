/* Module: sfpublish.dll
   Function: FUN_00411aa0
   Address: 00411aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __thiscall FUN_00411aa0(void *this,LPCSTR param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
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
      pcVar3 = (char *)puVar2[5];
      if (pcVar3 != (char *)0x0) {
        return pcVar3;
      }
      return "NO MEDIA RESTRICTIONS";
    }
    iVar5 = iVar5 + 1;
  }
  return (char *)0x0;
}


