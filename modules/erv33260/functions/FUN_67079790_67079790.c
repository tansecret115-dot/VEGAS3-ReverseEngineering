/* Module: erv33260.dll
   Function: FUN_67079790
   Address: 67079790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_67079790(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  (**(code **)(**(int **)((int)param_1 + 0x1c4) + 8))();
  FUN_67079640(param_1,*(void **)((int)param_1 + 0x1c4));
  if (*(int *)((int)param_1 + 0x1cc) == 0) {
    return 0;
  }
  do {
    uVar3 = 0;
    if (*(int *)((int)param_1 + 0x1d0) != 0) {
      do {
        iVar1 = *(int *)((int)param_1 + 0x178);
        if (iVar1 == 0) {
          FUN_6707d6f0(*(int *)((int)param_1 + 0x1c4),1,1);
          FUN_6707d6f0(*(int *)((int)param_1 + 0x1c4),0,2);
          FUN_6707b240(*(void **)((int)param_1 + 0x1c4),0,2,(uint)*(byte *)((int)param_1 + 0x1c0));
          FUN_6707b280(*(void **)((int)param_1 + 0x1c4),(short *)0x0,0,(undefined *)0x3,0,
                       (uint)*(byte *)((int)param_1 + 0x1c0));
        }
        else {
          if ((iVar1 != 1) && (iVar1 != 2)) {
            return 1;
          }
          FUN_6707d6f0(*(int *)((int)param_1 + 0x1c4),1,1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)param_1 + 0x1d0));
    }
    uVar2 = uVar2 + 1;
    if (*(uint *)((int)param_1 + 0x1cc) <= uVar2) {
      return 0;
    }
  } while( true );
}


