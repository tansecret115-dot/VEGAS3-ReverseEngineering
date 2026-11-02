/* Module: sfpublish.dll
   Function: FUN_00411700
   Address: 00411700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411700(void *this,LPCSTR param_1,uchar *param_2)

{
  int *piVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
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
    this_00 = *(undefined4 **)(piVar1[2] + iVar4 * 4);
    iVar3 = lstrcmpiA(param_1,(LPCSTR)*this_00);
    if (iVar3 == 0) {
      uVar2 = FUN_00410bb0(this_00,param_2);
      return uVar2;
    }
    iVar4 = iVar4 + 1;
  }
  return 0x8004e00a;
}


