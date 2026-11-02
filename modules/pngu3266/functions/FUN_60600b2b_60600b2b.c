/* Module: pngu3266.dll
   Function: FUN_60600b2b
   Address: 60600b2b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60600b2b(CPNDialog *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_18 [3];
  undefined4 *local_c;
  
  *(undefined ***)param_1 = &PTR_FUN_60628720;
  if (*(void **)(param_1 + 0xd0) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xd0));
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(void **)(param_1 + 0xd4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xe0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xe0))(1);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xe4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xe4))(1);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0xdc);
  if (pvVar1 != (void *)0x0) {
    FUN_605f2946(local_18,pvVar1,-(uint)(*(int *)((int)pvVar1 + 8) != 0));
    iVar3 = *(int *)(*(int *)(param_1 + 0xdc) + 8);
    if (0 < iVar3) {
      do {
        if (local_c != (undefined4 *)0x0) {
          (**(code **)*local_c)(1);
        }
        FUN_60600c0a(local_18);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar2 = *(undefined4 **)(param_1 + 0xdc);
    if (puVar2 != (undefined4 *)0x0) {
      thunk_FUN_60619a50(puVar2);
      operator_delete(puVar2);
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  CPNDialog::~CPNDialog(param_1);
  return;
}


