/* Module: sfppack3.dll
   Function: FUN_5cc39120
   Address: 5cc39120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc39120(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)((int)this + 0x60) = param_1[3];
  *(float *)((int)this + 100) = (float)*param_1 * _DAT_5cc8816c;
  *(float *)((int)this + 0x68) = (float)param_1[1] * _DAT_5cc8816c;
  uVar1 = ftol();
  *(undefined4 *)((int)this + 0x6c) = uVar1;
  iVar2 = ftol();
  *(int *)((int)this + 0x74) = iVar2;
  if (iVar2 < 1) {
    *(undefined4 *)((int)this + 0x74) = 1;
  }
  iVar2 = ftol();
  *(int *)((int)this + 0x7c) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x7c) = 1;
  }
  *(float *)((int)this + 0x80) = _DAT_5cc88168 / (float)*(int *)((int)this + 0x7c);
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  *(undefined4 *)((int)this + 0x50) = 1;
  return 0;
}


