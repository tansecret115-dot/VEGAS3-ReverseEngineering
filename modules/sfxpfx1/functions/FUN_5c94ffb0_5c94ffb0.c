/* Module: sfxpfx1.dll
   Function: FUN_5c94ffb0
   Address: 5c94ffb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c94ffb0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined4 uStack_34;
  int iStack_24;
  int aiStack_20 [8];
  
  uStack_34 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (-1 < iVar1) {
    if (iStack_24 == 0x24) {
      iVar1 = 4;
      bVar4 = true;
      piVar2 = aiStack_20;
      piVar3 = &DAT_5c98c340;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *piVar3;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&uStack_34,0x10);
        if (-1 < iVar1) {
          (**(code **)(*(int *)this + 0x10))(this,&stack0xffffffbc);
        }
        FUN_5c94fed0(this,100);
        return iVar1;
      }
    }
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}


