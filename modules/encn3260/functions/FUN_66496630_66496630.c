/* Module: encn3260.dll
   Function: FUN_66496630
   Address: 66496630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66496630(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *local_8;
  
  if (*(int *)((int)param_1 + 0x20e) != 0) {
    local_8 = (int *)0x0;
    piVar2 = (int *)FUN_664952a0(param_1,&local_8);
    while (((piVar2 != (int *)0x40080 && (piVar2 != (int *)0x40042)) && (piVar2 != (int *)0x40040)))
    {
      piVar3 = (int *)(**(code **)(*local_8 + 0xc))();
      if (*(int *)((int)param_1 + 0x1e6) != 0) {
        FUN_6648d8e0(*(void **)((int)param_1 + 4),piVar2,
                     CONCAT22((short)((uint)*(int *)((int)param_1 + 0x1e6) >> 0x10),
                              *(undefined2 *)((int)param_1 + 8)),piVar3);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      piVar3 = local_8;
      if (local_8 != (int *)0x0) {
        *local_8 = (int)&PTR_FUN_664dc580;
        piVar1 = (int *)local_8[7];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        operator_delete(piVar3);
      }
      if (piVar2 != (int *)0x0) {
        return;
      }
      local_8 = piVar2;
      piVar2 = (int *)FUN_664952a0(param_1,&local_8);
    }
  }
  return;
}


