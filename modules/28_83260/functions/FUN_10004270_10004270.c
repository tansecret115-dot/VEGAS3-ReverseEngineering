/* Module: 28_83260.dll
   Function: FUN_10004270
   Address: 10004270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10004270(void *this,int param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_44 [16];
  
  FUN_100046a0(local_44,param_1,0x20);
  piVar3 = local_44;
  param_1 = 0x20;
  do {
    iVar2 = *(int *)((int)this + 0x980);
    *(int *)((int)this + 0x984) = iVar2;
    iVar1 = *piVar3;
    *(int *)((int)this + 0x974) = (int)this + iVar2 * 4 + 0x884;
    FUN_100043b0(this,CONCAT22((short)((uint)iVar2 >> 0x10),(short)iVar1));
    iVar2 = *(int *)((int)this + 0x980) + 5;
    *(int *)((int)this + 0x984) = iVar2;
    if (0x3b < iVar2) {
      *(undefined4 *)((int)this + 0x984) = 0;
    }
    FUN_10001d70((float *)((int)this + *(int *)((int)this + 0x984) * 4 + 0x884),param_2,5);
    param_2 = param_2 + 5;
    FUN_10004530(this);
    iVar2 = *(int *)((int)this + 0x980) + 5;
    *(int *)((int)this + 0x980) = iVar2;
    if (0x3b < iVar2) {
      *(undefined4 *)((int)this + 0x980) = 0;
    }
    piVar3 = (int *)((int)piVar3 + 2);
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}


