/* Module: wavplug.dll
   Function: FUN_5f385ed0
   Address: 5f385ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5f385ed0(void *this,int *param_1,LPCSTR param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_ESI;
  int iVar4;
  int *unaff_EDI;
  int *piVar5;
  undefined4 uStack_8;
  int *local_4;
  
  puVar3 = (undefined4 *)0x0;
  piVar5 = *(int **)((int)this + 0x218);
  if (piVar5 != (int *)0x0) {
    if (*piVar5 == 0) {
      return 0;
    }
    puVar3 = *(undefined4 **)piVar5[2];
    if (puVar3 == (undefined4 *)0x0) {
      return 0x8000ffff;
    }
  }
  piVar5 = *(int **)((int)this + 8);
  iVar4 = 1;
  if (piVar5 != (int *)0x0) {
    local_4 = (int *)0x0;
    iVar1 = (**(code **)(*piVar5 + 0x18))(piVar5,&local_4);
    if ((-1 < iVar1) && (local_4 != (int *)0x0)) {
      uStack_8 = 0;
      piVar5 = local_4;
      iVar1 = (**(code **)*local_4)(local_4,&DAT_5f3c9cb0,&uStack_8);
      if ((-1 < iVar1) && (unaff_ESI != (int *)0x0)) {
        iVar4 = (**(code **)(*unaff_ESI + 0x18))(unaff_ESI,0x2712,0);
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  uVar2 = FUN_5f394360(param_1,param_2,puVar3,*(int *)((int)this + 0x220),0,iVar4,0);
  return uVar2;
}


