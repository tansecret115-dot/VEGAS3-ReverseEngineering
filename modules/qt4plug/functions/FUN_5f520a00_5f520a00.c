/* Module: qt4plug.dll
   Function: FUN_5f520a00
   Address: 5f520a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f520a00(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)((int)this + 0x30) == 0) {
    return 0x80004005;
  }
  iVar2 = FUN_5f5782f0();
  if (iVar2 == 0) {
    FUN_5f520b00();
  }
  if ((*(int *)(*(int *)((int)this + 0x30) + 0x428) == 0) && (param_1 != 0)) {
    piVar1 = *(int **)((int)this + 0x2c);
    uVar5 = 0x80004005;
    if (piVar1 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0x42,4);
      *(undefined4 *)(*(int *)((int)this + 0x30) + 0x428) = uVar3;
      if (*(int *)(*(int *)((int)this + 0x30) + 0x428) != 0) {
        puVar4 = (undefined4 *)
                 (**(code **)(**(int **)((int)this + 0x2c) + 0x20))
                           (*(int **)((int)this + 0x2c),0x42,0x28);
        if ((*(int *)((int)this + 0x34) == 0) ||
           (puVar6 = *(undefined4 **)(*(int *)((int)this + 0x34) + 0x428),
           puVar6 == (undefined4 *)0x0)) {
          FUN_5f52ef30(puVar4,0x1b,0xb0,0x90,(uint *)0x0,0,(int *)0x0);
        }
        else if ((undefined4 *)puVar6[0x12] == (undefined4 *)0x0) {
          if ((undefined4 *)*puVar6 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)*puVar6;
            puVar7 = puVar4;
            for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
        }
        else {
          puVar6 = (undefined4 *)puVar6[0x12];
          puVar7 = puVar4;
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        uVar5 = 0;
        *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x48) = puVar4;
      }
    }
    return uVar5;
  }
  return 0;
}


