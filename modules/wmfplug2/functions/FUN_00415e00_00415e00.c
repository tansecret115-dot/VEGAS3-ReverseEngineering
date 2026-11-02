/* Module: wmfplug2.dll
   Function: FUN_00415e00
   Address: 00415e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00415e00(void *this,undefined4 param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  int *piVar3;
  int unaff_EBX;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  iVar1 = FUN_00415ef0((uint)this);
  if (-1 < iVar1) {
    pvVar2 = GlobalAlloc(0x40,0x2c);
    piVar3 = GlobalLock(pvVar2);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      iVar1 = *(int *)((int)this + 0xc);
      piVar3[1] = 0;
      piVar3[2] = iVar1;
      piVar3[3] = -1;
      piVar3[4] = 0;
      piVar3[5] = 0xc;
      piVar3[6] = 100;
      piVar3[8] = 0;
      piVar3[9] = 0;
      *piVar3 = (int)&PTR_FUN_0047bb98;
      piVar3[10] = 0;
    }
    *(int **)((int)this + 8) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
      iVar1 = FUN_00416020((int)this);
      if (iVar1 < 0) {
        return iVar1;
      }
      pvVar2 = GlobalAlloc(0x40,0x2c);
      piVar3 = GlobalLock(pvVar2);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        iVar1 = *(int *)((int)this + 0x14);
        piVar3[1] = 0;
        piVar3[2] = iVar1;
        piVar3[3] = -1;
        piVar3[4] = 0;
        piVar3[5] = 0xc;
        piVar3[6] = 100;
        piVar3[8] = 0;
        piVar3[9] = 0;
        *piVar3 = (int)&PTR_FUN_0047bc18;
        piVar3[10] = 0;
      }
      *(int **)((int)this + 0x10) = piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
        return unaff_EBX;
      }
    }
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}


