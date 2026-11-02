/* Module: rmme3260.dll
   Function: FUN_66243a30
   Address: 66243a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_66243a30(void *this,undefined4 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)((int)this + 0x1d);
  if ((piVar1 != (int *)0x0) && (param_3 != *piVar1)) {
    local_c = 0xffffffff;
    local_8 = 0xffffffff;
    *(undefined4 *)((int)this + 0x1d) = 0;
    FUN_66243cf0(0x3007,&local_c,param_2,piVar1,0);
  }
  if ((param_3 != 0) &&
     ((*(int **)((int)this + 0x1d) == (int *)0x0 || (param_3 != **(int **)((int)this + 0x1d))))) {
    if (param_4 == (int *)0x0) {
      FUN_66243c60(this,param_3,(int *)&param_4);
    }
    iVar2 = FUN_66243cf0(0x3006,param_1,param_2,param_4,1);
    if (iVar2 != 0) {
      *(int **)((int)this + 0x1d) = param_4;
    }
  }
  return;
}


