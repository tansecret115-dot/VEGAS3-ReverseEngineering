/* Module: encn3260.dll
   Function: FUN_66496340
   Address: 66496340
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_66496340(void *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  puVar1 = *(undefined4 **)((int)param_1 + 10);
  iVar4 = puVar1[3];
  do {
    if (iVar4 == 0) {
      *(undefined4 *)((int)param_1 + 0x3a) = 1;
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      return -(uint)(*(short *)((int)param_1 + 0x6e) != *(short *)((int)param_1 + 0x76)) &
             0x8004000c;
    }
    piVar3 = (int *)FUN_664c04d0(puVar1);
    piVar3 = (int *)*piVar3;
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar3 + 0x18))();
      iVar4 = (**(code **)(*piVar3 + 0x28))();
      if ((uint)*(ushort *)((int)param_1 + 0x6a) != (uint)uVar2 - iVar4) {
        return 0x8004000c;
      }
      uVar5 = (**(code **)(*piVar3 + 0x14))();
      iVar4 = FUN_66495960(param_1,(uint)*(ushort *)((int)param_1 + 0x76),uVar5);
      if (iVar4 == 0) {
        return 0;
      }
      piVar3 = (int *)FUN_664c0540(*(int **)((int)param_1 + 10));
      piVar6 = (int *)(**(code **)(*piVar3 + 0xc))();
      FUN_6648d8e0(*(void **)((int)param_1 + 4),0,
                   CONCAT22((short)((uint)piVar6 >> 0x10),*(undefined2 *)((int)param_1 + 8)),piVar6)
      ;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
      }
      FUN_66496530(param_1,piVar3);
      if (piVar3 != (int *)0x0) {
        piVar6 = (int *)piVar3[7];
        *piVar3 = (int)&PTR_FUN_664dc580;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        operator_delete(piVar3);
      }
    }
    puVar1 = *(undefined4 **)((int)param_1 + 10);
    iVar4 = puVar1[3];
  } while( true );
}


