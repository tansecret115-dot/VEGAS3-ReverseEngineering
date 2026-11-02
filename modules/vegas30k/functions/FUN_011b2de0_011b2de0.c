/* Module: vegas30k.dll
   Function: FUN_011b2de0
   Address: 011b2de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b2de0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined1 *puStack_44;
  int *piStack_40;
  undefined4 *puStack_3c;
  int iStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 local_1c [6];
  
  piStack_4c = *(int **)(param_1 + 0xc70);
  if (piStack_4c != (int *)0x0) {
    if (*(int *)(param_1 + 0xc7c) == 0) {
      puStack_3c = *(undefined4 **)(param_1 + 0xc74);
      puStack_44 = *(undefined1 **)(param_1 + 400);
      piStack_40 = (int *)param_3;
      piStack_48 = (int *)param_2;
      piStack_50 = (int *)0x11b2faa;
      uVar2 = (**(code **)(*piStack_4c + 0x34))();
      *(undefined4 *)(param_1 + 0xc74) = 0;
      return uVar2;
    }
    puStack_3c = local_1c;
    local_1c[0] = 0;
    puStack_44 = (undefined1 *)0x11b2e1c;
    piStack_40 = piStack_4c;
    (**(code **)(*piStack_4c + 0xc))();
    if (piStack_24 != (int *)0x0) {
      puStack_44 = &stack0xffffffd0;
      piStack_48 = piStack_24;
      piStack_4c = (int *)0x11b2e3a;
      (**(code **)(*piStack_24 + 0xb8))();
      if (unaff_EDI != (int *)0x0) {
        iStack_28 = *(int *)(param_1 + 0xc80);
        piStack_24 = *(int **)(param_1 + 0xc84);
        piStack_4c = *(int **)(param_1 + 400);
        piStack_50 = &iStack_28;
        uStack_20 = 0;
        local_1c[0] = 0;
        iVar1 = FUN_011a20a0();
        if ((iVar1 == 0) && ((double)CONCAT44(piStack_24,iStack_28) != *(double *)(param_1 + 0xc80))
           ) {
          *(int *)(param_1 + 0xc80) = iStack_28;
          *(undefined4 *)(param_1 + 0xc78) = 1;
          *(int **)(param_1 + 0xc84) = piStack_24;
        }
        piStack_50 = (int *)&stack0xffffffd0;
        piStack_4c = (int *)0x0;
        iVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1);
        while (iVar1 == 0) {
          puStack_44 = (undefined1 *)0x0;
          (**(code **)(*piStack_40 + 0x10))(piStack_40,&DAT_011da7b0,&puStack_44);
          if (piStack_50 != (int *)0x0) {
            if (((*(int *)(param_1 + 0xc74) != 0) || (*(int *)(param_1 + 0xc78) != 0)) ||
               (iVar1 = (**(code **)(*piStack_50 + 0x1c))(piStack_50), iVar1 != 1)) {
              (**(code **)(*piStack_50 + 0x20))
                        (piStack_50,*(undefined4 *)(param_1 + 0xc74),
                         *(undefined4 *)(param_1 + 0xc80),*(undefined4 *)(param_1 + 0xc84));
            }
            (**(code **)(*piStack_50 + 8))(piStack_50);
          }
          (**(code **)(*piStack_4c + 8))(piStack_4c);
          iVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&piStack_50,0);
        }
        (**(code **)(*piStack_48 + 8))(piStack_48);
        (**(code **)(*piStack_40 + 8))(piStack_40);
        uVar2 = (**(code **)(**(int **)(param_1 + 0xc70) + 0x34))
                          (*(int **)(param_1 + 0xc70),param_2,*(undefined4 *)(param_1 + 400),param_3
                           ,*(undefined4 *)(param_1 + 0xc74));
        *(undefined4 *)(param_1 + 0xc74) = 0;
        *(undefined4 *)(param_1 + 0xc78) = 0;
        return uVar2;
      }
    }
  }
  return param_3;
}


