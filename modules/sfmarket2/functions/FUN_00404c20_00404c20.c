/* Module: sfmarket2.dll
   Function: FUN_00404c20
   Address: 00404c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00404c20(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_48;
  int local_44;
  HKEY__ local_40 [16];
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x1be0) != 0) {
    FUN_00418200(*(int *)((int)this + 0x1be0));
    _mbscpy((uchar *)local_40,(uchar *)(param_2 + 0x77));
    iVar2 = FUN_00416dd0(*(void **)((int)this + 0x1be0),&local_44,&local_48,local_40,(uint *)0x0,
                         (undefined4 *)0x0);
    if (iVar2 < 1) {
      if ((iVar2 != 0) && (iVar2 != -0x7ffb1ecb)) {
        return iVar2;
      }
    }
    else {
      if (iVar2 < 0x4e12c) {
        return iVar2;
      }
      if (0x4e132 < iVar2) {
        return iVar2;
      }
    }
    piVar1 = *(int **)((int)this + 0x1be4);
    iVar4 = 0;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((iVar3 <= iVar4) ||
         ((iVar3 = *(int *)(piVar1[2] + iVar4 * 4), iVar3 != 0 &&
          (local_48 == *(uint *)(iVar3 + 0x20c))))) break;
      iVar4 = iVar4 + 1;
    }
    iVar3 = 0;
    if (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
    }
    if (iVar3 <= iVar4) {
      iVar2 = -0x7ffb1ecd;
    }
  }
  return iVar2;
}


